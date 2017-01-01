#pragma once
#include <windows.h>
#include <GL/gl.h>
#include "glext.h"

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) 
{
	reinterpret_cast<PFNGLDRAWRANGEELEMENTSPROC>(wglGetProcAddress("glDrawRangeElements"))(mode, start, end, count, type, indices);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXIMAGE3DPROC>(wglGetProcAddress("glTexImage3D"))(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXSUBIMAGE3DPROC>(wglGetProcAddress("glTexSubImage3D"))(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DPROC>(wglGetProcAddress("glCopyTexSubImage3D"))(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glActiveTexture(GLenum texture) 
{
	reinterpret_cast<PFNGLACTIVETEXTUREPROC>(wglGetProcAddress("glActiveTexture"))(texture);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert) 
{
	reinterpret_cast<PFNGLSAMPLECOVERAGEPROC>(wglGetProcAddress("glSampleCoverage"))(value, invert);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DPROC>(wglGetProcAddress("glCompressedTexImage3D"))(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DPROC>(wglGetProcAddress("glCompressedTexImage2D"))(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE1DPROC>(wglGetProcAddress("glCompressedTexImage1D"))(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC>(wglGetProcAddress("glCompressedTexSubImage3D"))(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC>(wglGetProcAddress("glCompressedTexSubImage2D"))(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC>(wglGetProcAddress("glCompressedTexSubImage1D"))(target, level, xoffset, width, format, imageSize, data);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void *img) 
{
	reinterpret_cast<PFNGLGETCOMPRESSEDTEXIMAGEPROC>(wglGetProcAddress("glGetCompressedTexImage"))(target, level, img);
}

inline void glClientActiveTexture(GLenum texture) 
{
	reinterpret_cast<PFNGLCLIENTACTIVETEXTUREPROC>(wglGetProcAddress("glClientActiveTexture"))(texture);
}

inline void glMultiTexCoord1d(GLenum target, GLdouble s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1DPROC>(wglGetProcAddress("glMultiTexCoord1d"))(target, s);
}

inline void glMultiTexCoord1dv(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1DVPROC>(wglGetProcAddress("glMultiTexCoord1dv"))(target, v);
}

inline void glMultiTexCoord1f(GLenum target, GLfloat s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1FPROC>(wglGetProcAddress("glMultiTexCoord1f"))(target, s);
}

inline void glMultiTexCoord1fv(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1FVPROC>(wglGetProcAddress("glMultiTexCoord1fv"))(target, v);
}

inline void glMultiTexCoord1i(GLenum target, GLint s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1IPROC>(wglGetProcAddress("glMultiTexCoord1i"))(target, s);
}

inline void glMultiTexCoord1iv(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1IVPROC>(wglGetProcAddress("glMultiTexCoord1iv"))(target, v);
}

inline void glMultiTexCoord1s(GLenum target, GLshort s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1SPROC>(wglGetProcAddress("glMultiTexCoord1s"))(target, s);
}

inline void glMultiTexCoord1sv(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1SVPROC>(wglGetProcAddress("glMultiTexCoord1sv"))(target, v);
}

inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2DPROC>(wglGetProcAddress("glMultiTexCoord2d"))(target, s, t);
}

inline void glMultiTexCoord2dv(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2DVPROC>(wglGetProcAddress("glMultiTexCoord2dv"))(target, v);
}

inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2FPROC>(wglGetProcAddress("glMultiTexCoord2f"))(target, s, t);
}

inline void glMultiTexCoord2fv(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2FVPROC>(wglGetProcAddress("glMultiTexCoord2fv"))(target, v);
}

inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2IPROC>(wglGetProcAddress("glMultiTexCoord2i"))(target, s, t);
}

inline void glMultiTexCoord2iv(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2IVPROC>(wglGetProcAddress("glMultiTexCoord2iv"))(target, v);
}

inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2SPROC>(wglGetProcAddress("glMultiTexCoord2s"))(target, s, t);
}

inline void glMultiTexCoord2sv(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2SVPROC>(wglGetProcAddress("glMultiTexCoord2sv"))(target, v);
}

inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3DPROC>(wglGetProcAddress("glMultiTexCoord3d"))(target, s, t, r);
}

inline void glMultiTexCoord3dv(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3DVPROC>(wglGetProcAddress("glMultiTexCoord3dv"))(target, v);
}

inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3FPROC>(wglGetProcAddress("glMultiTexCoord3f"))(target, s, t, r);
}

inline void glMultiTexCoord3fv(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3FVPROC>(wglGetProcAddress("glMultiTexCoord3fv"))(target, v);
}

inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3IPROC>(wglGetProcAddress("glMultiTexCoord3i"))(target, s, t, r);
}

inline void glMultiTexCoord3iv(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3IVPROC>(wglGetProcAddress("glMultiTexCoord3iv"))(target, v);
}

inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3SPROC>(wglGetProcAddress("glMultiTexCoord3s"))(target, s, t, r);
}

inline void glMultiTexCoord3sv(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3SVPROC>(wglGetProcAddress("glMultiTexCoord3sv"))(target, v);
}

inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4DPROC>(wglGetProcAddress("glMultiTexCoord4d"))(target, s, t, r, q);
}

inline void glMultiTexCoord4dv(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4DVPROC>(wglGetProcAddress("glMultiTexCoord4dv"))(target, v);
}

inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4FPROC>(wglGetProcAddress("glMultiTexCoord4f"))(target, s, t, r, q);
}

inline void glMultiTexCoord4fv(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4FVPROC>(wglGetProcAddress("glMultiTexCoord4fv"))(target, v);
}

inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4IPROC>(wglGetProcAddress("glMultiTexCoord4i"))(target, s, t, r, q);
}

inline void glMultiTexCoord4iv(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4IVPROC>(wglGetProcAddress("glMultiTexCoord4iv"))(target, v);
}

inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4SPROC>(wglGetProcAddress("glMultiTexCoord4s"))(target, s, t, r, q);
}

inline void glMultiTexCoord4sv(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4SVPROC>(wglGetProcAddress("glMultiTexCoord4sv"))(target, v);
}

inline void glLoadTransposeMatrixf(const GLfloat *m) 
{
	reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXFPROC>(wglGetProcAddress("glLoadTransposeMatrixf"))(m);
}

inline void glLoadTransposeMatrixd(const GLdouble *m) 
{
	reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXDPROC>(wglGetProcAddress("glLoadTransposeMatrixd"))(m);
}

inline void glMultTransposeMatrixf(const GLfloat *m) 
{
	reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXFPROC>(wglGetProcAddress("glMultTransposeMatrixf"))(m);
}

inline void glMultTransposeMatrixd(const GLdouble *m) 
{
	reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXDPROC>(wglGetProcAddress("glMultTransposeMatrixd"))(m);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) 
{
	reinterpret_cast<PFNGLBLENDFUNCSEPARATEPROC>(wglGetProcAddress("glBlendFuncSeparate"))(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount) 
{
	reinterpret_cast<PFNGLMULTIDRAWARRAYSPROC>(wglGetProcAddress("glMultiDrawArrays"))(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSPROC>(wglGetProcAddress("glMultiDrawElements"))(mode, count, type, indices, drawcount);
}

inline void glPointParameterf(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFPROC>(wglGetProcAddress("glPointParameterf"))(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFVPROC>(wglGetProcAddress("glPointParameterfv"))(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERIPROC>(wglGetProcAddress("glPointParameteri"))(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERIVPROC>(wglGetProcAddress("glPointParameteriv"))(pname, params);
}

inline void glFogCoordf(GLfloat coord) 
{
	reinterpret_cast<PFNGLFOGCOORDFPROC>(wglGetProcAddress("glFogCoordf"))(coord);
}

inline void glFogCoordfv(const GLfloat *coord) 
{
	reinterpret_cast<PFNGLFOGCOORDFVPROC>(wglGetProcAddress("glFogCoordfv"))(coord);
}

inline void glFogCoordd(GLdouble coord) 
{
	reinterpret_cast<PFNGLFOGCOORDDPROC>(wglGetProcAddress("glFogCoordd"))(coord);
}

inline void glFogCoorddv(const GLdouble *coord) 
{
	reinterpret_cast<PFNGLFOGCOORDDVPROC>(wglGetProcAddress("glFogCoorddv"))(coord);
}

inline void glFogCoordPointer(GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLFOGCOORDPOINTERPROC>(wglGetProcAddress("glFogCoordPointer"))(type, stride, pointer);
}

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3BPROC>(wglGetProcAddress("glSecondaryColor3b"))(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3BVPROC>(wglGetProcAddress("glSecondaryColor3bv"))(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3DPROC>(wglGetProcAddress("glSecondaryColor3d"))(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3DVPROC>(wglGetProcAddress("glSecondaryColor3dv"))(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3FPROC>(wglGetProcAddress("glSecondaryColor3f"))(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3FVPROC>(wglGetProcAddress("glSecondaryColor3fv"))(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3IPROC>(wglGetProcAddress("glSecondaryColor3i"))(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3IVPROC>(wglGetProcAddress("glSecondaryColor3iv"))(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3SPROC>(wglGetProcAddress("glSecondaryColor3s"))(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3SVPROC>(wglGetProcAddress("glSecondaryColor3sv"))(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UBPROC>(wglGetProcAddress("glSecondaryColor3ub"))(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UBVPROC>(wglGetProcAddress("glSecondaryColor3ubv"))(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UIPROC>(wglGetProcAddress("glSecondaryColor3ui"))(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UIVPROC>(wglGetProcAddress("glSecondaryColor3uiv"))(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3USPROC>(wglGetProcAddress("glSecondaryColor3us"))(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3USVPROC>(wglGetProcAddress("glSecondaryColor3usv"))(v);
}

inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLSECONDARYCOLORPOINTERPROC>(wglGetProcAddress("glSecondaryColorPointer"))(size, type, stride, pointer);
}

inline void glWindowPos2d(GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2DPROC>(wglGetProcAddress("glWindowPos2d"))(x, y);
}

inline void glWindowPos2dv(const GLdouble *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2DVPROC>(wglGetProcAddress("glWindowPos2dv"))(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2FPROC>(wglGetProcAddress("glWindowPos2f"))(x, y);
}

inline void glWindowPos2fv(const GLfloat *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2FVPROC>(wglGetProcAddress("glWindowPos2fv"))(v);
}

inline void glWindowPos2i(GLint x, GLint y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2IPROC>(wglGetProcAddress("glWindowPos2i"))(x, y);
}

inline void glWindowPos2iv(const GLint *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2IVPROC>(wglGetProcAddress("glWindowPos2iv"))(v);
}

inline void glWindowPos2s(GLshort x, GLshort y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2SPROC>(wglGetProcAddress("glWindowPos2s"))(x, y);
}

inline void glWindowPos2sv(const GLshort *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2SVPROC>(wglGetProcAddress("glWindowPos2sv"))(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3DPROC>(wglGetProcAddress("glWindowPos3d"))(x, y, z);
}

inline void glWindowPos3dv(const GLdouble *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3DVPROC>(wglGetProcAddress("glWindowPos3dv"))(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3FPROC>(wglGetProcAddress("glWindowPos3f"))(x, y, z);
}

inline void glWindowPos3fv(const GLfloat *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3FVPROC>(wglGetProcAddress("glWindowPos3fv"))(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3IPROC>(wglGetProcAddress("glWindowPos3i"))(x, y, z);
}

inline void glWindowPos3iv(const GLint *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3IVPROC>(wglGetProcAddress("glWindowPos3iv"))(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3SPROC>(wglGetProcAddress("glWindowPos3s"))(x, y, z);
}

inline void glWindowPos3sv(const GLshort *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3SVPROC>(wglGetProcAddress("glWindowPos3sv"))(v);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) 
{
	reinterpret_cast<PFNGLBLENDCOLORPROC>(wglGetProcAddress("glBlendColor"))(red, green, blue, alpha);
}

inline void glBlendEquation(GLenum mode) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONPROC>(wglGetProcAddress("glBlendEquation"))(mode);
}

inline void glGenQueries(GLsizei n, GLuint *ids) 
{
	reinterpret_cast<PFNGLGENQUERIESPROC>(wglGetProcAddress("glGenQueries"))(n, ids);
}

inline void glDeleteQueries(GLsizei n, const GLuint *ids) 
{
	reinterpret_cast<PFNGLDELETEQUERIESPROC>(wglGetProcAddress("glDeleteQueries"))(n, ids);
}

inline GLboolean glIsQuery(GLuint id) 
{
	return reinterpret_cast<PFNGLISQUERYPROC>(wglGetProcAddress("glIsQuery"))(id);
}

inline void glBeginQuery(GLenum target, GLuint id) 
{
	reinterpret_cast<PFNGLBEGINQUERYPROC>(wglGetProcAddress("glBeginQuery"))(target, id);
}

inline void glEndQuery(GLenum target) 
{
	reinterpret_cast<PFNGLENDQUERYPROC>(wglGetProcAddress("glEndQuery"))(target);
}

inline void glGetQueryiv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETQUERYIVPROC>(wglGetProcAddress("glGetQueryiv"))(target, pname, params);
}

inline void glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTIVPROC>(wglGetProcAddress("glGetQueryObjectiv"))(id, pname, params);
}

inline void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTUIVPROC>(wglGetProcAddress("glGetQueryObjectuiv"))(id, pname, params);
}

inline void glBindBuffer(GLenum target, GLuint buffer) 
{
	reinterpret_cast<PFNGLBINDBUFFERPROC>(wglGetProcAddress("glBindBuffer"))(target, buffer);
}

inline void glDeleteBuffers(GLsizei n, const GLuint *buffers) 
{
	reinterpret_cast<PFNGLDELETEBUFFERSPROC>(wglGetProcAddress("glDeleteBuffers"))(n, buffers);
}

inline void glGenBuffers(GLsizei n, GLuint *buffers) 
{
	reinterpret_cast<PFNGLGENBUFFERSPROC>(wglGetProcAddress("glGenBuffers"))(n, buffers);
}

inline GLboolean glIsBuffer(GLuint buffer) 
{
	return reinterpret_cast<PFNGLISBUFFERPROC>(wglGetProcAddress("glIsBuffer"))(buffer);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage) 
{
	reinterpret_cast<PFNGLBUFFERDATAPROC>(wglGetProcAddress("glBufferData"))(target, size, data, usage);
}

inline void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data) 
{
	reinterpret_cast<PFNGLBUFFERSUBDATAPROC>(wglGetProcAddress("glBufferSubData"))(target, offset, size, data);
}

inline void glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void *data) 
{
	reinterpret_cast<PFNGLGETBUFFERSUBDATAPROC>(wglGetProcAddress("glGetBufferSubData"))(target, offset, size, data);
}

inline GLboolean glUnmapBuffer(GLenum target) 
{
	return reinterpret_cast<PFNGLUNMAPBUFFERPROC>(wglGetProcAddress("glUnmapBuffer"))(target);
}

inline void glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETBUFFERPARAMETERIVPROC>(wglGetProcAddress("glGetBufferParameteriv"))(target, pname, params);
}

inline void glGetBufferPointerv(GLenum target, GLenum pname, void **params) 
{
	reinterpret_cast<PFNGLGETBUFFERPOINTERVPROC>(wglGetProcAddress("glGetBufferPointerv"))(target, pname, params);
}

inline void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEPROC>(wglGetProcAddress("glBlendEquationSeparate"))(modeRGB, modeAlpha);
}

inline void glDrawBuffers(GLsizei n, const GLenum *bufs) 
{
	reinterpret_cast<PFNGLDRAWBUFFERSPROC>(wglGetProcAddress("glDrawBuffers"))(n, bufs);
}

inline void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) 
{
	reinterpret_cast<PFNGLSTENCILOPSEPARATEPROC>(wglGetProcAddress("glStencilOpSeparate"))(face, sfail, dpfail, dppass);
}

inline void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) 
{
	reinterpret_cast<PFNGLSTENCILFUNCSEPARATEPROC>(wglGetProcAddress("glStencilFuncSeparate"))(face, func, ref, mask);
}

inline void glStencilMaskSeparate(GLenum face, GLuint mask) 
{
	reinterpret_cast<PFNGLSTENCILMASKSEPARATEPROC>(wglGetProcAddress("glStencilMaskSeparate"))(face, mask);
}

inline void glAttachShader(GLuint program, GLuint shader) 
{
	reinterpret_cast<PFNGLATTACHSHADERPROC>(wglGetProcAddress("glAttachShader"))(program, shader);
}

inline void glBindAttribLocation(GLuint program, GLuint index, const GLchar *name) 
{
	reinterpret_cast<PFNGLBINDATTRIBLOCATIONPROC>(wglGetProcAddress("glBindAttribLocation"))(program, index, name);
}

inline void glCompileShader(GLuint shader) 
{
	reinterpret_cast<PFNGLCOMPILESHADERPROC>(wglGetProcAddress("glCompileShader"))(shader);
}

inline GLuint glCreateProgram(void) 
{
	return reinterpret_cast<PFNGLCREATEPROGRAMPROC>(wglGetProcAddress("glCreateProgram"))();
}

inline GLuint glCreateShader(GLenum type) 
{
	return reinterpret_cast<PFNGLCREATESHADERPROC>(wglGetProcAddress("glCreateShader"))(type);
}

inline void glDeleteProgram(GLuint program) 
{
	reinterpret_cast<PFNGLDELETEPROGRAMPROC>(wglGetProcAddress("glDeleteProgram"))(program);
}

inline void glDeleteShader(GLuint shader) 
{
	reinterpret_cast<PFNGLDELETESHADERPROC>(wglGetProcAddress("glDeleteShader"))(shader);
}

inline void glDetachShader(GLuint program, GLuint shader) 
{
	reinterpret_cast<PFNGLDETACHSHADERPROC>(wglGetProcAddress("glDetachShader"))(program, shader);
}

inline void glDisableVertexAttribArray(GLuint index) 
{
	reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYPROC>(wglGetProcAddress("glDisableVertexAttribArray"))(index);
}

inline void glEnableVertexAttribArray(GLuint index) 
{
	reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYPROC>(wglGetProcAddress("glEnableVertexAttribArray"))(index);
}

inline void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) 
{
	reinterpret_cast<PFNGLGETACTIVEATTRIBPROC>(wglGetProcAddress("glGetActiveAttrib"))(program, index, bufSize, length, size, type, name);
}

inline void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) 
{
	reinterpret_cast<PFNGLGETACTIVEUNIFORMPROC>(wglGetProcAddress("glGetActiveUniform"))(program, index, bufSize, length, size, type, name);
}

inline void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) 
{
	reinterpret_cast<PFNGLGETATTACHEDSHADERSPROC>(wglGetProcAddress("glGetAttachedShaders"))(program, maxCount, count, shaders);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETATTRIBLOCATIONPROC>(wglGetProcAddress("glGetAttribLocation"))(program, name);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMIVPROC>(wglGetProcAddress("glGetProgramiv"))(program, pname, params);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) 
{
	reinterpret_cast<PFNGLGETPROGRAMINFOLOGPROC>(wglGetProcAddress("glGetProgramInfoLog"))(program, bufSize, length, infoLog);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETSHADERIVPROC>(wglGetProcAddress("glGetShaderiv"))(shader, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) 
{
	reinterpret_cast<PFNGLGETSHADERINFOLOGPROC>(wglGetProcAddress("glGetShaderInfoLog"))(shader, bufSize, length, infoLog);
}

inline void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) 
{
	reinterpret_cast<PFNGLGETSHADERSOURCEPROC>(wglGetProcAddress("glGetShaderSource"))(shader, bufSize, length, source);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETUNIFORMLOCATIONPROC>(wglGetProcAddress("glGetUniformLocation"))(program, name);
}

inline void glGetUniformfv(GLuint program, GLint location, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMFVPROC>(wglGetProcAddress("glGetUniformfv"))(program, location, params);
}

inline void glGetUniformiv(GLuint program, GLint location, GLint *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMIVPROC>(wglGetProcAddress("glGetUniformiv"))(program, location, params);
}

inline void glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBDVPROC>(wglGetProcAddress("glGetVertexAttribdv"))(index, pname, params);
}

inline void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBFVPROC>(wglGetProcAddress("glGetVertexAttribfv"))(index, pname, params);
}

inline void glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBIVPROC>(wglGetProcAddress("glGetVertexAttribiv"))(index, pname, params);
}

inline void glGetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVPROC>(wglGetProcAddress("glGetVertexAttribPointerv"))(index, pname, pointer);
}

inline GLboolean glIsProgram(GLuint program) 
{
	return reinterpret_cast<PFNGLISPROGRAMPROC>(wglGetProcAddress("glIsProgram"))(program);
}

inline GLboolean glIsShader(GLuint shader) 
{
	return reinterpret_cast<PFNGLISSHADERPROC>(wglGetProcAddress("glIsShader"))(shader);
}

inline void glLinkProgram(GLuint program) 
{
	reinterpret_cast<PFNGLLINKPROGRAMPROC>(wglGetProcAddress("glLinkProgram"))(program);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) 
{
	reinterpret_cast<PFNGLSHADERSOURCEPROC>(wglGetProcAddress("glShaderSource"))(shader, count, string, length);
}

inline void glUseProgram(GLuint program) 
{
	reinterpret_cast<PFNGLUSEPROGRAMPROC>(wglGetProcAddress("glUseProgram"))(program);
}

inline void glUniform1f(GLint location, GLfloat v0) 
{
	reinterpret_cast<PFNGLUNIFORM1FPROC>(wglGetProcAddress("glUniform1f"))(location, v0);
}

inline void glUniform2f(GLint location, GLfloat v0, GLfloat v1) 
{
	reinterpret_cast<PFNGLUNIFORM2FPROC>(wglGetProcAddress("glUniform2f"))(location, v0, v1);
}

inline void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) 
{
	reinterpret_cast<PFNGLUNIFORM3FPROC>(wglGetProcAddress("glUniform3f"))(location, v0, v1, v2);
}

inline void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) 
{
	reinterpret_cast<PFNGLUNIFORM4FPROC>(wglGetProcAddress("glUniform4f"))(location, v0, v1, v2, v3);
}

inline void glUniform1i(GLint location, GLint v0) 
{
	reinterpret_cast<PFNGLUNIFORM1IPROC>(wglGetProcAddress("glUniform1i"))(location, v0);
}

inline void glUniform2i(GLint location, GLint v0, GLint v1) 
{
	reinterpret_cast<PFNGLUNIFORM2IPROC>(wglGetProcAddress("glUniform2i"))(location, v0, v1);
}

inline void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2) 
{
	reinterpret_cast<PFNGLUNIFORM3IPROC>(wglGetProcAddress("glUniform3i"))(location, v0, v1, v2);
}

inline void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) 
{
	reinterpret_cast<PFNGLUNIFORM4IPROC>(wglGetProcAddress("glUniform4i"))(location, v0, v1, v2, v3);
}

inline void glUniform1fv(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM1FVPROC>(wglGetProcAddress("glUniform1fv"))(location, count, value);
}

inline void glUniform2fv(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM2FVPROC>(wglGetProcAddress("glUniform2fv"))(location, count, value);
}

inline void glUniform3fv(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM3FVPROC>(wglGetProcAddress("glUniform3fv"))(location, count, value);
}

inline void glUniform4fv(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM4FVPROC>(wglGetProcAddress("glUniform4fv"))(location, count, value);
}

inline void glUniform1iv(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM1IVPROC>(wglGetProcAddress("glUniform1iv"))(location, count, value);
}

inline void glUniform2iv(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM2IVPROC>(wglGetProcAddress("glUniform2iv"))(location, count, value);
}

inline void glUniform3iv(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM3IVPROC>(wglGetProcAddress("glUniform3iv"))(location, count, value);
}

inline void glUniform4iv(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM4IVPROC>(wglGetProcAddress("glUniform4iv"))(location, count, value);
}

inline void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX2FVPROC>(wglGetProcAddress("glUniformMatrix2fv"))(location, count, transpose, value);
}

inline void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX3FVPROC>(wglGetProcAddress("glUniformMatrix3fv"))(location, count, transpose, value);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX4FVPROC>(wglGetProcAddress("glUniformMatrix4fv"))(location, count, transpose, value);
}

inline void glValidateProgram(GLuint program) 
{
	reinterpret_cast<PFNGLVALIDATEPROGRAMPROC>(wglGetProcAddress("glValidateProgram"))(program);
}

inline void glVertexAttrib1d(GLuint index, GLdouble x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1DPROC>(wglGetProcAddress("glVertexAttrib1d"))(index, x);
}

inline void glVertexAttrib1dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1DVPROC>(wglGetProcAddress("glVertexAttrib1dv"))(index, v);
}

inline void glVertexAttrib1f(GLuint index, GLfloat x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1FPROC>(wglGetProcAddress("glVertexAttrib1f"))(index, x);
}

inline void glVertexAttrib1fv(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1FVPROC>(wglGetProcAddress("glVertexAttrib1fv"))(index, v);
}

inline void glVertexAttrib1s(GLuint index, GLshort x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1SPROC>(wglGetProcAddress("glVertexAttrib1s"))(index, x);
}

inline void glVertexAttrib1sv(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1SVPROC>(wglGetProcAddress("glVertexAttrib1sv"))(index, v);
}

inline void glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2DPROC>(wglGetProcAddress("glVertexAttrib2d"))(index, x, y);
}

inline void glVertexAttrib2dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2DVPROC>(wglGetProcAddress("glVertexAttrib2dv"))(index, v);
}

inline void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2FPROC>(wglGetProcAddress("glVertexAttrib2f"))(index, x, y);
}

inline void glVertexAttrib2fv(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2FVPROC>(wglGetProcAddress("glVertexAttrib2fv"))(index, v);
}

inline void glVertexAttrib2s(GLuint index, GLshort x, GLshort y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2SPROC>(wglGetProcAddress("glVertexAttrib2s"))(index, x, y);
}

inline void glVertexAttrib2sv(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2SVPROC>(wglGetProcAddress("glVertexAttrib2sv"))(index, v);
}

inline void glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3DPROC>(wglGetProcAddress("glVertexAttrib3d"))(index, x, y, z);
}

inline void glVertexAttrib3dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3DVPROC>(wglGetProcAddress("glVertexAttrib3dv"))(index, v);
}

inline void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3FPROC>(wglGetProcAddress("glVertexAttrib3f"))(index, x, y, z);
}

inline void glVertexAttrib3fv(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3FVPROC>(wglGetProcAddress("glVertexAttrib3fv"))(index, v);
}

inline void glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3SPROC>(wglGetProcAddress("glVertexAttrib3s"))(index, x, y, z);
}

inline void glVertexAttrib3sv(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3SVPROC>(wglGetProcAddress("glVertexAttrib3sv"))(index, v);
}

inline void glVertexAttrib4Nbv(GLuint index, const GLbyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NBVPROC>(wglGetProcAddress("glVertexAttrib4Nbv"))(index, v);
}

inline void glVertexAttrib4Niv(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NIVPROC>(wglGetProcAddress("glVertexAttrib4Niv"))(index, v);
}

inline void glVertexAttrib4Nsv(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NSVPROC>(wglGetProcAddress("glVertexAttrib4Nsv"))(index, v);
}

inline void glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUBPROC>(wglGetProcAddress("glVertexAttrib4Nub"))(index, x, y, z, w);
}

inline void glVertexAttrib4Nubv(GLuint index, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUBVPROC>(wglGetProcAddress("glVertexAttrib4Nubv"))(index, v);
}

inline void glVertexAttrib4Nuiv(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUIVPROC>(wglGetProcAddress("glVertexAttrib4Nuiv"))(index, v);
}

inline void glVertexAttrib4Nusv(GLuint index, const GLushort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUSVPROC>(wglGetProcAddress("glVertexAttrib4Nusv"))(index, v);
}

inline void glVertexAttrib4bv(GLuint index, const GLbyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4BVPROC>(wglGetProcAddress("glVertexAttrib4bv"))(index, v);
}

inline void glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4DPROC>(wglGetProcAddress("glVertexAttrib4d"))(index, x, y, z, w);
}

inline void glVertexAttrib4dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4DVPROC>(wglGetProcAddress("glVertexAttrib4dv"))(index, v);
}

inline void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4FPROC>(wglGetProcAddress("glVertexAttrib4f"))(index, x, y, z, w);
}

inline void glVertexAttrib4fv(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4FVPROC>(wglGetProcAddress("glVertexAttrib4fv"))(index, v);
}

inline void glVertexAttrib4iv(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4IVPROC>(wglGetProcAddress("glVertexAttrib4iv"))(index, v);
}

inline void glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4SPROC>(wglGetProcAddress("glVertexAttrib4s"))(index, x, y, z, w);
}

inline void glVertexAttrib4sv(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4SVPROC>(wglGetProcAddress("glVertexAttrib4sv"))(index, v);
}

inline void glVertexAttrib4ubv(GLuint index, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4UBVPROC>(wglGetProcAddress("glVertexAttrib4ubv"))(index, v);
}

inline void glVertexAttrib4uiv(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4UIVPROC>(wglGetProcAddress("glVertexAttrib4uiv"))(index, v);
}

inline void glVertexAttrib4usv(GLuint index, const GLushort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4USVPROC>(wglGetProcAddress("glVertexAttrib4usv"))(index, v);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBPOINTERPROC>(wglGetProcAddress("glVertexAttribPointer"))(index, size, type, normalized, stride, pointer);
}

inline void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX2X3FVPROC>(wglGetProcAddress("glUniformMatrix2x3fv"))(location, count, transpose, value);
}

inline void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX3X2FVPROC>(wglGetProcAddress("glUniformMatrix3x2fv"))(location, count, transpose, value);
}

inline void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX2X4FVPROC>(wglGetProcAddress("glUniformMatrix2x4fv"))(location, count, transpose, value);
}

inline void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX4X2FVPROC>(wglGetProcAddress("glUniformMatrix4x2fv"))(location, count, transpose, value);
}

inline void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX3X4FVPROC>(wglGetProcAddress("glUniformMatrix3x4fv"))(location, count, transpose, value);
}

inline void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX4X3FVPROC>(wglGetProcAddress("glUniformMatrix4x3fv"))(location, count, transpose, value);
}

inline void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) 
{
	reinterpret_cast<PFNGLCOLORMASKIPROC>(wglGetProcAddress("glColorMaski"))(index, r, g, b, a);
}

inline void glGetBooleani_v(GLenum target, GLuint index, GLboolean *data) 
{
	reinterpret_cast<PFNGLGETBOOLEANI_VPROC>(wglGetProcAddress("glGetBooleani_v"))(target, index, data);
}

inline void glGetIntegeri_v(GLenum target, GLuint index, GLint *data) 
{
	reinterpret_cast<PFNGLGETINTEGERI_VPROC>(wglGetProcAddress("glGetIntegeri_v"))(target, index, data);
}

inline void glEnablei(GLenum target, GLuint index) 
{
	reinterpret_cast<PFNGLENABLEIPROC>(wglGetProcAddress("glEnablei"))(target, index);
}

inline void glDisablei(GLenum target, GLuint index) 
{
	reinterpret_cast<PFNGLDISABLEIPROC>(wglGetProcAddress("glDisablei"))(target, index);
}

inline GLboolean glIsEnabledi(GLenum target, GLuint index) 
{
	return reinterpret_cast<PFNGLISENABLEDIPROC>(wglGetProcAddress("glIsEnabledi"))(target, index);
}

inline void glBeginTransformFeedback(GLenum primitiveMode) 
{
	reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKPROC>(wglGetProcAddress("glBeginTransformFeedback"))(primitiveMode);
}

inline void glEndTransformFeedback(void) 
{
	reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKPROC>(wglGetProcAddress("glEndTransformFeedback"))();
}

inline void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLBINDBUFFERRANGEPROC>(wglGetProcAddress("glBindBufferRange"))(target, index, buffer, offset, size);
}

inline void glBindBufferBase(GLenum target, GLuint index, GLuint buffer) 
{
	reinterpret_cast<PFNGLBINDBUFFERBASEPROC>(wglGetProcAddress("glBindBufferBase"))(target, index, buffer);
}

inline void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) 
{
	reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSPROC>(wglGetProcAddress("glTransformFeedbackVaryings"))(program, count, varyings, bufferMode);
}

inline void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) 
{
	reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGPROC>(wglGetProcAddress("glGetTransformFeedbackVarying"))(program, index, bufSize, length, size, type, name);
}

inline void glClampColor(GLenum target, GLenum clamp) 
{
	reinterpret_cast<PFNGLCLAMPCOLORPROC>(wglGetProcAddress("glClampColor"))(target, clamp);
}

inline void glBeginConditionalRender(GLuint id, GLenum mode) 
{
	reinterpret_cast<PFNGLBEGINCONDITIONALRENDERPROC>(wglGetProcAddress("glBeginConditionalRender"))(id, mode);
}

inline void glEndConditionalRender(void) 
{
	reinterpret_cast<PFNGLENDCONDITIONALRENDERPROC>(wglGetProcAddress("glEndConditionalRender"))();
}

inline void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBIPOINTERPROC>(wglGetProcAddress("glVertexAttribIPointer"))(index, size, type, stride, pointer);
}

inline void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBIIVPROC>(wglGetProcAddress("glGetVertexAttribIiv"))(index, pname, params);
}

inline void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBIUIVPROC>(wglGetProcAddress("glGetVertexAttribIuiv"))(index, pname, params);
}

inline void glVertexAttribI1i(GLuint index, GLint x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1IPROC>(wglGetProcAddress("glVertexAttribI1i"))(index, x);
}

inline void glVertexAttribI2i(GLuint index, GLint x, GLint y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2IPROC>(wglGetProcAddress("glVertexAttribI2i"))(index, x, y);
}

inline void glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3IPROC>(wglGetProcAddress("glVertexAttribI3i"))(index, x, y, z);
}

inline void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4IPROC>(wglGetProcAddress("glVertexAttribI4i"))(index, x, y, z, w);
}

inline void glVertexAttribI1ui(GLuint index, GLuint x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1UIPROC>(wglGetProcAddress("glVertexAttribI1ui"))(index, x);
}

inline void glVertexAttribI2ui(GLuint index, GLuint x, GLuint y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2UIPROC>(wglGetProcAddress("glVertexAttribI2ui"))(index, x, y);
}

inline void glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3UIPROC>(wglGetProcAddress("glVertexAttribI3ui"))(index, x, y, z);
}

inline void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4UIPROC>(wglGetProcAddress("glVertexAttribI4ui"))(index, x, y, z, w);
}

inline void glVertexAttribI1iv(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1IVPROC>(wglGetProcAddress("glVertexAttribI1iv"))(index, v);
}

inline void glVertexAttribI2iv(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2IVPROC>(wglGetProcAddress("glVertexAttribI2iv"))(index, v);
}

inline void glVertexAttribI3iv(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3IVPROC>(wglGetProcAddress("glVertexAttribI3iv"))(index, v);
}

inline void glVertexAttribI4iv(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4IVPROC>(wglGetProcAddress("glVertexAttribI4iv"))(index, v);
}

inline void glVertexAttribI1uiv(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1UIVPROC>(wglGetProcAddress("glVertexAttribI1uiv"))(index, v);
}

inline void glVertexAttribI2uiv(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2UIVPROC>(wglGetProcAddress("glVertexAttribI2uiv"))(index, v);
}

inline void glVertexAttribI3uiv(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3UIVPROC>(wglGetProcAddress("glVertexAttribI3uiv"))(index, v);
}

inline void glVertexAttribI4uiv(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4UIVPROC>(wglGetProcAddress("glVertexAttribI4uiv"))(index, v);
}

inline void glVertexAttribI4bv(GLuint index, const GLbyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4BVPROC>(wglGetProcAddress("glVertexAttribI4bv"))(index, v);
}

inline void glVertexAttribI4sv(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4SVPROC>(wglGetProcAddress("glVertexAttribI4sv"))(index, v);
}

inline void glVertexAttribI4ubv(GLuint index, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4UBVPROC>(wglGetProcAddress("glVertexAttribI4ubv"))(index, v);
}

inline void glVertexAttribI4usv(GLuint index, const GLushort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4USVPROC>(wglGetProcAddress("glVertexAttribI4usv"))(index, v);
}

inline void glGetUniformuiv(GLuint program, GLint location, GLuint *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMUIVPROC>(wglGetProcAddress("glGetUniformuiv"))(program, location, params);
}

inline void glBindFragDataLocation(GLuint program, GLuint color, const GLchar *name) 
{
	reinterpret_cast<PFNGLBINDFRAGDATALOCATIONPROC>(wglGetProcAddress("glBindFragDataLocation"))(program, color, name);
}

inline GLint glGetFragDataLocation(GLuint program, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETFRAGDATALOCATIONPROC>(wglGetProcAddress("glGetFragDataLocation"))(program, name);
}

inline void glUniform1ui(GLint location, GLuint v0) 
{
	reinterpret_cast<PFNGLUNIFORM1UIPROC>(wglGetProcAddress("glUniform1ui"))(location, v0);
}

inline void glUniform2ui(GLint location, GLuint v0, GLuint v1) 
{
	reinterpret_cast<PFNGLUNIFORM2UIPROC>(wglGetProcAddress("glUniform2ui"))(location, v0, v1);
}

inline void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2) 
{
	reinterpret_cast<PFNGLUNIFORM3UIPROC>(wglGetProcAddress("glUniform3ui"))(location, v0, v1, v2);
}

inline void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) 
{
	reinterpret_cast<PFNGLUNIFORM4UIPROC>(wglGetProcAddress("glUniform4ui"))(location, v0, v1, v2, v3);
}

inline void glUniform1uiv(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM1UIVPROC>(wglGetProcAddress("glUniform1uiv"))(location, count, value);
}

inline void glUniform2uiv(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM2UIVPROC>(wglGetProcAddress("glUniform2uiv"))(location, count, value);
}

inline void glUniform3uiv(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM3UIVPROC>(wglGetProcAddress("glUniform3uiv"))(location, count, value);
}

inline void glUniform4uiv(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM4UIVPROC>(wglGetProcAddress("glUniform4uiv"))(location, count, value);
}

inline void glTexParameterIiv(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLTEXPARAMETERIIVPROC>(wglGetProcAddress("glTexParameterIiv"))(target, pname, params);
}

inline void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint *params) 
{
	reinterpret_cast<PFNGLTEXPARAMETERIUIVPROC>(wglGetProcAddress("glTexParameterIuiv"))(target, pname, params);
}

inline void glGetTexParameterIiv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXPARAMETERIIVPROC>(wglGetProcAddress("glGetTexParameterIiv"))(target, pname, params);
}

inline void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETTEXPARAMETERIUIVPROC>(wglGetProcAddress("glGetTexParameterIuiv"))(target, pname, params);
}

inline void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value) 
{
	reinterpret_cast<PFNGLCLEARBUFFERIVPROC>(wglGetProcAddress("glClearBufferiv"))(buffer, drawbuffer, value);
}

inline void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value) 
{
	reinterpret_cast<PFNGLCLEARBUFFERUIVPROC>(wglGetProcAddress("glClearBufferuiv"))(buffer, drawbuffer, value);
}

inline void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value) 
{
	reinterpret_cast<PFNGLCLEARBUFFERFVPROC>(wglGetProcAddress("glClearBufferfv"))(buffer, drawbuffer, value);
}

inline void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) 
{
	reinterpret_cast<PFNGLCLEARBUFFERFIPROC>(wglGetProcAddress("glClearBufferfi"))(buffer, drawbuffer, depth, stencil);
}

inline GLboolean glIsRenderbuffer(GLuint renderbuffer) 
{
	return reinterpret_cast<PFNGLISRENDERBUFFERPROC>(wglGetProcAddress("glIsRenderbuffer"))(renderbuffer);
}

inline void glBindRenderbuffer(GLenum target, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLBINDRENDERBUFFERPROC>(wglGetProcAddress("glBindRenderbuffer"))(target, renderbuffer);
}

inline void glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers) 
{
	reinterpret_cast<PFNGLDELETERENDERBUFFERSPROC>(wglGetProcAddress("glDeleteRenderbuffers"))(n, renderbuffers);
}

inline void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers) 
{
	reinterpret_cast<PFNGLGENRENDERBUFFERSPROC>(wglGetProcAddress("glGenRenderbuffers"))(n, renderbuffers);
}

inline void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLRENDERBUFFERSTORAGEPROC>(wglGetProcAddress("glRenderbufferStorage"))(target, internalformat, width, height);
}

inline void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVPROC>(wglGetProcAddress("glGetRenderbufferParameteriv"))(target, pname, params);
}

inline GLboolean glIsFramebuffer(GLuint framebuffer) 
{
	return reinterpret_cast<PFNGLISFRAMEBUFFERPROC>(wglGetProcAddress("glIsFramebuffer"))(framebuffer);
}

inline void glBindFramebuffer(GLenum target, GLuint framebuffer) 
{
	reinterpret_cast<PFNGLBINDFRAMEBUFFERPROC>(wglGetProcAddress("glBindFramebuffer"))(target, framebuffer);
}

inline void glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers) 
{
	reinterpret_cast<PFNGLDELETEFRAMEBUFFERSPROC>(wglGetProcAddress("glDeleteFramebuffers"))(n, framebuffers);
}

inline void glGenFramebuffers(GLsizei n, GLuint *framebuffers) 
{
	reinterpret_cast<PFNGLGENFRAMEBUFFERSPROC>(wglGetProcAddress("glGenFramebuffers"))(n, framebuffers);
}

inline GLenum glCheckFramebufferStatus(GLenum target) 
{
	return reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSPROC>(wglGetProcAddress("glCheckFramebufferStatus"))(target);
}

inline void glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE1DPROC>(wglGetProcAddress("glFramebufferTexture1D"))(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DPROC>(wglGetProcAddress("glFramebufferTexture2D"))(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DPROC>(wglGetProcAddress("glFramebufferTexture3D"))(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFERPROC>(wglGetProcAddress("glFramebufferRenderbuffer"))(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(wglGetProcAddress("glGetFramebufferAttachmentParameteriv"))(target, attachment, pname, params);
}

inline void glGenerateMipmap(GLenum target) 
{
	reinterpret_cast<PFNGLGENERATEMIPMAPPROC>(wglGetProcAddress("glGenerateMipmap"))(target);
}

inline void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) 
{
	reinterpret_cast<PFNGLBLITFRAMEBUFFERPROC>(wglGetProcAddress("glBlitFramebuffer"))(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC>(wglGetProcAddress("glRenderbufferStorageMultisample"))(target, samples, internalformat, width, height);
}

inline void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERPROC>(wglGetProcAddress("glFramebufferTextureLayer"))(target, attachment, texture, level, layer);
}

inline void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length) 
{
	reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEPROC>(wglGetProcAddress("glFlushMappedBufferRange"))(target, offset, length);
}

inline void glBindVertexArray(GLuint array) 
{
	reinterpret_cast<PFNGLBINDVERTEXARRAYPROC>(wglGetProcAddress("glBindVertexArray"))(array);
}

inline void glDeleteVertexArrays(GLsizei n, const GLuint *arrays) 
{
	reinterpret_cast<PFNGLDELETEVERTEXARRAYSPROC>(wglGetProcAddress("glDeleteVertexArrays"))(n, arrays);
}

inline void glGenVertexArrays(GLsizei n, GLuint *arrays) 
{
	reinterpret_cast<PFNGLGENVERTEXARRAYSPROC>(wglGetProcAddress("glGenVertexArrays"))(n, arrays);
}

inline GLboolean glIsVertexArray(GLuint array) 
{
	return reinterpret_cast<PFNGLISVERTEXARRAYPROC>(wglGetProcAddress("glIsVertexArray"))(array);
}

inline void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) 
{
	reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDPROC>(wglGetProcAddress("glDrawArraysInstanced"))(mode, first, count, instancecount);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDPROC>(wglGetProcAddress("glDrawElementsInstanced"))(mode, count, type, indices, instancecount);
}

inline void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer) 
{
	reinterpret_cast<PFNGLTEXBUFFERPROC>(wglGetProcAddress("glTexBuffer"))(target, internalformat, buffer);
}

inline void glPrimitiveRestartIndex(GLuint index) 
{
	reinterpret_cast<PFNGLPRIMITIVERESTARTINDEXPROC>(wglGetProcAddress("glPrimitiveRestartIndex"))(index);
}

inline void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLCOPYBUFFERSUBDATAPROC>(wglGetProcAddress("glCopyBufferSubData"))(readTarget, writeTarget, readOffset, writeOffset, size);
}

inline void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) 
{
	reinterpret_cast<PFNGLGETUNIFORMINDICESPROC>(wglGetProcAddress("glGetUniformIndices"))(program, uniformCount, uniformNames, uniformIndices);
}

inline void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETACTIVEUNIFORMSIVPROC>(wglGetProcAddress("glGetActiveUniformsiv"))(program, uniformCount, uniformIndices, pname, params);
}

inline void glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName) 
{
	reinterpret_cast<PFNGLGETACTIVEUNIFORMNAMEPROC>(wglGetProcAddress("glGetActiveUniformName"))(program, uniformIndex, bufSize, length, uniformName);
}

inline GLuint glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName) 
{
	return reinterpret_cast<PFNGLGETUNIFORMBLOCKINDEXPROC>(wglGetProcAddress("glGetUniformBlockIndex"))(program, uniformBlockName);
}

inline void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKIVPROC>(wglGetProcAddress("glGetActiveUniformBlockiv"))(program, uniformBlockIndex, pname, params);
}

inline void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) 
{
	reinterpret_cast<PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC>(wglGetProcAddress("glGetActiveUniformBlockName"))(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

inline void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) 
{
	reinterpret_cast<PFNGLUNIFORMBLOCKBINDINGPROC>(wglGetProcAddress("glUniformBlockBinding"))(program, uniformBlockIndex, uniformBlockBinding);
}

inline void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSBASEVERTEXPROC>(wglGetProcAddress("glDrawElementsBaseVertex"))(mode, count, type, indices, basevertex);
}

inline void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex) 
{
	reinterpret_cast<PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC>(wglGetProcAddress("glDrawRangeElementsBaseVertex"))(mode, start, end, count, type, indices, basevertex);
}

inline void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC>(wglGetProcAddress("glDrawElementsInstancedBaseVertex"))(mode, count, type, indices, instancecount, basevertex);
}

inline void glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC>(wglGetProcAddress("glMultiDrawElementsBaseVertex"))(mode, count, type, indices, drawcount, basevertex);
}

inline void glProvokingVertex(GLenum mode) 
{
	reinterpret_cast<PFNGLPROVOKINGVERTEXPROC>(wglGetProcAddress("glProvokingVertex"))(mode);
}

inline GLsync glFenceSync(GLenum condition, GLbitfield flags) 
{
	return reinterpret_cast<PFNGLFENCESYNCPROC>(wglGetProcAddress("glFenceSync"))(condition, flags);
}

inline GLboolean glIsSync(GLsync sync) 
{
	return reinterpret_cast<PFNGLISSYNCPROC>(wglGetProcAddress("glIsSync"))(sync);
}

inline void glDeleteSync(GLsync sync) 
{
	reinterpret_cast<PFNGLDELETESYNCPROC>(wglGetProcAddress("glDeleteSync"))(sync);
}

inline GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) 
{
	return reinterpret_cast<PFNGLCLIENTWAITSYNCPROC>(wglGetProcAddress("glClientWaitSync"))(sync, flags, timeout);
}

inline void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout) 
{
	reinterpret_cast<PFNGLWAITSYNCPROC>(wglGetProcAddress("glWaitSync"))(sync, flags, timeout);
}

inline void glGetInteger64v(GLenum pname, GLint64 *data) 
{
	reinterpret_cast<PFNGLGETINTEGER64VPROC>(wglGetProcAddress("glGetInteger64v"))(pname, data);
}

inline void glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) 
{
	reinterpret_cast<PFNGLGETSYNCIVPROC>(wglGetProcAddress("glGetSynciv"))(sync, pname, bufSize, length, values);
}

inline void glGetInteger64i_v(GLenum target, GLuint index, GLint64 *data) 
{
	reinterpret_cast<PFNGLGETINTEGER64I_VPROC>(wglGetProcAddress("glGetInteger64i_v"))(target, index, data);
}

inline void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params) 
{
	reinterpret_cast<PFNGLGETBUFFERPARAMETERI64VPROC>(wglGetProcAddress("glGetBufferParameteri64v"))(target, pname, params);
}

inline void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREPROC>(wglGetProcAddress("glFramebufferTexture"))(target, attachment, texture, level);
}

inline void glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXIMAGE2DMULTISAMPLEPROC>(wglGetProcAddress("glTexImage2DMultisample"))(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXIMAGE3DMULTISAMPLEPROC>(wglGetProcAddress("glTexImage3DMultisample"))(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val) 
{
	reinterpret_cast<PFNGLGETMULTISAMPLEFVPROC>(wglGetProcAddress("glGetMultisamplefv"))(pname, index, val);
}

inline void glSampleMaski(GLuint maskNumber, GLbitfield mask) 
{
	reinterpret_cast<PFNGLSAMPLEMASKIPROC>(wglGetProcAddress("glSampleMaski"))(maskNumber, mask);
}

inline void glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name) 
{
	reinterpret_cast<PFNGLBINDFRAGDATALOCATIONINDEXEDPROC>(wglGetProcAddress("glBindFragDataLocationIndexed"))(program, colorNumber, index, name);
}

inline GLint glGetFragDataIndex(GLuint program, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETFRAGDATAINDEXPROC>(wglGetProcAddress("glGetFragDataIndex"))(program, name);
}

inline void glGenSamplers(GLsizei count, GLuint *samplers) 
{
	reinterpret_cast<PFNGLGENSAMPLERSPROC>(wglGetProcAddress("glGenSamplers"))(count, samplers);
}

inline void glDeleteSamplers(GLsizei count, const GLuint *samplers) 
{
	reinterpret_cast<PFNGLDELETESAMPLERSPROC>(wglGetProcAddress("glDeleteSamplers"))(count, samplers);
}

inline GLboolean glIsSampler(GLuint sampler) 
{
	return reinterpret_cast<PFNGLISSAMPLERPROC>(wglGetProcAddress("glIsSampler"))(sampler);
}

inline void glBindSampler(GLuint unit, GLuint sampler) 
{
	reinterpret_cast<PFNGLBINDSAMPLERPROC>(wglGetProcAddress("glBindSampler"))(unit, sampler);
}

inline void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLSAMPLERPARAMETERIPROC>(wglGetProcAddress("glSamplerParameteri"))(sampler, pname, param);
}

inline void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *param) 
{
	reinterpret_cast<PFNGLSAMPLERPARAMETERIVPROC>(wglGetProcAddress("glSamplerParameteriv"))(sampler, pname, param);
}

inline void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLSAMPLERPARAMETERFPROC>(wglGetProcAddress("glSamplerParameterf"))(sampler, pname, param);
}

inline void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param) 
{
	reinterpret_cast<PFNGLSAMPLERPARAMETERFVPROC>(wglGetProcAddress("glSamplerParameterfv"))(sampler, pname, param);
}

inline void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint *param) 
{
	reinterpret_cast<PFNGLSAMPLERPARAMETERIIVPROC>(wglGetProcAddress("glSamplerParameterIiv"))(sampler, pname, param);
}

inline void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint *param) 
{
	reinterpret_cast<PFNGLSAMPLERPARAMETERIUIVPROC>(wglGetProcAddress("glSamplerParameterIuiv"))(sampler, pname, param);
}

inline void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETSAMPLERPARAMETERIVPROC>(wglGetProcAddress("glGetSamplerParameteriv"))(sampler, pname, params);
}

inline void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETSAMPLERPARAMETERIIVPROC>(wglGetProcAddress("glGetSamplerParameterIiv"))(sampler, pname, params);
}

inline void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETSAMPLERPARAMETERFVPROC>(wglGetProcAddress("glGetSamplerParameterfv"))(sampler, pname, params);
}

inline void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETSAMPLERPARAMETERIUIVPROC>(wglGetProcAddress("glGetSamplerParameterIuiv"))(sampler, pname, params);
}

inline void glQueryCounter(GLuint id, GLenum target) 
{
	reinterpret_cast<PFNGLQUERYCOUNTERPROC>(wglGetProcAddress("glQueryCounter"))(id, target);
}

inline void glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTI64VPROC>(wglGetProcAddress("glGetQueryObjecti64v"))(id, pname, params);
}

inline void glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTUI64VPROC>(wglGetProcAddress("glGetQueryObjectui64v"))(id, pname, params);
}

inline void glVertexAttribDivisor(GLuint index, GLuint divisor) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBDIVISORPROC>(wglGetProcAddress("glVertexAttribDivisor"))(index, divisor);
}

inline void glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP1UIPROC>(wglGetProcAddress("glVertexAttribP1ui"))(index, type, normalized, value);
}

inline void glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP1UIVPROC>(wglGetProcAddress("glVertexAttribP1uiv"))(index, type, normalized, value);
}

inline void glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP2UIPROC>(wglGetProcAddress("glVertexAttribP2ui"))(index, type, normalized, value);
}

inline void glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP2UIVPROC>(wglGetProcAddress("glVertexAttribP2uiv"))(index, type, normalized, value);
}

inline void glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP3UIPROC>(wglGetProcAddress("glVertexAttribP3ui"))(index, type, normalized, value);
}

inline void glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP3UIVPROC>(wglGetProcAddress("glVertexAttribP3uiv"))(index, type, normalized, value);
}

inline void glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP4UIPROC>(wglGetProcAddress("glVertexAttribP4ui"))(index, type, normalized, value);
}

inline void glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBP4UIVPROC>(wglGetProcAddress("glVertexAttribP4uiv"))(index, type, normalized, value);
}

inline void glVertexP2ui(GLenum type, GLuint value) 
{
	reinterpret_cast<PFNGLVERTEXP2UIPROC>(wglGetProcAddress("glVertexP2ui"))(type, value);
}

inline void glVertexP2uiv(GLenum type, const GLuint *value) 
{
	reinterpret_cast<PFNGLVERTEXP2UIVPROC>(wglGetProcAddress("glVertexP2uiv"))(type, value);
}

inline void glVertexP3ui(GLenum type, GLuint value) 
{
	reinterpret_cast<PFNGLVERTEXP3UIPROC>(wglGetProcAddress("glVertexP3ui"))(type, value);
}

inline void glVertexP3uiv(GLenum type, const GLuint *value) 
{
	reinterpret_cast<PFNGLVERTEXP3UIVPROC>(wglGetProcAddress("glVertexP3uiv"))(type, value);
}

inline void glVertexP4ui(GLenum type, GLuint value) 
{
	reinterpret_cast<PFNGLVERTEXP4UIPROC>(wglGetProcAddress("glVertexP4ui"))(type, value);
}

inline void glVertexP4uiv(GLenum type, const GLuint *value) 
{
	reinterpret_cast<PFNGLVERTEXP4UIVPROC>(wglGetProcAddress("glVertexP4uiv"))(type, value);
}

inline void glTexCoordP1ui(GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP1UIPROC>(wglGetProcAddress("glTexCoordP1ui"))(type, coords);
}

inline void glTexCoordP1uiv(GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP1UIVPROC>(wglGetProcAddress("glTexCoordP1uiv"))(type, coords);
}

inline void glTexCoordP2ui(GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP2UIPROC>(wglGetProcAddress("glTexCoordP2ui"))(type, coords);
}

inline void glTexCoordP2uiv(GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP2UIVPROC>(wglGetProcAddress("glTexCoordP2uiv"))(type, coords);
}

inline void glTexCoordP3ui(GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP3UIPROC>(wglGetProcAddress("glTexCoordP3ui"))(type, coords);
}

inline void glTexCoordP3uiv(GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP3UIVPROC>(wglGetProcAddress("glTexCoordP3uiv"))(type, coords);
}

inline void glTexCoordP4ui(GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP4UIPROC>(wglGetProcAddress("glTexCoordP4ui"))(type, coords);
}

inline void glTexCoordP4uiv(GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLTEXCOORDP4UIVPROC>(wglGetProcAddress("glTexCoordP4uiv"))(type, coords);
}

inline void glMultiTexCoordP1ui(GLenum texture, GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP1UIPROC>(wglGetProcAddress("glMultiTexCoordP1ui"))(texture, type, coords);
}

inline void glMultiTexCoordP1uiv(GLenum texture, GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP1UIVPROC>(wglGetProcAddress("glMultiTexCoordP1uiv"))(texture, type, coords);
}

inline void glMultiTexCoordP2ui(GLenum texture, GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP2UIPROC>(wglGetProcAddress("glMultiTexCoordP2ui"))(texture, type, coords);
}

inline void glMultiTexCoordP2uiv(GLenum texture, GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP2UIVPROC>(wglGetProcAddress("glMultiTexCoordP2uiv"))(texture, type, coords);
}

inline void glMultiTexCoordP3ui(GLenum texture, GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP3UIPROC>(wglGetProcAddress("glMultiTexCoordP3ui"))(texture, type, coords);
}

inline void glMultiTexCoordP3uiv(GLenum texture, GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP3UIVPROC>(wglGetProcAddress("glMultiTexCoordP3uiv"))(texture, type, coords);
}

inline void glMultiTexCoordP4ui(GLenum texture, GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP4UIPROC>(wglGetProcAddress("glMultiTexCoordP4ui"))(texture, type, coords);
}

inline void glMultiTexCoordP4uiv(GLenum texture, GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDP4UIVPROC>(wglGetProcAddress("glMultiTexCoordP4uiv"))(texture, type, coords);
}

inline void glNormalP3ui(GLenum type, GLuint coords) 
{
	reinterpret_cast<PFNGLNORMALP3UIPROC>(wglGetProcAddress("glNormalP3ui"))(type, coords);
}

inline void glNormalP3uiv(GLenum type, const GLuint *coords) 
{
	reinterpret_cast<PFNGLNORMALP3UIVPROC>(wglGetProcAddress("glNormalP3uiv"))(type, coords);
}

inline void glColorP3ui(GLenum type, GLuint color) 
{
	reinterpret_cast<PFNGLCOLORP3UIPROC>(wglGetProcAddress("glColorP3ui"))(type, color);
}

inline void glColorP3uiv(GLenum type, const GLuint *color) 
{
	reinterpret_cast<PFNGLCOLORP3UIVPROC>(wglGetProcAddress("glColorP3uiv"))(type, color);
}

inline void glColorP4ui(GLenum type, GLuint color) 
{
	reinterpret_cast<PFNGLCOLORP4UIPROC>(wglGetProcAddress("glColorP4ui"))(type, color);
}

inline void glColorP4uiv(GLenum type, const GLuint *color) 
{
	reinterpret_cast<PFNGLCOLORP4UIVPROC>(wglGetProcAddress("glColorP4uiv"))(type, color);
}

inline void glSecondaryColorP3ui(GLenum type, GLuint color) 
{
	reinterpret_cast<PFNGLSECONDARYCOLORP3UIPROC>(wglGetProcAddress("glSecondaryColorP3ui"))(type, color);
}

inline void glSecondaryColorP3uiv(GLenum type, const GLuint *color) 
{
	reinterpret_cast<PFNGLSECONDARYCOLORP3UIVPROC>(wglGetProcAddress("glSecondaryColorP3uiv"))(type, color);
}

inline void glMinSampleShading(GLfloat value) 
{
	reinterpret_cast<PFNGLMINSAMPLESHADINGPROC>(wglGetProcAddress("glMinSampleShading"))(value);
}

inline void glBlendEquationi(GLuint buf, GLenum mode) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONIPROC>(wglGetProcAddress("glBlendEquationi"))(buf, mode);
}

inline void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIPROC>(wglGetProcAddress("glBlendEquationSeparatei"))(buf, modeRGB, modeAlpha);
}

inline void glBlendFunci(GLuint buf, GLenum src, GLenum dst) 
{
	reinterpret_cast<PFNGLBLENDFUNCIPROC>(wglGetProcAddress("glBlendFunci"))(buf, src, dst);
}

inline void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) 
{
	reinterpret_cast<PFNGLBLENDFUNCSEPARATEIPROC>(wglGetProcAddress("glBlendFuncSeparatei"))(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glDrawArraysIndirect(GLenum mode, const void *indirect) 
{
	reinterpret_cast<PFNGLDRAWARRAYSINDIRECTPROC>(wglGetProcAddress("glDrawArraysIndirect"))(mode, indirect);
}

inline void glDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSINDIRECTPROC>(wglGetProcAddress("glDrawElementsIndirect"))(mode, type, indirect);
}

inline void glUniform1d(GLint location, GLdouble x) 
{
	reinterpret_cast<PFNGLUNIFORM1DPROC>(wglGetProcAddress("glUniform1d"))(location, x);
}

inline void glUniform2d(GLint location, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLUNIFORM2DPROC>(wglGetProcAddress("glUniform2d"))(location, x, y);
}

inline void glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLUNIFORM3DPROC>(wglGetProcAddress("glUniform3d"))(location, x, y, z);
}

inline void glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLUNIFORM4DPROC>(wglGetProcAddress("glUniform4d"))(location, x, y, z, w);
}

inline void glUniform1dv(GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORM1DVPROC>(wglGetProcAddress("glUniform1dv"))(location, count, value);
}

inline void glUniform2dv(GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORM2DVPROC>(wglGetProcAddress("glUniform2dv"))(location, count, value);
}

inline void glUniform3dv(GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORM3DVPROC>(wglGetProcAddress("glUniform3dv"))(location, count, value);
}

inline void glUniform4dv(GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORM4DVPROC>(wglGetProcAddress("glUniform4dv"))(location, count, value);
}

inline void glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX2DVPROC>(wglGetProcAddress("glUniformMatrix2dv"))(location, count, transpose, value);
}

inline void glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX3DVPROC>(wglGetProcAddress("glUniformMatrix3dv"))(location, count, transpose, value);
}

inline void glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX4DVPROC>(wglGetProcAddress("glUniformMatrix4dv"))(location, count, transpose, value);
}

inline void glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX2X3DVPROC>(wglGetProcAddress("glUniformMatrix2x3dv"))(location, count, transpose, value);
}

inline void glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX2X4DVPROC>(wglGetProcAddress("glUniformMatrix2x4dv"))(location, count, transpose, value);
}

inline void glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX3X2DVPROC>(wglGetProcAddress("glUniformMatrix3x2dv"))(location, count, transpose, value);
}

inline void glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX3X4DVPROC>(wglGetProcAddress("glUniformMatrix3x4dv"))(location, count, transpose, value);
}

inline void glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX4X2DVPROC>(wglGetProcAddress("glUniformMatrix4x2dv"))(location, count, transpose, value);
}

inline void glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX4X3DVPROC>(wglGetProcAddress("glUniformMatrix4x3dv"))(location, count, transpose, value);
}

inline void glGetUniformdv(GLuint program, GLint location, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMDVPROC>(wglGetProcAddress("glGetUniformdv"))(program, location, params);
}

inline GLint glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC>(wglGetProcAddress("glGetSubroutineUniformLocation"))(program, shadertype, name);
}

inline GLuint glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETSUBROUTINEINDEXPROC>(wglGetProcAddress("glGetSubroutineIndex"))(program, shadertype, name);
}

inline void glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) 
{
	reinterpret_cast<PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC>(wglGetProcAddress("glGetActiveSubroutineUniformiv"))(program, shadertype, index, pname, values);
}

inline void glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) 
{
	reinterpret_cast<PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC>(wglGetProcAddress("glGetActiveSubroutineUniformName"))(program, shadertype, index, bufsize, length, name);
}

inline void glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) 
{
	reinterpret_cast<PFNGLGETACTIVESUBROUTINENAMEPROC>(wglGetProcAddress("glGetActiveSubroutineName"))(program, shadertype, index, bufsize, length, name);
}

inline void glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices) 
{
	reinterpret_cast<PFNGLUNIFORMSUBROUTINESUIVPROC>(wglGetProcAddress("glUniformSubroutinesuiv"))(shadertype, count, indices);
}

inline void glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMSUBROUTINEUIVPROC>(wglGetProcAddress("glGetUniformSubroutineuiv"))(shadertype, location, params);
}

inline void glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values) 
{
	reinterpret_cast<PFNGLGETPROGRAMSTAGEIVPROC>(wglGetProcAddress("glGetProgramStageiv"))(program, shadertype, pname, values);
}

inline void glPatchParameteri(GLenum pname, GLint value) 
{
	reinterpret_cast<PFNGLPATCHPARAMETERIPROC>(wglGetProcAddress("glPatchParameteri"))(pname, value);
}

inline void glPatchParameterfv(GLenum pname, const GLfloat *values) 
{
	reinterpret_cast<PFNGLPATCHPARAMETERFVPROC>(wglGetProcAddress("glPatchParameterfv"))(pname, values);
}

inline void glBindTransformFeedback(GLenum target, GLuint id) 
{
	reinterpret_cast<PFNGLBINDTRANSFORMFEEDBACKPROC>(wglGetProcAddress("glBindTransformFeedback"))(target, id);
}

inline void glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids) 
{
	reinterpret_cast<PFNGLDELETETRANSFORMFEEDBACKSPROC>(wglGetProcAddress("glDeleteTransformFeedbacks"))(n, ids);
}

inline void glGenTransformFeedbacks(GLsizei n, GLuint *ids) 
{
	reinterpret_cast<PFNGLGENTRANSFORMFEEDBACKSPROC>(wglGetProcAddress("glGenTransformFeedbacks"))(n, ids);
}

inline GLboolean glIsTransformFeedback(GLuint id) 
{
	return reinterpret_cast<PFNGLISTRANSFORMFEEDBACKPROC>(wglGetProcAddress("glIsTransformFeedback"))(id);
}

inline void glPauseTransformFeedback(void) 
{
	reinterpret_cast<PFNGLPAUSETRANSFORMFEEDBACKPROC>(wglGetProcAddress("glPauseTransformFeedback"))();
}

inline void glResumeTransformFeedback(void) 
{
	reinterpret_cast<PFNGLRESUMETRANSFORMFEEDBACKPROC>(wglGetProcAddress("glResumeTransformFeedback"))();
}

inline void glDrawTransformFeedback(GLenum mode, GLuint id) 
{
	reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKPROC>(wglGetProcAddress("glDrawTransformFeedback"))(mode, id);
}

inline void glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream) 
{
	reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC>(wglGetProcAddress("glDrawTransformFeedbackStream"))(mode, id, stream);
}

inline void glBeginQueryIndexed(GLenum target, GLuint index, GLuint id) 
{
	reinterpret_cast<PFNGLBEGINQUERYINDEXEDPROC>(wglGetProcAddress("glBeginQueryIndexed"))(target, index, id);
}

inline void glEndQueryIndexed(GLenum target, GLuint index) 
{
	reinterpret_cast<PFNGLENDQUERYINDEXEDPROC>(wglGetProcAddress("glEndQueryIndexed"))(target, index);
}

inline void glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETQUERYINDEXEDIVPROC>(wglGetProcAddress("glGetQueryIndexediv"))(target, index, pname, params);
}

inline void glReleaseShaderCompiler(void) 
{
	reinterpret_cast<PFNGLRELEASESHADERCOMPILERPROC>(wglGetProcAddress("glReleaseShaderCompiler"))();
}

inline void glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length) 
{
	reinterpret_cast<PFNGLSHADERBINARYPROC>(wglGetProcAddress("glShaderBinary"))(count, shaders, binaryformat, binary, length);
}

inline void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) 
{
	reinterpret_cast<PFNGLGETSHADERPRECISIONFORMATPROC>(wglGetProcAddress("glGetShaderPrecisionFormat"))(shadertype, precisiontype, range, precision);
}

inline void glDepthRangef(GLfloat n, GLfloat f) 
{
	reinterpret_cast<PFNGLDEPTHRANGEFPROC>(wglGetProcAddress("glDepthRangef"))(n, f);
}

inline void glClearDepthf(GLfloat d) 
{
	reinterpret_cast<PFNGLCLEARDEPTHFPROC>(wglGetProcAddress("glClearDepthf"))(d);
}

inline void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) 
{
	reinterpret_cast<PFNGLGETPROGRAMBINARYPROC>(wglGetProcAddress("glGetProgramBinary"))(program, bufSize, length, binaryFormat, binary);
}

inline void glProgramBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) 
{
	reinterpret_cast<PFNGLPROGRAMBINARYPROC>(wglGetProcAddress("glProgramBinary"))(program, binaryFormat, binary, length);
}

inline void glProgramParameteri(GLuint program, GLenum pname, GLint value) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETERIPROC>(wglGetProcAddress("glProgramParameteri"))(program, pname, value);
}

inline void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program) 
{
	reinterpret_cast<PFNGLUSEPROGRAMSTAGESPROC>(wglGetProcAddress("glUseProgramStages"))(pipeline, stages, program);
}

inline void glActiveShaderProgram(GLuint pipeline, GLuint program) 
{
	reinterpret_cast<PFNGLACTIVESHADERPROGRAMPROC>(wglGetProcAddress("glActiveShaderProgram"))(pipeline, program);
}

inline GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const*strings) 
{
	return reinterpret_cast<PFNGLCREATESHADERPROGRAMVPROC>(wglGetProcAddress("glCreateShaderProgramv"))(type, count, strings);
}

inline void glBindProgramPipeline(GLuint pipeline) 
{
	reinterpret_cast<PFNGLBINDPROGRAMPIPELINEPROC>(wglGetProcAddress("glBindProgramPipeline"))(pipeline);
}

inline void glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines) 
{
	reinterpret_cast<PFNGLDELETEPROGRAMPIPELINESPROC>(wglGetProcAddress("glDeleteProgramPipelines"))(n, pipelines);
}

inline void glGenProgramPipelines(GLsizei n, GLuint *pipelines) 
{
	reinterpret_cast<PFNGLGENPROGRAMPIPELINESPROC>(wglGetProcAddress("glGenProgramPipelines"))(n, pipelines);
}

inline GLboolean glIsProgramPipeline(GLuint pipeline) 
{
	return reinterpret_cast<PFNGLISPROGRAMPIPELINEPROC>(wglGetProcAddress("glIsProgramPipeline"))(pipeline);
}

inline void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMPIPELINEIVPROC>(wglGetProcAddress("glGetProgramPipelineiv"))(pipeline, pname, params);
}

inline void glProgramUniform1i(GLuint program, GLint location, GLint v0) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1IPROC>(wglGetProcAddress("glProgramUniform1i"))(program, location, v0);
}

inline void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1IVPROC>(wglGetProcAddress("glProgramUniform1iv"))(program, location, count, value);
}

inline void glProgramUniform1f(GLuint program, GLint location, GLfloat v0) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1FPROC>(wglGetProcAddress("glProgramUniform1f"))(program, location, v0);
}

inline void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1FVPROC>(wglGetProcAddress("glProgramUniform1fv"))(program, location, count, value);
}

inline void glProgramUniform1d(GLuint program, GLint location, GLdouble v0) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1DPROC>(wglGetProcAddress("glProgramUniform1d"))(program, location, v0);
}

inline void glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1DVPROC>(wglGetProcAddress("glProgramUniform1dv"))(program, location, count, value);
}

inline void glProgramUniform1ui(GLuint program, GLint location, GLuint v0) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UIPROC>(wglGetProcAddress("glProgramUniform1ui"))(program, location, v0);
}

inline void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVPROC>(wglGetProcAddress("glProgramUniform1uiv"))(program, location, count, value);
}

inline void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2IPROC>(wglGetProcAddress("glProgramUniform2i"))(program, location, v0, v1);
}

inline void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2IVPROC>(wglGetProcAddress("glProgramUniform2iv"))(program, location, count, value);
}

inline void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2FPROC>(wglGetProcAddress("glProgramUniform2f"))(program, location, v0, v1);
}

inline void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2FVPROC>(wglGetProcAddress("glProgramUniform2fv"))(program, location, count, value);
}

inline void glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2DPROC>(wglGetProcAddress("glProgramUniform2d"))(program, location, v0, v1);
}

inline void glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2DVPROC>(wglGetProcAddress("glProgramUniform2dv"))(program, location, count, value);
}

inline void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UIPROC>(wglGetProcAddress("glProgramUniform2ui"))(program, location, v0, v1);
}

inline void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVPROC>(wglGetProcAddress("glProgramUniform2uiv"))(program, location, count, value);
}

inline void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3IPROC>(wglGetProcAddress("glProgramUniform3i"))(program, location, v0, v1, v2);
}

inline void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3IVPROC>(wglGetProcAddress("glProgramUniform3iv"))(program, location, count, value);
}

inline void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3FPROC>(wglGetProcAddress("glProgramUniform3f"))(program, location, v0, v1, v2);
}

inline void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3FVPROC>(wglGetProcAddress("glProgramUniform3fv"))(program, location, count, value);
}

inline void glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3DPROC>(wglGetProcAddress("glProgramUniform3d"))(program, location, v0, v1, v2);
}

inline void glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3DVPROC>(wglGetProcAddress("glProgramUniform3dv"))(program, location, count, value);
}

inline void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UIPROC>(wglGetProcAddress("glProgramUniform3ui"))(program, location, v0, v1, v2);
}

inline void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVPROC>(wglGetProcAddress("glProgramUniform3uiv"))(program, location, count, value);
}

inline void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4IPROC>(wglGetProcAddress("glProgramUniform4i"))(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4IVPROC>(wglGetProcAddress("glProgramUniform4iv"))(program, location, count, value);
}

inline void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4FPROC>(wglGetProcAddress("glProgramUniform4f"))(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4FVPROC>(wglGetProcAddress("glProgramUniform4fv"))(program, location, count, value);
}

inline void glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4DPROC>(wglGetProcAddress("glProgramUniform4d"))(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4DVPROC>(wglGetProcAddress("glProgramUniform4dv"))(program, location, count, value);
}

inline void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UIPROC>(wglGetProcAddress("glProgramUniform4ui"))(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVPROC>(wglGetProcAddress("glProgramUniform4uiv"))(program, location, count, value);
}

inline void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVPROC>(wglGetProcAddress("glProgramUniformMatrix2fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVPROC>(wglGetProcAddress("glProgramUniformMatrix3fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVPROC>(wglGetProcAddress("glProgramUniformMatrix4fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2DVPROC>(wglGetProcAddress("glProgramUniformMatrix2dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3DVPROC>(wglGetProcAddress("glProgramUniformMatrix3dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4DVPROC>(wglGetProcAddress("glProgramUniformMatrix4dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC>(wglGetProcAddress("glProgramUniformMatrix2x3fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC>(wglGetProcAddress("glProgramUniformMatrix3x2fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC>(wglGetProcAddress("glProgramUniformMatrix2x4fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC>(wglGetProcAddress("glProgramUniformMatrix4x2fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC>(wglGetProcAddress("glProgramUniformMatrix3x4fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC>(wglGetProcAddress("glProgramUniformMatrix4x3fv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC>(wglGetProcAddress("glProgramUniformMatrix2x3dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC>(wglGetProcAddress("glProgramUniformMatrix3x2dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC>(wglGetProcAddress("glProgramUniformMatrix2x4dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC>(wglGetProcAddress("glProgramUniformMatrix4x2dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC>(wglGetProcAddress("glProgramUniformMatrix3x4dv"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC>(wglGetProcAddress("glProgramUniformMatrix4x3dv"))(program, location, count, transpose, value);
}

inline void glValidateProgramPipeline(GLuint pipeline) 
{
	reinterpret_cast<PFNGLVALIDATEPROGRAMPIPELINEPROC>(wglGetProcAddress("glValidateProgramPipeline"))(pipeline);
}

inline void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) 
{
	reinterpret_cast<PFNGLGETPROGRAMPIPELINEINFOLOGPROC>(wglGetProcAddress("glGetProgramPipelineInfoLog"))(pipeline, bufSize, length, infoLog);
}

inline void glVertexAttribL1d(GLuint index, GLdouble x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1DPROC>(wglGetProcAddress("glVertexAttribL1d"))(index, x);
}

inline void glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2DPROC>(wglGetProcAddress("glVertexAttribL2d"))(index, x, y);
}

inline void glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3DPROC>(wglGetProcAddress("glVertexAttribL3d"))(index, x, y, z);
}

inline void glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4DPROC>(wglGetProcAddress("glVertexAttribL4d"))(index, x, y, z, w);
}

inline void glVertexAttribL1dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1DVPROC>(wglGetProcAddress("glVertexAttribL1dv"))(index, v);
}

inline void glVertexAttribL2dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2DVPROC>(wglGetProcAddress("glVertexAttribL2dv"))(index, v);
}

inline void glVertexAttribL3dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3DVPROC>(wglGetProcAddress("glVertexAttribL3dv"))(index, v);
}

inline void glVertexAttribL4dv(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4DVPROC>(wglGetProcAddress("glVertexAttribL4dv"))(index, v);
}

inline void glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBLPOINTERPROC>(wglGetProcAddress("glVertexAttribLPointer"))(index, size, type, stride, pointer);
}

inline void glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBLDVPROC>(wglGetProcAddress("glGetVertexAttribLdv"))(index, pname, params);
}

inline void glViewportArrayv(GLuint first, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVIEWPORTARRAYVPROC>(wglGetProcAddress("glViewportArrayv"))(first, count, v);
}

inline void glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) 
{
	reinterpret_cast<PFNGLVIEWPORTINDEXEDFPROC>(wglGetProcAddress("glViewportIndexedf"))(index, x, y, w, h);
}

inline void glViewportIndexedfv(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVIEWPORTINDEXEDFVPROC>(wglGetProcAddress("glViewportIndexedfv"))(index, v);
}

inline void glScissorArrayv(GLuint first, GLsizei count, const GLint *v) 
{
	reinterpret_cast<PFNGLSCISSORARRAYVPROC>(wglGetProcAddress("glScissorArrayv"))(first, count, v);
}

inline void glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLSCISSORINDEXEDPROC>(wglGetProcAddress("glScissorIndexed"))(index, left, bottom, width, height);
}

inline void glScissorIndexedv(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLSCISSORINDEXEDVPROC>(wglGetProcAddress("glScissorIndexedv"))(index, v);
}

inline void glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble *v) 
{
	reinterpret_cast<PFNGLDEPTHRANGEARRAYVPROC>(wglGetProcAddress("glDepthRangeArrayv"))(first, count, v);
}

inline void glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f) 
{
	reinterpret_cast<PFNGLDEPTHRANGEINDEXEDPROC>(wglGetProcAddress("glDepthRangeIndexed"))(index, n, f);
}

inline void glGetFloati_v(GLenum target, GLuint index, GLfloat *data) 
{
	reinterpret_cast<PFNGLGETFLOATI_VPROC>(wglGetProcAddress("glGetFloati_v"))(target, index, data);
}

inline void glGetDoublei_v(GLenum target, GLuint index, GLdouble *data) 
{
	reinterpret_cast<PFNGLGETDOUBLEI_VPROC>(wglGetProcAddress("glGetDoublei_v"))(target, index, data);
}

inline void glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) 
{
	reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC>(wglGetProcAddress("glDrawArraysInstancedBaseInstance"))(mode, first, count, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC>(wglGetProcAddress("glDrawElementsInstancedBaseInstance"))(mode, count, type, indices, instancecount, baseinstance);
}

inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC>(wglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance"))(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

inline void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) 
{
	reinterpret_cast<PFNGLGETINTERNALFORMATIVPROC>(wglGetProcAddress("glGetInternalformativ"))(target, internalformat, pname, bufSize, params);
}

inline void glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC>(wglGetProcAddress("glGetActiveAtomicCounterBufferiv"))(program, bufferIndex, pname, params);
}

inline void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) 
{
	reinterpret_cast<PFNGLBINDIMAGETEXTUREPROC>(wglGetProcAddress("glBindImageTexture"))(unit, texture, level, layered, layer, access, format);
}

inline void glMemoryBarrier(GLbitfield barriers) 
{
	reinterpret_cast<PFNGLMEMORYBARRIERPROC>(wglGetProcAddress("glMemoryBarrier"))(barriers);
}

inline void glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) 
{
	reinterpret_cast<PFNGLTEXSTORAGE1DPROC>(wglGetProcAddress("glTexStorage1D"))(target, levels, internalformat, width);
}

inline void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLTEXSTORAGE2DPROC>(wglGetProcAddress("glTexStorage2D"))(target, levels, internalformat, width, height);
}

inline void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) 
{
	reinterpret_cast<PFNGLTEXSTORAGE3DPROC>(wglGetProcAddress("glTexStorage3D"))(target, levels, internalformat, width, height, depth);
}

inline void glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount) 
{
	reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC>(wglGetProcAddress("glDrawTransformFeedbackInstanced"))(mode, id, instancecount);
}

inline void glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) 
{
	reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC>(wglGetProcAddress("glDrawTransformFeedbackStreamInstanced"))(mode, id, stream, instancecount);
}

inline void glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARBUFFERDATAPROC>(wglGetProcAddress("glClearBufferData"))(target, internalformat, format, type, data);
}

inline void glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARBUFFERSUBDATAPROC>(wglGetProcAddress("glClearBufferSubData"))(target, internalformat, offset, size, format, type, data);
}

inline void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) 
{
	reinterpret_cast<PFNGLDISPATCHCOMPUTEPROC>(wglGetProcAddress("glDispatchCompute"))(num_groups_x, num_groups_y, num_groups_z);
}

inline void glDispatchComputeIndirect(GLintptr indirect) 
{
	reinterpret_cast<PFNGLDISPATCHCOMPUTEINDIRECTPROC>(wglGetProcAddress("glDispatchComputeIndirect"))(indirect);
}

inline void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) 
{
	reinterpret_cast<PFNGLCOPYIMAGESUBDATAPROC>(wglGetProcAddress("glCopyImageSubData"))(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

inline void glFramebufferParameteri(GLenum target, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERPARAMETERIPROC>(wglGetProcAddress("glFramebufferParameteri"))(target, pname, param);
}

inline void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERIVPROC>(wglGetProcAddress("glGetFramebufferParameteriv"))(target, pname, params);
}

inline void glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params) 
{
	reinterpret_cast<PFNGLGETINTERNALFORMATI64VPROC>(wglGetProcAddress("glGetInternalformati64v"))(target, internalformat, pname, bufSize, params);
}

inline void glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) 
{
	reinterpret_cast<PFNGLINVALIDATETEXSUBIMAGEPROC>(wglGetProcAddress("glInvalidateTexSubImage"))(texture, level, xoffset, yoffset, zoffset, width, height, depth);
}

inline void glInvalidateTexImage(GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLINVALIDATETEXIMAGEPROC>(wglGetProcAddress("glInvalidateTexImage"))(texture, level);
}

inline void glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length) 
{
	reinterpret_cast<PFNGLINVALIDATEBUFFERSUBDATAPROC>(wglGetProcAddress("glInvalidateBufferSubData"))(buffer, offset, length);
}

inline void glInvalidateBufferData(GLuint buffer) 
{
	reinterpret_cast<PFNGLINVALIDATEBUFFERDATAPROC>(wglGetProcAddress("glInvalidateBufferData"))(buffer);
}

inline void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments) 
{
	reinterpret_cast<PFNGLINVALIDATEFRAMEBUFFERPROC>(wglGetProcAddress("glInvalidateFramebuffer"))(target, numAttachments, attachments);
}

inline void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLINVALIDATESUBFRAMEBUFFERPROC>(wglGetProcAddress("glInvalidateSubFramebuffer"))(target, numAttachments, attachments, x, y, width, height);
}

inline void glMultiDrawArraysIndirect(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride) 
{
	reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTPROC>(wglGetProcAddress("glMultiDrawArraysIndirect"))(mode, indirect, drawcount, stride);
}

inline void glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTPROC>(wglGetProcAddress("glMultiDrawElementsIndirect"))(mode, type, indirect, drawcount, stride);
}

inline void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMINTERFACEIVPROC>(wglGetProcAddress("glGetProgramInterfaceiv"))(program, programInterface, pname, params);
}

inline GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETPROGRAMRESOURCEINDEXPROC>(wglGetProcAddress("glGetProgramResourceIndex"))(program, programInterface, name);
}

inline void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) 
{
	reinterpret_cast<PFNGLGETPROGRAMRESOURCENAMEPROC>(wglGetProcAddress("glGetProgramResourceName"))(program, programInterface, index, bufSize, length, name);
}

inline void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMRESOURCEIVPROC>(wglGetProcAddress("glGetProgramResourceiv"))(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONPROC>(wglGetProcAddress("glGetProgramResourceLocation"))(program, programInterface, name);
}

inline GLint glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC>(wglGetProcAddress("glGetProgramResourceLocationIndex"))(program, programInterface, name);
}

inline void glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) 
{
	reinterpret_cast<PFNGLSHADERSTORAGEBLOCKBINDINGPROC>(wglGetProcAddress("glShaderStorageBlockBinding"))(program, storageBlockIndex, storageBlockBinding);
}

inline void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLTEXBUFFERRANGEPROC>(wglGetProcAddress("glTexBufferRange"))(target, internalformat, buffer, offset, size);
}

inline void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXSTORAGE2DMULTISAMPLEPROC>(wglGetProcAddress("glTexStorage2DMultisample"))(target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXSTORAGE3DMULTISAMPLEPROC>(wglGetProcAddress("glTexStorage3DMultisample"))(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) 
{
	reinterpret_cast<PFNGLTEXTUREVIEWPROC>(wglGetProcAddress("glTextureView"))(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

inline void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) 
{
	reinterpret_cast<PFNGLBINDVERTEXBUFFERPROC>(wglGetProcAddress("glBindVertexBuffer"))(bindingindex, buffer, offset, stride);
}

inline void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBFORMATPROC>(wglGetProcAddress("glVertexAttribFormat"))(attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBIFORMATPROC>(wglGetProcAddress("glVertexAttribIFormat"))(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBLFORMATPROC>(wglGetProcAddress("glVertexAttribLFormat"))(attribindex, size, type, relativeoffset);
}

inline void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBBINDINGPROC>(wglGetProcAddress("glVertexAttribBinding"))(attribindex, bindingindex);
}

inline void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor) 
{
	reinterpret_cast<PFNGLVERTEXBINDINGDIVISORPROC>(wglGetProcAddress("glVertexBindingDivisor"))(bindingindex, divisor);
}

inline void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGECONTROLPROC>(wglGetProcAddress("glDebugMessageControl"))(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGEINSERTPROC>(wglGetProcAddress("glDebugMessageInsert"))(source, type, id, severity, length, buf);
}

inline void glDebugMessageCallback(GLDEBUGPROC callback, const void *userParam) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKPROC>(wglGetProcAddress("glDebugMessageCallback"))(callback, userParam);
}

inline GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) 
{
	return reinterpret_cast<PFNGLGETDEBUGMESSAGELOGPROC>(wglGetProcAddress("glGetDebugMessageLog"))(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar *message) 
{
	reinterpret_cast<PFNGLPUSHDEBUGGROUPPROC>(wglGetProcAddress("glPushDebugGroup"))(source, id, length, message);
}

inline void glPopDebugGroup(void) 
{
	reinterpret_cast<PFNGLPOPDEBUGGROUPPROC>(wglGetProcAddress("glPopDebugGroup"))();
}

inline void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar *label) 
{
	reinterpret_cast<PFNGLOBJECTLABELPROC>(wglGetProcAddress("glObjectLabel"))(identifier, name, length, label);
}

inline void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label) 
{
	reinterpret_cast<PFNGLGETOBJECTLABELPROC>(wglGetProcAddress("glGetObjectLabel"))(identifier, name, bufSize, length, label);
}

inline void glObjectPtrLabel(const void *ptr, GLsizei length, const GLchar *label) 
{
	reinterpret_cast<PFNGLOBJECTPTRLABELPROC>(wglGetProcAddress("glObjectPtrLabel"))(ptr, length, label);
}

inline void glGetObjectPtrLabel(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label) 
{
	reinterpret_cast<PFNGLGETOBJECTPTRLABELPROC>(wglGetProcAddress("glGetObjectPtrLabel"))(ptr, bufSize, length, label);
}

inline void glBufferStorage(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags) 
{
	reinterpret_cast<PFNGLBUFFERSTORAGEPROC>(wglGetProcAddress("glBufferStorage"))(target, size, data, flags);
}

inline void glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARTEXIMAGEPROC>(wglGetProcAddress("glClearTexImage"))(texture, level, format, type, data);
}

inline void glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARTEXSUBIMAGEPROC>(wglGetProcAddress("glClearTexSubImage"))(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

inline void glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint *buffers) 
{
	reinterpret_cast<PFNGLBINDBUFFERSBASEPROC>(wglGetProcAddress("glBindBuffersBase"))(target, first, count, buffers);
}

inline void glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes) 
{
	reinterpret_cast<PFNGLBINDBUFFERSRANGEPROC>(wglGetProcAddress("glBindBuffersRange"))(target, first, count, buffers, offsets, sizes);
}

inline void glBindTextures(GLuint first, GLsizei count, const GLuint *textures) 
{
	reinterpret_cast<PFNGLBINDTEXTURESPROC>(wglGetProcAddress("glBindTextures"))(first, count, textures);
}

inline void glBindSamplers(GLuint first, GLsizei count, const GLuint *samplers) 
{
	reinterpret_cast<PFNGLBINDSAMPLERSPROC>(wglGetProcAddress("glBindSamplers"))(first, count, samplers);
}

inline void glBindImageTextures(GLuint first, GLsizei count, const GLuint *textures) 
{
	reinterpret_cast<PFNGLBINDIMAGETEXTURESPROC>(wglGetProcAddress("glBindImageTextures"))(first, count, textures);
}

inline void glBindVertexBuffers(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) 
{
	reinterpret_cast<PFNGLBINDVERTEXBUFFERSPROC>(wglGetProcAddress("glBindVertexBuffers"))(first, count, buffers, offsets, strides);
}

inline void glClipControl(GLenum origin, GLenum depth) 
{
	reinterpret_cast<PFNGLCLIPCONTROLPROC>(wglGetProcAddress("glClipControl"))(origin, depth);
}

inline void glCreateTransformFeedbacks(GLsizei n, GLuint *ids) 
{
	reinterpret_cast<PFNGLCREATETRANSFORMFEEDBACKSPROC>(wglGetProcAddress("glCreateTransformFeedbacks"))(n, ids);
}

inline void glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer) 
{
	reinterpret_cast<PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC>(wglGetProcAddress("glTransformFeedbackBufferBase"))(xfb, index, buffer);
}

inline void glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC>(wglGetProcAddress("glTransformFeedbackBufferRange"))(xfb, index, buffer, offset, size);
}

inline void glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint *param) 
{
	reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKIVPROC>(wglGetProcAddress("glGetTransformFeedbackiv"))(xfb, pname, param);
}

inline void glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint *param) 
{
	reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKI_VPROC>(wglGetProcAddress("glGetTransformFeedbacki_v"))(xfb, pname, index, param);
}

inline void glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 *param) 
{
	reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKI64_VPROC>(wglGetProcAddress("glGetTransformFeedbacki64_v"))(xfb, pname, index, param);
}

inline void glCreateBuffers(GLsizei n, GLuint *buffers) 
{
	reinterpret_cast<PFNGLCREATEBUFFERSPROC>(wglGetProcAddress("glCreateBuffers"))(n, buffers);
}

inline void glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEPROC>(wglGetProcAddress("glNamedBufferStorage"))(buffer, size, data, flags);
}

inline void glNamedBufferData(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERDATAPROC>(wglGetProcAddress("glNamedBufferData"))(buffer, size, data, usage);
}

inline void glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERSUBDATAPROC>(wglGetProcAddress("glNamedBufferSubData"))(buffer, offset, size, data);
}

inline void glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLCOPYNAMEDBUFFERSUBDATAPROC>(wglGetProcAddress("glCopyNamedBufferSubData"))(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

inline void glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARNAMEDBUFFERDATAPROC>(wglGetProcAddress("glClearNamedBufferData"))(buffer, internalformat, format, type, data);
}

inline void glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARNAMEDBUFFERSUBDATAPROC>(wglGetProcAddress("glClearNamedBufferSubData"))(buffer, internalformat, offset, size, format, type, data);
}

inline GLboolean glUnmapNamedBuffer(GLuint buffer) 
{
	return reinterpret_cast<PFNGLUNMAPNAMEDBUFFERPROC>(wglGetProcAddress("glUnmapNamedBuffer"))(buffer);
}

inline void glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length) 
{
	reinterpret_cast<PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC>(wglGetProcAddress("glFlushMappedNamedBufferRange"))(buffer, offset, length);
}

inline void glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERIVPROC>(wglGetProcAddress("glGetNamedBufferParameteriv"))(buffer, pname, params);
}

inline void glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 *params) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERI64VPROC>(wglGetProcAddress("glGetNamedBufferParameteri64v"))(buffer, pname, params);
}

inline void glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void **params) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERPOINTERVPROC>(wglGetProcAddress("glGetNamedBufferPointerv"))(buffer, pname, params);
}

inline void glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERSUBDATAPROC>(wglGetProcAddress("glGetNamedBufferSubData"))(buffer, offset, size, data);
}

inline void glCreateFramebuffers(GLsizei n, GLuint *framebuffers) 
{
	reinterpret_cast<PFNGLCREATEFRAMEBUFFERSPROC>(wglGetProcAddress("glCreateFramebuffers"))(n, framebuffers);
}

inline void glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC>(wglGetProcAddress("glNamedFramebufferRenderbuffer"))(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

inline void glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC>(wglGetProcAddress("glNamedFramebufferParameteri"))(framebuffer, pname, param);
}

inline void glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTUREPROC>(wglGetProcAddress("glNamedFramebufferTexture"))(framebuffer, attachment, texture, level);
}

inline void glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC>(wglGetProcAddress("glNamedFramebufferTextureLayer"))(framebuffer, attachment, texture, level, layer);
}

inline void glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC>(wglGetProcAddress("glNamedFramebufferDrawBuffer"))(framebuffer, buf);
}

inline void glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum *bufs) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC>(wglGetProcAddress("glNamedFramebufferDrawBuffers"))(framebuffer, n, bufs);
}

inline void glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC>(wglGetProcAddress("glNamedFramebufferReadBuffer"))(framebuffer, src);
}

inline void glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments) 
{
	reinterpret_cast<PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC>(wglGetProcAddress("glInvalidateNamedFramebufferData"))(framebuffer, numAttachments, attachments);
}

inline void glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC>(wglGetProcAddress("glInvalidateNamedFramebufferSubData"))(framebuffer, numAttachments, attachments, x, y, width, height);
}

inline void glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value) 
{
	reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERIVPROC>(wglGetProcAddress("glClearNamedFramebufferiv"))(framebuffer, buffer, drawbuffer, value);
}

inline void glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value) 
{
	reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC>(wglGetProcAddress("glClearNamedFramebufferuiv"))(framebuffer, buffer, drawbuffer, value);
}

inline void glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value) 
{
	reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERFVPROC>(wglGetProcAddress("glClearNamedFramebufferfv"))(framebuffer, buffer, drawbuffer, value);
}

inline void glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) 
{
	reinterpret_cast<PFNGLCLEARNAMEDFRAMEBUFFERFIPROC>(wglGetProcAddress("glClearNamedFramebufferfi"))(framebuffer, buffer, drawbuffer, depth, stencil);
}

inline void glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) 
{
	reinterpret_cast<PFNGLBLITNAMEDFRAMEBUFFERPROC>(wglGetProcAddress("glBlitNamedFramebuffer"))(readFramebuffer, drawFramebuffer, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline GLenum glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target) 
{
	return reinterpret_cast<PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC>(wglGetProcAddress("glCheckNamedFramebufferStatus"))(framebuffer, target);
}

inline void glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint *param) 
{
	reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC>(wglGetProcAddress("glGetNamedFramebufferParameteriv"))(framebuffer, pname, param);
}

inline void glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC>(wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv"))(framebuffer, attachment, pname, params);
}

inline void glCreateRenderbuffers(GLsizei n, GLuint *renderbuffers) 
{
	reinterpret_cast<PFNGLCREATERENDERBUFFERSPROC>(wglGetProcAddress("glCreateRenderbuffers"))(n, renderbuffers);
}

inline void glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEPROC>(wglGetProcAddress("glNamedRenderbufferStorage"))(renderbuffer, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC>(wglGetProcAddress("glNamedRenderbufferStorageMultisample"))(renderbuffer, samples, internalformat, width, height);
}

inline void glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC>(wglGetProcAddress("glGetNamedRenderbufferParameteriv"))(renderbuffer, pname, params);
}

inline void glCreateTextures(GLenum target, GLsizei n, GLuint *textures) 
{
	reinterpret_cast<PFNGLCREATETEXTURESPROC>(wglGetProcAddress("glCreateTextures"))(target, n, textures);
}

inline void glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer) 
{
	reinterpret_cast<PFNGLTEXTUREBUFFERPROC>(wglGetProcAddress("glTextureBuffer"))(texture, internalformat, buffer);
}

inline void glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLTEXTUREBUFFERRANGEPROC>(wglGetProcAddress("glTextureBufferRange"))(texture, internalformat, buffer, offset, size);
}

inline void glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE1DPROC>(wglGetProcAddress("glTextureStorage1D"))(texture, levels, internalformat, width);
}

inline void glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE2DPROC>(wglGetProcAddress("glTextureStorage2D"))(texture, levels, internalformat, width, height);
}

inline void glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE3DPROC>(wglGetProcAddress("glTextureStorage3D"))(texture, levels, internalformat, width, height, depth);
}

inline void glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC>(wglGetProcAddress("glTextureStorage2DMultisample"))(texture, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC>(wglGetProcAddress("glTextureStorage3DMultisample"))(texture, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTURESUBIMAGE1DPROC>(wglGetProcAddress("glTextureSubImage1D"))(texture, level, xoffset, width, format, type, pixels);
}

inline void glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTURESUBIMAGE2DPROC>(wglGetProcAddress("glTextureSubImage2D"))(texture, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTURESUBIMAGE3DPROC>(wglGetProcAddress("glTextureSubImage3D"))(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC>(wglGetProcAddress("glCompressedTextureSubImage1D"))(texture, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC>(wglGetProcAddress("glCompressedTextureSubImage2D"))(texture, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC>(wglGetProcAddress("glCompressedTextureSubImage3D"))(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE1DPROC>(wglGetProcAddress("glCopyTextureSubImage1D"))(texture, level, xoffset, x, y, width);
}

inline void glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE2DPROC>(wglGetProcAddress("glCopyTextureSubImage2D"))(texture, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE3DPROC>(wglGetProcAddress("glCopyTextureSubImage3D"))(texture, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glTextureParameterf(GLuint texture, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERFPROC>(wglGetProcAddress("glTextureParameterf"))(texture, pname, param);
}

inline void glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat *param) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERFVPROC>(wglGetProcAddress("glTextureParameterfv"))(texture, pname, param);
}

inline void glTextureParameteri(GLuint texture, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIPROC>(wglGetProcAddress("glTextureParameteri"))(texture, pname, param);
}

inline void glTextureParameterIiv(GLuint texture, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIIVPROC>(wglGetProcAddress("glTextureParameterIiv"))(texture, pname, params);
}

inline void glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint *params) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIUIVPROC>(wglGetProcAddress("glTextureParameterIuiv"))(texture, pname, params);
}

inline void glTextureParameteriv(GLuint texture, GLenum pname, const GLint *param) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIVPROC>(wglGetProcAddress("glTextureParameteriv"))(texture, pname, param);
}

inline void glGenerateTextureMipmap(GLuint texture) 
{
	reinterpret_cast<PFNGLGENERATETEXTUREMIPMAPPROC>(wglGetProcAddress("glGenerateTextureMipmap"))(texture);
}

inline void glBindTextureUnit(GLuint unit, GLuint texture) 
{
	reinterpret_cast<PFNGLBINDTEXTUREUNITPROC>(wglGetProcAddress("glBindTextureUnit"))(unit, texture);
}

inline void glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) 
{
	reinterpret_cast<PFNGLGETTEXTUREIMAGEPROC>(wglGetProcAddress("glGetTextureImage"))(texture, level, format, type, bufSize, pixels);
}

inline void glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void *pixels) 
{
	reinterpret_cast<PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC>(wglGetProcAddress("glGetCompressedTextureImage"))(texture, level, bufSize, pixels);
}

inline void glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERFVPROC>(wglGetProcAddress("glGetTextureLevelParameterfv"))(texture, level, pname, params);
}

inline void glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERIVPROC>(wglGetProcAddress("glGetTextureLevelParameteriv"))(texture, level, pname, params);
}

inline void glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERFVPROC>(wglGetProcAddress("glGetTextureParameterfv"))(texture, pname, params);
}

inline void glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERIIVPROC>(wglGetProcAddress("glGetTextureParameterIiv"))(texture, pname, params);
}

inline void glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERIUIVPROC>(wglGetProcAddress("glGetTextureParameterIuiv"))(texture, pname, params);
}

inline void glGetTextureParameteriv(GLuint texture, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERIVPROC>(wglGetProcAddress("glGetTextureParameteriv"))(texture, pname, params);
}

inline void glCreateVertexArrays(GLsizei n, GLuint *arrays) 
{
	reinterpret_cast<PFNGLCREATEVERTEXARRAYSPROC>(wglGetProcAddress("glCreateVertexArrays"))(n, arrays);
}

inline void glDisableVertexArrayAttrib(GLuint vaobj, GLuint index) 
{
	reinterpret_cast<PFNGLDISABLEVERTEXARRAYATTRIBPROC>(wglGetProcAddress("glDisableVertexArrayAttrib"))(vaobj, index);
}

inline void glEnableVertexArrayAttrib(GLuint vaobj, GLuint index) 
{
	reinterpret_cast<PFNGLENABLEVERTEXARRAYATTRIBPROC>(wglGetProcAddress("glEnableVertexArrayAttrib"))(vaobj, index);
}

inline void glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer) 
{
	reinterpret_cast<PFNGLVERTEXARRAYELEMENTBUFFERPROC>(wglGetProcAddress("glVertexArrayElementBuffer"))(vaobj, buffer);
}

inline void glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXBUFFERPROC>(wglGetProcAddress("glVertexArrayVertexBuffer"))(vaobj, bindingindex, buffer, offset, stride);
}

inline void glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXBUFFERSPROC>(wglGetProcAddress("glVertexArrayVertexBuffers"))(vaobj, first, count, buffers, offsets, strides);
}

inline void glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex) 
{
	reinterpret_cast<PFNGLVERTEXARRAYATTRIBBINDINGPROC>(wglGetProcAddress("glVertexArrayAttribBinding"))(vaobj, attribindex, bindingindex);
}

inline void glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYATTRIBFORMATPROC>(wglGetProcAddress("glVertexArrayAttribFormat"))(vaobj, attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYATTRIBIFORMATPROC>(wglGetProcAddress("glVertexArrayAttribIFormat"))(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYATTRIBLFORMATPROC>(wglGetProcAddress("glVertexArrayAttribLFormat"))(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor) 
{
	reinterpret_cast<PFNGLVERTEXARRAYBINDINGDIVISORPROC>(wglGetProcAddress("glVertexArrayBindingDivisor"))(vaobj, bindingindex, divisor);
}

inline void glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint *param) 
{
	reinterpret_cast<PFNGLGETVERTEXARRAYIVPROC>(wglGetProcAddress("glGetVertexArrayiv"))(vaobj, pname, param);
}

inline void glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint *param) 
{
	reinterpret_cast<PFNGLGETVERTEXARRAYINDEXEDIVPROC>(wglGetProcAddress("glGetVertexArrayIndexediv"))(vaobj, index, pname, param);
}

inline void glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param) 
{
	reinterpret_cast<PFNGLGETVERTEXARRAYINDEXED64IVPROC>(wglGetProcAddress("glGetVertexArrayIndexed64iv"))(vaobj, index, pname, param);
}

inline void glCreateSamplers(GLsizei n, GLuint *samplers) 
{
	reinterpret_cast<PFNGLCREATESAMPLERSPROC>(wglGetProcAddress("glCreateSamplers"))(n, samplers);
}

inline void glCreateProgramPipelines(GLsizei n, GLuint *pipelines) 
{
	reinterpret_cast<PFNGLCREATEPROGRAMPIPELINESPROC>(wglGetProcAddress("glCreateProgramPipelines"))(n, pipelines);
}

inline void glCreateQueries(GLenum target, GLsizei n, GLuint *ids) 
{
	reinterpret_cast<PFNGLCREATEQUERIESPROC>(wglGetProcAddress("glCreateQueries"))(target, n, ids);
}

inline void glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) 
{
	reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTI64VPROC>(wglGetProcAddress("glGetQueryBufferObjecti64v"))(id, buffer, pname, offset);
}

inline void glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) 
{
	reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTIVPROC>(wglGetProcAddress("glGetQueryBufferObjectiv"))(id, buffer, pname, offset);
}

inline void glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) 
{
	reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTUI64VPROC>(wglGetProcAddress("glGetQueryBufferObjectui64v"))(id, buffer, pname, offset);
}

inline void glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset) 
{
	reinterpret_cast<PFNGLGETQUERYBUFFEROBJECTUIVPROC>(wglGetProcAddress("glGetQueryBufferObjectuiv"))(id, buffer, pname, offset);
}

inline void glMemoryBarrierByRegion(GLbitfield barriers) 
{
	reinterpret_cast<PFNGLMEMORYBARRIERBYREGIONPROC>(wglGetProcAddress("glMemoryBarrierByRegion"))(barriers);
}

inline void glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels) 
{
	reinterpret_cast<PFNGLGETTEXTURESUBIMAGEPROC>(wglGetProcAddress("glGetTextureSubImage"))(texture, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bufSize, pixels);
}

inline void glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels) 
{
	reinterpret_cast<PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC>(wglGetProcAddress("glGetCompressedTextureSubImage"))(texture, level, xoffset, yoffset, zoffset, width, height, depth, bufSize, pixels);
}

inline GLenum glGetGraphicsResetStatus(void) 
{
	return reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSPROC>(wglGetProcAddress("glGetGraphicsResetStatus"))();
}

inline void glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void *pixels) 
{
	reinterpret_cast<PFNGLGETNCOMPRESSEDTEXIMAGEPROC>(wglGetProcAddress("glGetnCompressedTexImage"))(target, lod, bufSize, pixels);
}

inline void glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) 
{
	reinterpret_cast<PFNGLGETNTEXIMAGEPROC>(wglGetProcAddress("glGetnTexImage"))(target, level, format, type, bufSize, pixels);
}

inline void glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMDVPROC>(wglGetProcAddress("glGetnUniformdv"))(program, location, bufSize, params);
}

inline void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMFVPROC>(wglGetProcAddress("glGetnUniformfv"))(program, location, bufSize, params);
}

inline void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMIVPROC>(wglGetProcAddress("glGetnUniformiv"))(program, location, bufSize, params);
}

inline void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMUIVPROC>(wglGetProcAddress("glGetnUniformuiv"))(program, location, bufSize, params);
}

inline void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) 
{
	reinterpret_cast<PFNGLREADNPIXELSPROC>(wglGetProcAddress("glReadnPixels"))(x, y, width, height, format, type, bufSize, data);
}

inline void glGetnMapdv(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v) 
{
	reinterpret_cast<PFNGLGETNMAPDVPROC>(wglGetProcAddress("glGetnMapdv"))(target, query, bufSize, v);
}

inline void glGetnMapfv(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v) 
{
	reinterpret_cast<PFNGLGETNMAPFVPROC>(wglGetProcAddress("glGetnMapfv"))(target, query, bufSize, v);
}

inline void glGetnMapiv(GLenum target, GLenum query, GLsizei bufSize, GLint *v) 
{
	reinterpret_cast<PFNGLGETNMAPIVPROC>(wglGetProcAddress("glGetnMapiv"))(target, query, bufSize, v);
}

inline void glGetnPixelMapfv(GLenum map, GLsizei bufSize, GLfloat *values) 
{
	reinterpret_cast<PFNGLGETNPIXELMAPFVPROC>(wglGetProcAddress("glGetnPixelMapfv"))(map, bufSize, values);
}

inline void glGetnPixelMapuiv(GLenum map, GLsizei bufSize, GLuint *values) 
{
	reinterpret_cast<PFNGLGETNPIXELMAPUIVPROC>(wglGetProcAddress("glGetnPixelMapuiv"))(map, bufSize, values);
}

inline void glGetnPixelMapusv(GLenum map, GLsizei bufSize, GLushort *values) 
{
	reinterpret_cast<PFNGLGETNPIXELMAPUSVPROC>(wglGetProcAddress("glGetnPixelMapusv"))(map, bufSize, values);
}

inline void glGetnPolygonStipple(GLsizei bufSize, GLubyte *pattern) 
{
	reinterpret_cast<PFNGLGETNPOLYGONSTIPPLEPROC>(wglGetProcAddress("glGetnPolygonStipple"))(bufSize, pattern);
}

inline void glGetnColorTable(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table) 
{
	reinterpret_cast<PFNGLGETNCOLORTABLEPROC>(wglGetProcAddress("glGetnColorTable"))(target, format, type, bufSize, table);
}

inline void glGetnConvolutionFilter(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image) 
{
	reinterpret_cast<PFNGLGETNCONVOLUTIONFILTERPROC>(wglGetProcAddress("glGetnConvolutionFilter"))(target, format, type, bufSize, image);
}

inline void glGetnSeparableFilter(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span) 
{
	reinterpret_cast<PFNGLGETNSEPARABLEFILTERPROC>(wglGetProcAddress("glGetnSeparableFilter"))(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

inline void glGetnHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) 
{
	reinterpret_cast<PFNGLGETNHISTOGRAMPROC>(wglGetProcAddress("glGetnHistogram"))(target, reset, format, type, bufSize, values);
}

inline void glGetnMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) 
{
	reinterpret_cast<PFNGLGETNMINMAXPROC>(wglGetProcAddress("glGetnMinmax"))(target, reset, format, type, bufSize, values);
}

inline void glTextureBarrier(void) 
{
	reinterpret_cast<PFNGLTEXTUREBARRIERPROC>(wglGetProcAddress("glTextureBarrier"))();
}

inline void glPrimitiveBoundingBoxARB(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) 
{
	reinterpret_cast<PFNGLPRIMITIVEBOUNDINGBOXARBPROC>(wglGetProcAddress("glPrimitiveBoundingBoxARB"))(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

inline GLuint64 glGetTextureHandleARB(GLuint texture) 
{
	return reinterpret_cast<PFNGLGETTEXTUREHANDLEARBPROC>(wglGetProcAddress("glGetTextureHandleARB"))(texture);
}

inline GLuint64 glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler) 
{
	return reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLEARBPROC>(wglGetProcAddress("glGetTextureSamplerHandleARB"))(texture, sampler);
}

inline void glMakeTextureHandleResidentARB(GLuint64 handle) 
{
	reinterpret_cast<PFNGLMAKETEXTUREHANDLERESIDENTARBPROC>(wglGetProcAddress("glMakeTextureHandleResidentARB"))(handle);
}

inline void glMakeTextureHandleNonResidentARB(GLuint64 handle) 
{
	reinterpret_cast<PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC>(wglGetProcAddress("glMakeTextureHandleNonResidentARB"))(handle);
}

inline GLuint64 glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) 
{
	return reinterpret_cast<PFNGLGETIMAGEHANDLEARBPROC>(wglGetProcAddress("glGetImageHandleARB"))(texture, level, layered, layer, format);
}

inline void glMakeImageHandleResidentARB(GLuint64 handle, GLenum access) 
{
	reinterpret_cast<PFNGLMAKEIMAGEHANDLERESIDENTARBPROC>(wglGetProcAddress("glMakeImageHandleResidentARB"))(handle, access);
}

inline void glMakeImageHandleNonResidentARB(GLuint64 handle) 
{
	reinterpret_cast<PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC>(wglGetProcAddress("glMakeImageHandleNonResidentARB"))(handle);
}

inline void glUniformHandleui64ARB(GLint location, GLuint64 value) 
{
	reinterpret_cast<PFNGLUNIFORMHANDLEUI64ARBPROC>(wglGetProcAddress("glUniformHandleui64ARB"))(location, value);
}

inline void glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORMHANDLEUI64VARBPROC>(wglGetProcAddress("glUniformHandleui64vARB"))(location, count, value);
}

inline void glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC>(wglGetProcAddress("glProgramUniformHandleui64ARB"))(program, location, value);
}

inline void glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *values) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC>(wglGetProcAddress("glProgramUniformHandleui64vARB"))(program, location, count, values);
}

inline GLboolean glIsTextureHandleResidentARB(GLuint64 handle) 
{
	return reinterpret_cast<PFNGLISTEXTUREHANDLERESIDENTARBPROC>(wglGetProcAddress("glIsTextureHandleResidentARB"))(handle);
}

inline GLboolean glIsImageHandleResidentARB(GLuint64 handle) 
{
	return reinterpret_cast<PFNGLISIMAGEHANDLERESIDENTARBPROC>(wglGetProcAddress("glIsImageHandleResidentARB"))(handle);
}

inline void glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1UI64ARBPROC>(wglGetProcAddress("glVertexAttribL1ui64ARB"))(index, x);
}

inline void glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1UI64VARBPROC>(wglGetProcAddress("glVertexAttribL1ui64vARB"))(index, v);
}

inline void glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBLUI64VARBPROC>(wglGetProcAddress("glGetVertexAttribLui64vARB"))(index, pname, params);
}

inline GLsync glCreateSyncFromCLeventARB(struct _cl_context *context, struct _cl_event *event, GLbitfield flags) 
{
	return reinterpret_cast<PFNGLCREATESYNCFROMCLEVENTARBPROC>(wglGetProcAddress("glCreateSyncFromCLeventARB"))(context, event, flags);
}

inline void glClampColorARB(GLenum target, GLenum clamp) 
{
	reinterpret_cast<PFNGLCLAMPCOLORARBPROC>(wglGetProcAddress("glClampColorARB"))(target, clamp);
}

inline void glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z) 
{
	reinterpret_cast<PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC>(wglGetProcAddress("glDispatchComputeGroupSizeARB"))(num_groups_x, num_groups_y, num_groups_z, group_size_x, group_size_y, group_size_z);
}

inline void glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGECONTROLARBPROC>(wglGetProcAddress("glDebugMessageControlARB"))(source, type, severity, count, ids, enabled);
}

inline void glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGEINSERTARBPROC>(wglGetProcAddress("glDebugMessageInsertARB"))(source, type, id, severity, length, buf);
}

inline void glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void *userParam) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKARBPROC>(wglGetProcAddress("glDebugMessageCallbackARB"))(callback, userParam);
}

inline GLuint glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) 
{
	return reinterpret_cast<PFNGLGETDEBUGMESSAGELOGARBPROC>(wglGetProcAddress("glGetDebugMessageLogARB"))(count, bufSize, sources, types, ids, severities, lengths, messageLog);
}

inline void glDrawBuffersARB(GLsizei n, const GLenum *bufs) 
{
	reinterpret_cast<PFNGLDRAWBUFFERSARBPROC>(wglGetProcAddress("glDrawBuffersARB"))(n, bufs);
}

inline void glBlendEquationiARB(GLuint buf, GLenum mode) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONIARBPROC>(wglGetProcAddress("glBlendEquationiARB"))(buf, mode);
}

inline void glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEIARBPROC>(wglGetProcAddress("glBlendEquationSeparateiARB"))(buf, modeRGB, modeAlpha);
}

inline void glBlendFunciARB(GLuint buf, GLenum src, GLenum dst) 
{
	reinterpret_cast<PFNGLBLENDFUNCIARBPROC>(wglGetProcAddress("glBlendFunciARB"))(buf, src, dst);
}

inline void glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) 
{
	reinterpret_cast<PFNGLBLENDFUNCSEPARATEIARBPROC>(wglGetProcAddress("glBlendFuncSeparateiARB"))(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount) 
{
	reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDARBPROC>(wglGetProcAddress("glDrawArraysInstancedARB"))(mode, first, count, primcount);
}

inline void glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDARBPROC>(wglGetProcAddress("glDrawElementsInstancedARB"))(mode, count, type, indices, primcount);
}

inline void glProgramStringARB(GLenum target, GLenum format, GLsizei len, const void *string) 
{
	reinterpret_cast<PFNGLPROGRAMSTRINGARBPROC>(wglGetProcAddress("glProgramStringARB"))(target, format, len, string);
}

inline void glBindProgramARB(GLenum target, GLuint program) 
{
	reinterpret_cast<PFNGLBINDPROGRAMARBPROC>(wglGetProcAddress("glBindProgramARB"))(target, program);
}

inline void glDeleteProgramsARB(GLsizei n, const GLuint *programs) 
{
	reinterpret_cast<PFNGLDELETEPROGRAMSARBPROC>(wglGetProcAddress("glDeleteProgramsARB"))(n, programs);
}

inline void glGenProgramsARB(GLsizei n, GLuint *programs) 
{
	reinterpret_cast<PFNGLGENPROGRAMSARBPROC>(wglGetProcAddress("glGenProgramsARB"))(n, programs);
}

inline void glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETER4DARBPROC>(wglGetProcAddress("glProgramEnvParameter4dARB"))(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble *params) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETER4DVARBPROC>(wglGetProcAddress("glProgramEnvParameter4dvARB"))(target, index, params);
}

inline void glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETER4FARBPROC>(wglGetProcAddress("glProgramEnvParameter4fARB"))(target, index, x, y, z, w);
}

inline void glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETER4FVARBPROC>(wglGetProcAddress("glProgramEnvParameter4fvARB"))(target, index, params);
}

inline void glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4DARBPROC>(wglGetProcAddress("glProgramLocalParameter4dARB"))(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble *params) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4DVARBPROC>(wglGetProcAddress("glProgramLocalParameter4dvARB"))(target, index, params);
}

inline void glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4FARBPROC>(wglGetProcAddress("glProgramLocalParameter4fARB"))(target, index, x, y, z, w);
}

inline void glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETER4FVARBPROC>(wglGetProcAddress("glProgramLocalParameter4fvARB"))(target, index, params);
}

inline void glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMENVPARAMETERDVARBPROC>(wglGetProcAddress("glGetProgramEnvParameterdvARB"))(target, index, params);
}

inline void glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMENVPARAMETERFVARBPROC>(wglGetProcAddress("glGetProgramEnvParameterfvARB"))(target, index, params);
}

inline void glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC>(wglGetProcAddress("glGetProgramLocalParameterdvARB"))(target, index, params);
}

inline void glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC>(wglGetProcAddress("glGetProgramLocalParameterfvARB"))(target, index, params);
}

inline void glGetProgramivARB(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMIVARBPROC>(wglGetProcAddress("glGetProgramivARB"))(target, pname, params);
}

inline void glGetProgramStringARB(GLenum target, GLenum pname, void *string) 
{
	reinterpret_cast<PFNGLGETPROGRAMSTRINGARBPROC>(wglGetProcAddress("glGetProgramStringARB"))(target, pname, string);
}

inline GLboolean glIsProgramARB(GLuint program) 
{
	return reinterpret_cast<PFNGLISPROGRAMARBPROC>(wglGetProcAddress("glIsProgramARB"))(program);
}

inline void glProgramParameteriARB(GLuint program, GLenum pname, GLint value) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETERIARBPROC>(wglGetProcAddress("glProgramParameteriARB"))(program, pname, value);
}

inline void glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREARBPROC>(wglGetProcAddress("glFramebufferTextureARB"))(target, attachment, texture, level);
}

inline void glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYERARBPROC>(wglGetProcAddress("glFramebufferTextureLayerARB"))(target, attachment, texture, level, layer);
}

inline void glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREFACEARBPROC>(wglGetProcAddress("glFramebufferTextureFaceARB"))(target, attachment, texture, level, face);
}

inline void glUniform1i64ARB(GLint location, GLint64 x) 
{
	reinterpret_cast<PFNGLUNIFORM1I64ARBPROC>(wglGetProcAddress("glUniform1i64ARB"))(location, x);
}

inline void glUniform2i64ARB(GLint location, GLint64 x, GLint64 y) 
{
	reinterpret_cast<PFNGLUNIFORM2I64ARBPROC>(wglGetProcAddress("glUniform2i64ARB"))(location, x, y);
}

inline void glUniform3i64ARB(GLint location, GLint64 x, GLint64 y, GLint64 z) 
{
	reinterpret_cast<PFNGLUNIFORM3I64ARBPROC>(wglGetProcAddress("glUniform3i64ARB"))(location, x, y, z);
}

inline void glUniform4i64ARB(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) 
{
	reinterpret_cast<PFNGLUNIFORM4I64ARBPROC>(wglGetProcAddress("glUniform4i64ARB"))(location, x, y, z, w);
}

inline void glUniform1i64vARB(GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM1I64VARBPROC>(wglGetProcAddress("glUniform1i64vARB"))(location, count, value);
}

inline void glUniform2i64vARB(GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM2I64VARBPROC>(wglGetProcAddress("glUniform2i64vARB"))(location, count, value);
}

inline void glUniform3i64vARB(GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM3I64VARBPROC>(wglGetProcAddress("glUniform3i64vARB"))(location, count, value);
}

inline void glUniform4i64vARB(GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM4I64VARBPROC>(wglGetProcAddress("glUniform4i64vARB"))(location, count, value);
}

inline void glUniform1ui64ARB(GLint location, GLuint64 x) 
{
	reinterpret_cast<PFNGLUNIFORM1UI64ARBPROC>(wglGetProcAddress("glUniform1ui64ARB"))(location, x);
}

inline void glUniform2ui64ARB(GLint location, GLuint64 x, GLuint64 y) 
{
	reinterpret_cast<PFNGLUNIFORM2UI64ARBPROC>(wglGetProcAddress("glUniform2ui64ARB"))(location, x, y);
}

inline void glUniform3ui64ARB(GLint location, GLuint64 x, GLuint64 y, GLuint64 z) 
{
	reinterpret_cast<PFNGLUNIFORM3UI64ARBPROC>(wglGetProcAddress("glUniform3ui64ARB"))(location, x, y, z);
}

inline void glUniform4ui64ARB(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) 
{
	reinterpret_cast<PFNGLUNIFORM4UI64ARBPROC>(wglGetProcAddress("glUniform4ui64ARB"))(location, x, y, z, w);
}

inline void glUniform1ui64vARB(GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM1UI64VARBPROC>(wglGetProcAddress("glUniform1ui64vARB"))(location, count, value);
}

inline void glUniform2ui64vARB(GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM2UI64VARBPROC>(wglGetProcAddress("glUniform2ui64vARB"))(location, count, value);
}

inline void glUniform3ui64vARB(GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM3UI64VARBPROC>(wglGetProcAddress("glUniform3ui64vARB"))(location, count, value);
}

inline void glUniform4ui64vARB(GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORM4UI64VARBPROC>(wglGetProcAddress("glUniform4ui64vARB"))(location, count, value);
}

inline void glGetUniformi64vARB(GLuint program, GLint location, GLint64 *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMI64VARBPROC>(wglGetProcAddress("glGetUniformi64vARB"))(program, location, params);
}

inline void glGetUniformui64vARB(GLuint program, GLint location, GLuint64 *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMUI64VARBPROC>(wglGetProcAddress("glGetUniformui64vARB"))(program, location, params);
}

inline void glGetnUniformi64vARB(GLuint program, GLint location, GLsizei bufSize, GLint64 *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMI64VARBPROC>(wglGetProcAddress("glGetnUniformi64vARB"))(program, location, bufSize, params);
}

inline void glGetnUniformui64vARB(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMUI64VARBPROC>(wglGetProcAddress("glGetnUniformui64vARB"))(program, location, bufSize, params);
}

inline void glProgramUniform1i64ARB(GLuint program, GLint location, GLint64 x) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1I64ARBPROC>(wglGetProcAddress("glProgramUniform1i64ARB"))(program, location, x);
}

inline void glProgramUniform2i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2I64ARBPROC>(wglGetProcAddress("glProgramUniform2i64ARB"))(program, location, x, y);
}

inline void glProgramUniform3i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3I64ARBPROC>(wglGetProcAddress("glProgramUniform3i64ARB"))(program, location, x, y, z);
}

inline void glProgramUniform4i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4I64ARBPROC>(wglGetProcAddress("glProgramUniform4i64ARB"))(program, location, x, y, z, w);
}

inline void glProgramUniform1i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1I64VARBPROC>(wglGetProcAddress("glProgramUniform1i64vARB"))(program, location, count, value);
}

inline void glProgramUniform2i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2I64VARBPROC>(wglGetProcAddress("glProgramUniform2i64vARB"))(program, location, count, value);
}

inline void glProgramUniform3i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3I64VARBPROC>(wglGetProcAddress("glProgramUniform3i64vARB"))(program, location, count, value);
}

inline void glProgramUniform4i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4I64VARBPROC>(wglGetProcAddress("glProgramUniform4i64vARB"))(program, location, count, value);
}

inline void glProgramUniform1ui64ARB(GLuint program, GLint location, GLuint64 x) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64ARBPROC>(wglGetProcAddress("glProgramUniform1ui64ARB"))(program, location, x);
}

inline void glProgramUniform2ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64ARBPROC>(wglGetProcAddress("glProgramUniform2ui64ARB"))(program, location, x, y);
}

inline void glProgramUniform3ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64ARBPROC>(wglGetProcAddress("glProgramUniform3ui64ARB"))(program, location, x, y, z);
}

inline void glProgramUniform4ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64ARBPROC>(wglGetProcAddress("glProgramUniform4ui64ARB"))(program, location, x, y, z, w);
}

inline void glProgramUniform1ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64VARBPROC>(wglGetProcAddress("glProgramUniform1ui64vARB"))(program, location, count, value);
}

inline void glProgramUniform2ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64VARBPROC>(wglGetProcAddress("glProgramUniform2ui64vARB"))(program, location, count, value);
}

inline void glProgramUniform3ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64VARBPROC>(wglGetProcAddress("glProgramUniform3ui64vARB"))(program, location, count, value);
}

inline void glProgramUniform4ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64VARBPROC>(wglGetProcAddress("glProgramUniform4ui64vARB"))(program, location, count, value);
}

inline void glColorTable(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table) 
{
	reinterpret_cast<PFNGLCOLORTABLEPROC>(wglGetProcAddress("glColorTable"))(target, internalformat, width, format, type, table);
}

inline void glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLCOLORTABLEPARAMETERFVPROC>(wglGetProcAddress("glColorTableParameterfv"))(target, pname, params);
}

inline void glColorTableParameteriv(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLCOLORTABLEPARAMETERIVPROC>(wglGetProcAddress("glColorTableParameteriv"))(target, pname, params);
}

inline void glCopyColorTable(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYCOLORTABLEPROC>(wglGetProcAddress("glCopyColorTable"))(target, internalformat, x, y, width);
}

inline void glGetColorTable(GLenum target, GLenum format, GLenum type, void *table) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEPROC>(wglGetProcAddress("glGetColorTable"))(target, format, type, table);
}

inline void glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERFVPROC>(wglGetProcAddress("glGetColorTableParameterfv"))(target, pname, params);
}

inline void glGetColorTableParameteriv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERIVPROC>(wglGetProcAddress("glGetColorTableParameteriv"))(target, pname, params);
}

inline void glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCOLORSUBTABLEPROC>(wglGetProcAddress("glColorSubTable"))(target, start, count, format, type, data);
}

inline void glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYCOLORSUBTABLEPROC>(wglGetProcAddress("glCopyColorSubTable"))(target, start, x, y, width);
}

inline void glConvolutionFilter1D(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image) 
{
	reinterpret_cast<PFNGLCONVOLUTIONFILTER1DPROC>(wglGetProcAddress("glConvolutionFilter1D"))(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image) 
{
	reinterpret_cast<PFNGLCONVOLUTIONFILTER2DPROC>(wglGetProcAddress("glConvolutionFilter2D"))(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFPROC>(wglGetProcAddress("glConvolutionParameterf"))(target, pname, params);
}

inline void glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFVPROC>(wglGetProcAddress("glConvolutionParameterfv"))(target, pname, params);
}

inline void glConvolutionParameteri(GLenum target, GLenum pname, GLint params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIPROC>(wglGetProcAddress("glConvolutionParameteri"))(target, pname, params);
}

inline void glConvolutionParameteriv(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIVPROC>(wglGetProcAddress("glConvolutionParameteriv"))(target, pname, params);
}

inline void glCopyConvolutionFilter1D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER1DPROC>(wglGetProcAddress("glCopyConvolutionFilter1D"))(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter2D(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER2DPROC>(wglGetProcAddress("glCopyConvolutionFilter2D"))(target, internalformat, x, y, width, height);
}

inline void glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, void *image) 
{
	reinterpret_cast<PFNGLGETCONVOLUTIONFILTERPROC>(wglGetProcAddress("glGetConvolutionFilter"))(target, format, type, image);
}

inline void glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERFVPROC>(wglGetProcAddress("glGetConvolutionParameterfv"))(target, pname, params);
}

inline void glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERIVPROC>(wglGetProcAddress("glGetConvolutionParameteriv"))(target, pname, params);
}

inline void glGetSeparableFilter(GLenum target, GLenum format, GLenum type, void *row, void *column, void *span) 
{
	reinterpret_cast<PFNGLGETSEPARABLEFILTERPROC>(wglGetProcAddress("glGetSeparableFilter"))(target, format, type, row, column, span);
}

inline void glSeparableFilter2D(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column) 
{
	reinterpret_cast<PFNGLSEPARABLEFILTER2DPROC>(wglGetProcAddress("glSeparableFilter2D"))(target, internalformat, width, height, format, type, row, column);
}

inline void glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) 
{
	reinterpret_cast<PFNGLGETHISTOGRAMPROC>(wglGetProcAddress("glGetHistogram"))(target, reset, format, type, values);
}

inline void glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERFVPROC>(wglGetProcAddress("glGetHistogramParameterfv"))(target, pname, params);
}

inline void glGetHistogramParameteriv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERIVPROC>(wglGetProcAddress("glGetHistogramParameteriv"))(target, pname, params);
}

inline void glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) 
{
	reinterpret_cast<PFNGLGETMINMAXPROC>(wglGetProcAddress("glGetMinmax"))(target, reset, format, type, values);
}

inline void glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMINMAXPARAMETERFVPROC>(wglGetProcAddress("glGetMinmaxParameterfv"))(target, pname, params);
}

inline void glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMINMAXPARAMETERIVPROC>(wglGetProcAddress("glGetMinmaxParameteriv"))(target, pname, params);
}

inline void glHistogram(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) 
{
	reinterpret_cast<PFNGLHISTOGRAMPROC>(wglGetProcAddress("glHistogram"))(target, width, internalformat, sink);
}

inline void glMinmax(GLenum target, GLenum internalformat, GLboolean sink) 
{
	reinterpret_cast<PFNGLMINMAXPROC>(wglGetProcAddress("glMinmax"))(target, internalformat, sink);
}

inline void glResetHistogram(GLenum target) 
{
	reinterpret_cast<PFNGLRESETHISTOGRAMPROC>(wglGetProcAddress("glResetHistogram"))(target);
}

inline void glResetMinmax(GLenum target) 
{
	reinterpret_cast<PFNGLRESETMINMAXPROC>(wglGetProcAddress("glResetMinmax"))(target);
}

inline void glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) 
{
	reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC>(wglGetProcAddress("glMultiDrawArraysIndirectCountARB"))(mode, indirect, drawcount, maxdrawcount, stride);
}

inline void glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC>(wglGetProcAddress("glMultiDrawElementsIndirectCountARB"))(mode, type, indirect, drawcount, maxdrawcount, stride);
}

inline void glVertexAttribDivisorARB(GLuint index, GLuint divisor) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBDIVISORARBPROC>(wglGetProcAddress("glVertexAttribDivisorARB"))(index, divisor);
}

inline void glCurrentPaletteMatrixARB(GLint index) 
{
	reinterpret_cast<PFNGLCURRENTPALETTEMATRIXARBPROC>(wglGetProcAddress("glCurrentPaletteMatrixARB"))(index);
}

inline void glMatrixIndexubvARB(GLint size, const GLubyte *indices) 
{
	reinterpret_cast<PFNGLMATRIXINDEXUBVARBPROC>(wglGetProcAddress("glMatrixIndexubvARB"))(size, indices);
}

inline void glMatrixIndexusvARB(GLint size, const GLushort *indices) 
{
	reinterpret_cast<PFNGLMATRIXINDEXUSVARBPROC>(wglGetProcAddress("glMatrixIndexusvARB"))(size, indices);
}

inline void glMatrixIndexuivARB(GLint size, const GLuint *indices) 
{
	reinterpret_cast<PFNGLMATRIXINDEXUIVARBPROC>(wglGetProcAddress("glMatrixIndexuivARB"))(size, indices);
}

inline void glMatrixIndexPointerARB(GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLMATRIXINDEXPOINTERARBPROC>(wglGetProcAddress("glMatrixIndexPointerARB"))(size, type, stride, pointer);
}

inline void glSampleCoverageARB(GLfloat value, GLboolean invert) 
{
	reinterpret_cast<PFNGLSAMPLECOVERAGEARBPROC>(wglGetProcAddress("glSampleCoverageARB"))(value, invert);
}

inline void glActiveTextureARB(GLenum texture) 
{
	reinterpret_cast<PFNGLACTIVETEXTUREARBPROC>(wglGetProcAddress("glActiveTextureARB"))(texture);
}

inline void glClientActiveTextureARB(GLenum texture) 
{
	reinterpret_cast<PFNGLCLIENTACTIVETEXTUREARBPROC>(wglGetProcAddress("glClientActiveTextureARB"))(texture);
}

inline void glMultiTexCoord1dARB(GLenum target, GLdouble s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1DARBPROC>(wglGetProcAddress("glMultiTexCoord1dARB"))(target, s);
}

inline void glMultiTexCoord1dvARB(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1DVARBPROC>(wglGetProcAddress("glMultiTexCoord1dvARB"))(target, v);
}

inline void glMultiTexCoord1fARB(GLenum target, GLfloat s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1FARBPROC>(wglGetProcAddress("glMultiTexCoord1fARB"))(target, s);
}

inline void glMultiTexCoord1fvARB(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1FVARBPROC>(wglGetProcAddress("glMultiTexCoord1fvARB"))(target, v);
}

inline void glMultiTexCoord1iARB(GLenum target, GLint s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1IARBPROC>(wglGetProcAddress("glMultiTexCoord1iARB"))(target, s);
}

inline void glMultiTexCoord1ivARB(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1IVARBPROC>(wglGetProcAddress("glMultiTexCoord1ivARB"))(target, v);
}

inline void glMultiTexCoord1sARB(GLenum target, GLshort s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1SARBPROC>(wglGetProcAddress("glMultiTexCoord1sARB"))(target, s);
}

inline void glMultiTexCoord1svARB(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1SVARBPROC>(wglGetProcAddress("glMultiTexCoord1svARB"))(target, v);
}

inline void glMultiTexCoord2dARB(GLenum target, GLdouble s, GLdouble t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2DARBPROC>(wglGetProcAddress("glMultiTexCoord2dARB"))(target, s, t);
}

inline void glMultiTexCoord2dvARB(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2DVARBPROC>(wglGetProcAddress("glMultiTexCoord2dvARB"))(target, v);
}

inline void glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2FARBPROC>(wglGetProcAddress("glMultiTexCoord2fARB"))(target, s, t);
}

inline void glMultiTexCoord2fvARB(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2FVARBPROC>(wglGetProcAddress("glMultiTexCoord2fvARB"))(target, v);
}

inline void glMultiTexCoord2iARB(GLenum target, GLint s, GLint t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2IARBPROC>(wglGetProcAddress("glMultiTexCoord2iARB"))(target, s, t);
}

inline void glMultiTexCoord2ivARB(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2IVARBPROC>(wglGetProcAddress("glMultiTexCoord2ivARB"))(target, v);
}

inline void glMultiTexCoord2sARB(GLenum target, GLshort s, GLshort t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2SARBPROC>(wglGetProcAddress("glMultiTexCoord2sARB"))(target, s, t);
}

inline void glMultiTexCoord2svARB(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2SVARBPROC>(wglGetProcAddress("glMultiTexCoord2svARB"))(target, v);
}

inline void glMultiTexCoord3dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3DARBPROC>(wglGetProcAddress("glMultiTexCoord3dARB"))(target, s, t, r);
}

inline void glMultiTexCoord3dvARB(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3DVARBPROC>(wglGetProcAddress("glMultiTexCoord3dvARB"))(target, v);
}

inline void glMultiTexCoord3fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3FARBPROC>(wglGetProcAddress("glMultiTexCoord3fARB"))(target, s, t, r);
}

inline void glMultiTexCoord3fvARB(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3FVARBPROC>(wglGetProcAddress("glMultiTexCoord3fvARB"))(target, v);
}

inline void glMultiTexCoord3iARB(GLenum target, GLint s, GLint t, GLint r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3IARBPROC>(wglGetProcAddress("glMultiTexCoord3iARB"))(target, s, t, r);
}

inline void glMultiTexCoord3ivARB(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3IVARBPROC>(wglGetProcAddress("glMultiTexCoord3ivARB"))(target, v);
}

inline void glMultiTexCoord3sARB(GLenum target, GLshort s, GLshort t, GLshort r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3SARBPROC>(wglGetProcAddress("glMultiTexCoord3sARB"))(target, s, t, r);
}

inline void glMultiTexCoord3svARB(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3SVARBPROC>(wglGetProcAddress("glMultiTexCoord3svARB"))(target, v);
}

inline void glMultiTexCoord4dARB(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4DARBPROC>(wglGetProcAddress("glMultiTexCoord4dARB"))(target, s, t, r, q);
}

inline void glMultiTexCoord4dvARB(GLenum target, const GLdouble *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4DVARBPROC>(wglGetProcAddress("glMultiTexCoord4dvARB"))(target, v);
}

inline void glMultiTexCoord4fARB(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4FARBPROC>(wglGetProcAddress("glMultiTexCoord4fARB"))(target, s, t, r, q);
}

inline void glMultiTexCoord4fvARB(GLenum target, const GLfloat *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4FVARBPROC>(wglGetProcAddress("glMultiTexCoord4fvARB"))(target, v);
}

inline void glMultiTexCoord4iARB(GLenum target, GLint s, GLint t, GLint r, GLint q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4IARBPROC>(wglGetProcAddress("glMultiTexCoord4iARB"))(target, s, t, r, q);
}

inline void glMultiTexCoord4ivARB(GLenum target, const GLint *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4IVARBPROC>(wglGetProcAddress("glMultiTexCoord4ivARB"))(target, v);
}

inline void glMultiTexCoord4sARB(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4SARBPROC>(wglGetProcAddress("glMultiTexCoord4sARB"))(target, s, t, r, q);
}

inline void glMultiTexCoord4svARB(GLenum target, const GLshort *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4SVARBPROC>(wglGetProcAddress("glMultiTexCoord4svARB"))(target, v);
}

inline void glGenQueriesARB(GLsizei n, GLuint *ids) 
{
	reinterpret_cast<PFNGLGENQUERIESARBPROC>(wglGetProcAddress("glGenQueriesARB"))(n, ids);
}

inline void glDeleteQueriesARB(GLsizei n, const GLuint *ids) 
{
	reinterpret_cast<PFNGLDELETEQUERIESARBPROC>(wglGetProcAddress("glDeleteQueriesARB"))(n, ids);
}

inline GLboolean glIsQueryARB(GLuint id) 
{
	return reinterpret_cast<PFNGLISQUERYARBPROC>(wglGetProcAddress("glIsQueryARB"))(id);
}

inline void glBeginQueryARB(GLenum target, GLuint id) 
{
	reinterpret_cast<PFNGLBEGINQUERYARBPROC>(wglGetProcAddress("glBeginQueryARB"))(target, id);
}

inline void glEndQueryARB(GLenum target) 
{
	reinterpret_cast<PFNGLENDQUERYARBPROC>(wglGetProcAddress("glEndQueryARB"))(target);
}

inline void glGetQueryivARB(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETQUERYIVARBPROC>(wglGetProcAddress("glGetQueryivARB"))(target, pname, params);
}

inline void glGetQueryObjectivARB(GLuint id, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTIVARBPROC>(wglGetProcAddress("glGetQueryObjectivARB"))(id, pname, params);
}

inline void glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTUIVARBPROC>(wglGetProcAddress("glGetQueryObjectuivARB"))(id, pname, params);
}

inline void glMaxShaderCompilerThreadsARB(GLuint count) 
{
	reinterpret_cast<PFNGLMAXSHADERCOMPILERTHREADSARBPROC>(wglGetProcAddress("glMaxShaderCompilerThreadsARB"))(count);
}

inline void glPointParameterfARB(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFARBPROC>(wglGetProcAddress("glPointParameterfARB"))(pname, param);
}

inline void glPointParameterfvARB(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFVARBPROC>(wglGetProcAddress("glPointParameterfvARB"))(pname, params);
}

inline GLenum glGetGraphicsResetStatusARB(void) 
{
	return reinterpret_cast<PFNGLGETGRAPHICSRESETSTATUSARBPROC>(wglGetProcAddress("glGetGraphicsResetStatusARB"))();
}

inline void glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img) 
{
	reinterpret_cast<PFNGLGETNTEXIMAGEARBPROC>(wglGetProcAddress("glGetnTexImageARB"))(target, level, format, type, bufSize, img);
}

inline void glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) 
{
	reinterpret_cast<PFNGLREADNPIXELSARBPROC>(wglGetProcAddress("glReadnPixelsARB"))(x, y, width, height, format, type, bufSize, data);
}

inline void glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void *img) 
{
	reinterpret_cast<PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC>(wglGetProcAddress("glGetnCompressedTexImageARB"))(target, lod, bufSize, img);
}

inline void glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMFVARBPROC>(wglGetProcAddress("glGetnUniformfvARB"))(program, location, bufSize, params);
}

inline void glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMIVARBPROC>(wglGetProcAddress("glGetnUniformivARB"))(program, location, bufSize, params);
}

inline void glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMUIVARBPROC>(wglGetProcAddress("glGetnUniformuivARB"))(program, location, bufSize, params);
}

inline void glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETNUNIFORMDVARBPROC>(wglGetProcAddress("glGetnUniformdvARB"))(program, location, bufSize, params);
}

inline void glGetnMapdvARB(GLenum target, GLenum query, GLsizei bufSize, GLdouble *v) 
{
	reinterpret_cast<PFNGLGETNMAPDVARBPROC>(wglGetProcAddress("glGetnMapdvARB"))(target, query, bufSize, v);
}

inline void glGetnMapfvARB(GLenum target, GLenum query, GLsizei bufSize, GLfloat *v) 
{
	reinterpret_cast<PFNGLGETNMAPFVARBPROC>(wglGetProcAddress("glGetnMapfvARB"))(target, query, bufSize, v);
}

inline void glGetnMapivARB(GLenum target, GLenum query, GLsizei bufSize, GLint *v) 
{
	reinterpret_cast<PFNGLGETNMAPIVARBPROC>(wglGetProcAddress("glGetnMapivARB"))(target, query, bufSize, v);
}

inline void glGetnPixelMapfvARB(GLenum map, GLsizei bufSize, GLfloat *values) 
{
	reinterpret_cast<PFNGLGETNPIXELMAPFVARBPROC>(wglGetProcAddress("glGetnPixelMapfvARB"))(map, bufSize, values);
}

inline void glGetnPixelMapuivARB(GLenum map, GLsizei bufSize, GLuint *values) 
{
	reinterpret_cast<PFNGLGETNPIXELMAPUIVARBPROC>(wglGetProcAddress("glGetnPixelMapuivARB"))(map, bufSize, values);
}

inline void glGetnPixelMapusvARB(GLenum map, GLsizei bufSize, GLushort *values) 
{
	reinterpret_cast<PFNGLGETNPIXELMAPUSVARBPROC>(wglGetProcAddress("glGetnPixelMapusvARB"))(map, bufSize, values);
}

inline void glGetnPolygonStippleARB(GLsizei bufSize, GLubyte *pattern) 
{
	reinterpret_cast<PFNGLGETNPOLYGONSTIPPLEARBPROC>(wglGetProcAddress("glGetnPolygonStippleARB"))(bufSize, pattern);
}

inline void glGetnColorTableARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table) 
{
	reinterpret_cast<PFNGLGETNCOLORTABLEARBPROC>(wglGetProcAddress("glGetnColorTableARB"))(target, format, type, bufSize, table);
}

inline void glGetnConvolutionFilterARB(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image) 
{
	reinterpret_cast<PFNGLGETNCONVOLUTIONFILTERARBPROC>(wglGetProcAddress("glGetnConvolutionFilterARB"))(target, format, type, bufSize, image);
}

inline void glGetnSeparableFilterARB(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span) 
{
	reinterpret_cast<PFNGLGETNSEPARABLEFILTERARBPROC>(wglGetProcAddress("glGetnSeparableFilterARB"))(target, format, type, rowBufSize, row, columnBufSize, column, span);
}

inline void glGetnHistogramARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) 
{
	reinterpret_cast<PFNGLGETNHISTOGRAMARBPROC>(wglGetProcAddress("glGetnHistogramARB"))(target, reset, format, type, bufSize, values);
}

inline void glGetnMinmaxARB(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) 
{
	reinterpret_cast<PFNGLGETNMINMAXARBPROC>(wglGetProcAddress("glGetnMinmaxARB"))(target, reset, format, type, bufSize, values);
}

inline void glFramebufferSampleLocationsfvARB(GLenum target, GLuint start, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC>(wglGetProcAddress("glFramebufferSampleLocationsfvARB"))(target, start, count, v);
}

inline void glNamedFramebufferSampleLocationsfvARB(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC>(wglGetProcAddress("glNamedFramebufferSampleLocationsfvARB"))(framebuffer, start, count, v);
}

inline void glEvaluateDepthValuesARB(void) 
{
	reinterpret_cast<PFNGLEVALUATEDEPTHVALUESARBPROC>(wglGetProcAddress("glEvaluateDepthValuesARB"))();
}

inline void glMinSampleShadingARB(GLfloat value) 
{
	reinterpret_cast<PFNGLMINSAMPLESHADINGARBPROC>(wglGetProcAddress("glMinSampleShadingARB"))(value);
}

inline void glDeleteObjectARB(GLhandleARB obj) 
{
	reinterpret_cast<PFNGLDELETEOBJECTARBPROC>(wglGetProcAddress("glDeleteObjectARB"))(obj);
}

inline GLhandleARB glGetHandleARB(GLenum pname) 
{
	return reinterpret_cast<PFNGLGETHANDLEARBPROC>(wglGetProcAddress("glGetHandleARB"))(pname);
}

inline void glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj) 
{
	reinterpret_cast<PFNGLDETACHOBJECTARBPROC>(wglGetProcAddress("glDetachObjectARB"))(containerObj, attachedObj);
}

inline GLhandleARB glCreateShaderObjectARB(GLenum shaderType) 
{
	return reinterpret_cast<PFNGLCREATESHADEROBJECTARBPROC>(wglGetProcAddress("glCreateShaderObjectARB"))(shaderType);
}

inline void glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length) 
{
	reinterpret_cast<PFNGLSHADERSOURCEARBPROC>(wglGetProcAddress("glShaderSourceARB"))(shaderObj, count, string, length);
}

inline void glCompileShaderARB(GLhandleARB shaderObj) 
{
	reinterpret_cast<PFNGLCOMPILESHADERARBPROC>(wglGetProcAddress("glCompileShaderARB"))(shaderObj);
}

inline GLhandleARB glCreateProgramObjectARB(void) 
{
	return reinterpret_cast<PFNGLCREATEPROGRAMOBJECTARBPROC>(wglGetProcAddress("glCreateProgramObjectARB"))();
}

inline void glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj) 
{
	reinterpret_cast<PFNGLATTACHOBJECTARBPROC>(wglGetProcAddress("glAttachObjectARB"))(containerObj, obj);
}

inline void glLinkProgramARB(GLhandleARB programObj) 
{
	reinterpret_cast<PFNGLLINKPROGRAMARBPROC>(wglGetProcAddress("glLinkProgramARB"))(programObj);
}

inline void glUseProgramObjectARB(GLhandleARB programObj) 
{
	reinterpret_cast<PFNGLUSEPROGRAMOBJECTARBPROC>(wglGetProcAddress("glUseProgramObjectARB"))(programObj);
}

inline void glValidateProgramARB(GLhandleARB programObj) 
{
	reinterpret_cast<PFNGLVALIDATEPROGRAMARBPROC>(wglGetProcAddress("glValidateProgramARB"))(programObj);
}

inline void glUniform1fARB(GLint location, GLfloat v0) 
{
	reinterpret_cast<PFNGLUNIFORM1FARBPROC>(wglGetProcAddress("glUniform1fARB"))(location, v0);
}

inline void glUniform2fARB(GLint location, GLfloat v0, GLfloat v1) 
{
	reinterpret_cast<PFNGLUNIFORM2FARBPROC>(wglGetProcAddress("glUniform2fARB"))(location, v0, v1);
}

inline void glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) 
{
	reinterpret_cast<PFNGLUNIFORM3FARBPROC>(wglGetProcAddress("glUniform3fARB"))(location, v0, v1, v2);
}

inline void glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) 
{
	reinterpret_cast<PFNGLUNIFORM4FARBPROC>(wglGetProcAddress("glUniform4fARB"))(location, v0, v1, v2, v3);
}

inline void glUniform1iARB(GLint location, GLint v0) 
{
	reinterpret_cast<PFNGLUNIFORM1IARBPROC>(wglGetProcAddress("glUniform1iARB"))(location, v0);
}

inline void glUniform2iARB(GLint location, GLint v0, GLint v1) 
{
	reinterpret_cast<PFNGLUNIFORM2IARBPROC>(wglGetProcAddress("glUniform2iARB"))(location, v0, v1);
}

inline void glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2) 
{
	reinterpret_cast<PFNGLUNIFORM3IARBPROC>(wglGetProcAddress("glUniform3iARB"))(location, v0, v1, v2);
}

inline void glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) 
{
	reinterpret_cast<PFNGLUNIFORM4IARBPROC>(wglGetProcAddress("glUniform4iARB"))(location, v0, v1, v2, v3);
}

inline void glUniform1fvARB(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM1FVARBPROC>(wglGetProcAddress("glUniform1fvARB"))(location, count, value);
}

inline void glUniform2fvARB(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM2FVARBPROC>(wglGetProcAddress("glUniform2fvARB"))(location, count, value);
}

inline void glUniform3fvARB(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM3FVARBPROC>(wglGetProcAddress("glUniform3fvARB"))(location, count, value);
}

inline void glUniform4fvARB(GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORM4FVARBPROC>(wglGetProcAddress("glUniform4fvARB"))(location, count, value);
}

inline void glUniform1ivARB(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM1IVARBPROC>(wglGetProcAddress("glUniform1ivARB"))(location, count, value);
}

inline void glUniform2ivARB(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM2IVARBPROC>(wglGetProcAddress("glUniform2ivARB"))(location, count, value);
}

inline void glUniform3ivARB(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM3IVARBPROC>(wglGetProcAddress("glUniform3ivARB"))(location, count, value);
}

inline void glUniform4ivARB(GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLUNIFORM4IVARBPROC>(wglGetProcAddress("glUniform4ivARB"))(location, count, value);
}

inline void glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX2FVARBPROC>(wglGetProcAddress("glUniformMatrix2fvARB"))(location, count, transpose, value);
}

inline void glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX3FVARBPROC>(wglGetProcAddress("glUniformMatrix3fvARB"))(location, count, transpose, value);
}

inline void glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLUNIFORMMATRIX4FVARBPROC>(wglGetProcAddress("glUniformMatrix4fvARB"))(location, count, transpose, value);
}

inline void glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETOBJECTPARAMETERFVARBPROC>(wglGetProcAddress("glGetObjectParameterfvARB"))(obj, pname, params);
}

inline void glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETOBJECTPARAMETERIVARBPROC>(wglGetProcAddress("glGetObjectParameterivARB"))(obj, pname, params);
}

inline void glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog) 
{
	reinterpret_cast<PFNGLGETINFOLOGARBPROC>(wglGetProcAddress("glGetInfoLogARB"))(obj, maxLength, length, infoLog);
}

inline void glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj) 
{
	reinterpret_cast<PFNGLGETATTACHEDOBJECTSARBPROC>(wglGetProcAddress("glGetAttachedObjectsARB"))(containerObj, maxCount, count, obj);
}

inline GLint glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB *name) 
{
	return reinterpret_cast<PFNGLGETUNIFORMLOCATIONARBPROC>(wglGetProcAddress("glGetUniformLocationARB"))(programObj, name);
}

inline void glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name) 
{
	reinterpret_cast<PFNGLGETACTIVEUNIFORMARBPROC>(wglGetProcAddress("glGetActiveUniformARB"))(programObj, index, maxLength, length, size, type, name);
}

inline void glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMFVARBPROC>(wglGetProcAddress("glGetUniformfvARB"))(programObj, location, params);
}

inline void glGetUniformivARB(GLhandleARB programObj, GLint location, GLint *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMIVARBPROC>(wglGetProcAddress("glGetUniformivARB"))(programObj, location, params);
}

inline void glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source) 
{
	reinterpret_cast<PFNGLGETSHADERSOURCEARBPROC>(wglGetProcAddress("glGetShaderSourceARB"))(obj, maxLength, length, source);
}

inline void glNamedStringARB(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string) 
{
	reinterpret_cast<PFNGLNAMEDSTRINGARBPROC>(wglGetProcAddress("glNamedStringARB"))(type, namelen, name, stringlen, string);
}

inline void glDeleteNamedStringARB(GLint namelen, const GLchar *name) 
{
	reinterpret_cast<PFNGLDELETENAMEDSTRINGARBPROC>(wglGetProcAddress("glDeleteNamedStringARB"))(namelen, name);
}

inline void glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length) 
{
	reinterpret_cast<PFNGLCOMPILESHADERINCLUDEARBPROC>(wglGetProcAddress("glCompileShaderIncludeARB"))(shader, count, path, length);
}

inline GLboolean glIsNamedStringARB(GLint namelen, const GLchar *name) 
{
	return reinterpret_cast<PFNGLISNAMEDSTRINGARBPROC>(wglGetProcAddress("glIsNamedStringARB"))(namelen, name);
}

inline void glGetNamedStringARB(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string) 
{
	reinterpret_cast<PFNGLGETNAMEDSTRINGARBPROC>(wglGetProcAddress("glGetNamedStringARB"))(namelen, name, bufSize, stringlen, string);
}

inline void glGetNamedStringivARB(GLint namelen, const GLchar *name, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDSTRINGIVARBPROC>(wglGetProcAddress("glGetNamedStringivARB"))(namelen, name, pname, params);
}

inline void glBufferPageCommitmentARB(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit) 
{
	reinterpret_cast<PFNGLBUFFERPAGECOMMITMENTARBPROC>(wglGetProcAddress("glBufferPageCommitmentARB"))(target, offset, size, commit);
}

inline void glNamedBufferPageCommitmentEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC>(wglGetProcAddress("glNamedBufferPageCommitmentEXT"))(buffer, offset, size, commit);
}

inline void glNamedBufferPageCommitmentARB(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC>(wglGetProcAddress("glNamedBufferPageCommitmentARB"))(buffer, offset, size, commit);
}

inline void glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) 
{
	reinterpret_cast<PFNGLTEXPAGECOMMITMENTARBPROC>(wglGetProcAddress("glTexPageCommitmentARB"))(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

inline void glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer) 
{
	reinterpret_cast<PFNGLTEXBUFFERARBPROC>(wglGetProcAddress("glTexBufferARB"))(target, internalformat, buffer);
}

inline void glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE3DARBPROC>(wglGetProcAddress("glCompressedTexImage3DARB"))(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE2DARBPROC>(wglGetProcAddress("glCompressedTexImage2DARB"))(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXIMAGE1DARBPROC>(wglGetProcAddress("glCompressedTexImage1DARB"))(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC>(wglGetProcAddress("glCompressedTexSubImage3DARB"))(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC>(wglGetProcAddress("glCompressedTexSubImage2DARB"))(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC>(wglGetProcAddress("glCompressedTexSubImage1DARB"))(target, level, xoffset, width, format, imageSize, data);
}

inline void glGetCompressedTexImageARB(GLenum target, GLint level, void *img) 
{
	reinterpret_cast<PFNGLGETCOMPRESSEDTEXIMAGEARBPROC>(wglGetProcAddress("glGetCompressedTexImageARB"))(target, level, img);
}

inline void glLoadTransposeMatrixfARB(const GLfloat *m) 
{
	reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXFARBPROC>(wglGetProcAddress("glLoadTransposeMatrixfARB"))(m);
}

inline void glLoadTransposeMatrixdARB(const GLdouble *m) 
{
	reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXDARBPROC>(wglGetProcAddress("glLoadTransposeMatrixdARB"))(m);
}

inline void glMultTransposeMatrixfARB(const GLfloat *m) 
{
	reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXFARBPROC>(wglGetProcAddress("glMultTransposeMatrixfARB"))(m);
}

inline void glMultTransposeMatrixdARB(const GLdouble *m) 
{
	reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXDARBPROC>(wglGetProcAddress("glMultTransposeMatrixdARB"))(m);
}

inline void glWeightbvARB(GLint size, const GLbyte *weights) 
{
	reinterpret_cast<PFNGLWEIGHTBVARBPROC>(wglGetProcAddress("glWeightbvARB"))(size, weights);
}

inline void glWeightsvARB(GLint size, const GLshort *weights) 
{
	reinterpret_cast<PFNGLWEIGHTSVARBPROC>(wglGetProcAddress("glWeightsvARB"))(size, weights);
}

inline void glWeightivARB(GLint size, const GLint *weights) 
{
	reinterpret_cast<PFNGLWEIGHTIVARBPROC>(wglGetProcAddress("glWeightivARB"))(size, weights);
}

inline void glWeightfvARB(GLint size, const GLfloat *weights) 
{
	reinterpret_cast<PFNGLWEIGHTFVARBPROC>(wglGetProcAddress("glWeightfvARB"))(size, weights);
}

inline void glWeightdvARB(GLint size, const GLdouble *weights) 
{
	reinterpret_cast<PFNGLWEIGHTDVARBPROC>(wglGetProcAddress("glWeightdvARB"))(size, weights);
}

inline void glWeightubvARB(GLint size, const GLubyte *weights) 
{
	reinterpret_cast<PFNGLWEIGHTUBVARBPROC>(wglGetProcAddress("glWeightubvARB"))(size, weights);
}

inline void glWeightusvARB(GLint size, const GLushort *weights) 
{
	reinterpret_cast<PFNGLWEIGHTUSVARBPROC>(wglGetProcAddress("glWeightusvARB"))(size, weights);
}

inline void glWeightuivARB(GLint size, const GLuint *weights) 
{
	reinterpret_cast<PFNGLWEIGHTUIVARBPROC>(wglGetProcAddress("glWeightuivARB"))(size, weights);
}

inline void glWeightPointerARB(GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLWEIGHTPOINTERARBPROC>(wglGetProcAddress("glWeightPointerARB"))(size, type, stride, pointer);
}

inline void glVertexBlendARB(GLint count) 
{
	reinterpret_cast<PFNGLVERTEXBLENDARBPROC>(wglGetProcAddress("glVertexBlendARB"))(count);
}

inline void glBindBufferARB(GLenum target, GLuint buffer) 
{
	reinterpret_cast<PFNGLBINDBUFFERARBPROC>(wglGetProcAddress("glBindBufferARB"))(target, buffer);
}

inline void glDeleteBuffersARB(GLsizei n, const GLuint *buffers) 
{
	reinterpret_cast<PFNGLDELETEBUFFERSARBPROC>(wglGetProcAddress("glDeleteBuffersARB"))(n, buffers);
}

inline void glGenBuffersARB(GLsizei n, GLuint *buffers) 
{
	reinterpret_cast<PFNGLGENBUFFERSARBPROC>(wglGetProcAddress("glGenBuffersARB"))(n, buffers);
}

inline GLboolean glIsBufferARB(GLuint buffer) 
{
	return reinterpret_cast<PFNGLISBUFFERARBPROC>(wglGetProcAddress("glIsBufferARB"))(buffer);
}

inline void glBufferDataARB(GLenum target, GLsizeiptrARB size, const void *data, GLenum usage) 
{
	reinterpret_cast<PFNGLBUFFERDATAARBPROC>(wglGetProcAddress("glBufferDataARB"))(target, size, data, usage);
}

inline void glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void *data) 
{
	reinterpret_cast<PFNGLBUFFERSUBDATAARBPROC>(wglGetProcAddress("glBufferSubDataARB"))(target, offset, size, data);
}

inline void glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void *data) 
{
	reinterpret_cast<PFNGLGETBUFFERSUBDATAARBPROC>(wglGetProcAddress("glGetBufferSubDataARB"))(target, offset, size, data);
}

inline GLboolean glUnmapBufferARB(GLenum target) 
{
	return reinterpret_cast<PFNGLUNMAPBUFFERARBPROC>(wglGetProcAddress("glUnmapBufferARB"))(target);
}

inline void glGetBufferParameterivARB(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETBUFFERPARAMETERIVARBPROC>(wglGetProcAddress("glGetBufferParameterivARB"))(target, pname, params);
}

inline void glGetBufferPointervARB(GLenum target, GLenum pname, void **params) 
{
	reinterpret_cast<PFNGLGETBUFFERPOINTERVARBPROC>(wglGetProcAddress("glGetBufferPointervARB"))(target, pname, params);
}

inline void glVertexAttrib1dARB(GLuint index, GLdouble x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1DARBPROC>(wglGetProcAddress("glVertexAttrib1dARB"))(index, x);
}

inline void glVertexAttrib1dvARB(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1DVARBPROC>(wglGetProcAddress("glVertexAttrib1dvARB"))(index, v);
}

inline void glVertexAttrib1fARB(GLuint index, GLfloat x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1FARBPROC>(wglGetProcAddress("glVertexAttrib1fARB"))(index, x);
}

inline void glVertexAttrib1fvARB(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1FVARBPROC>(wglGetProcAddress("glVertexAttrib1fvARB"))(index, v);
}

inline void glVertexAttrib1sARB(GLuint index, GLshort x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1SARBPROC>(wglGetProcAddress("glVertexAttrib1sARB"))(index, x);
}

inline void glVertexAttrib1svARB(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1SVARBPROC>(wglGetProcAddress("glVertexAttrib1svARB"))(index, v);
}

inline void glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2DARBPROC>(wglGetProcAddress("glVertexAttrib2dARB"))(index, x, y);
}

inline void glVertexAttrib2dvARB(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2DVARBPROC>(wglGetProcAddress("glVertexAttrib2dvARB"))(index, v);
}

inline void glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2FARBPROC>(wglGetProcAddress("glVertexAttrib2fARB"))(index, x, y);
}

inline void glVertexAttrib2fvARB(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2FVARBPROC>(wglGetProcAddress("glVertexAttrib2fvARB"))(index, v);
}

inline void glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2SARBPROC>(wglGetProcAddress("glVertexAttrib2sARB"))(index, x, y);
}

inline void glVertexAttrib2svARB(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2SVARBPROC>(wglGetProcAddress("glVertexAttrib2svARB"))(index, v);
}

inline void glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3DARBPROC>(wglGetProcAddress("glVertexAttrib3dARB"))(index, x, y, z);
}

inline void glVertexAttrib3dvARB(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3DVARBPROC>(wglGetProcAddress("glVertexAttrib3dvARB"))(index, v);
}

inline void glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3FARBPROC>(wglGetProcAddress("glVertexAttrib3fARB"))(index, x, y, z);
}

inline void glVertexAttrib3fvARB(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3FVARBPROC>(wglGetProcAddress("glVertexAttrib3fvARB"))(index, v);
}

inline void glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3SARBPROC>(wglGetProcAddress("glVertexAttrib3sARB"))(index, x, y, z);
}

inline void glVertexAttrib3svARB(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3SVARBPROC>(wglGetProcAddress("glVertexAttrib3svARB"))(index, v);
}

inline void glVertexAttrib4NbvARB(GLuint index, const GLbyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NBVARBPROC>(wglGetProcAddress("glVertexAttrib4NbvARB"))(index, v);
}

inline void glVertexAttrib4NivARB(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NIVARBPROC>(wglGetProcAddress("glVertexAttrib4NivARB"))(index, v);
}

inline void glVertexAttrib4NsvARB(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NSVARBPROC>(wglGetProcAddress("glVertexAttrib4NsvARB"))(index, v);
}

inline void glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUBARBPROC>(wglGetProcAddress("glVertexAttrib4NubARB"))(index, x, y, z, w);
}

inline void glVertexAttrib4NubvARB(GLuint index, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUBVARBPROC>(wglGetProcAddress("glVertexAttrib4NubvARB"))(index, v);
}

inline void glVertexAttrib4NuivARB(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUIVARBPROC>(wglGetProcAddress("glVertexAttrib4NuivARB"))(index, v);
}

inline void glVertexAttrib4NusvARB(GLuint index, const GLushort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4NUSVARBPROC>(wglGetProcAddress("glVertexAttrib4NusvARB"))(index, v);
}

inline void glVertexAttrib4bvARB(GLuint index, const GLbyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4BVARBPROC>(wglGetProcAddress("glVertexAttrib4bvARB"))(index, v);
}

inline void glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4DARBPROC>(wglGetProcAddress("glVertexAttrib4dARB"))(index, x, y, z, w);
}

inline void glVertexAttrib4dvARB(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4DVARBPROC>(wglGetProcAddress("glVertexAttrib4dvARB"))(index, v);
}

inline void glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4FARBPROC>(wglGetProcAddress("glVertexAttrib4fARB"))(index, x, y, z, w);
}

inline void glVertexAttrib4fvARB(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4FVARBPROC>(wglGetProcAddress("glVertexAttrib4fvARB"))(index, v);
}

inline void glVertexAttrib4ivARB(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4IVARBPROC>(wglGetProcAddress("glVertexAttrib4ivARB"))(index, v);
}

inline void glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4SARBPROC>(wglGetProcAddress("glVertexAttrib4sARB"))(index, x, y, z, w);
}

inline void glVertexAttrib4svARB(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4SVARBPROC>(wglGetProcAddress("glVertexAttrib4svARB"))(index, v);
}

inline void glVertexAttrib4ubvARB(GLuint index, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4UBVARBPROC>(wglGetProcAddress("glVertexAttrib4ubvARB"))(index, v);
}

inline void glVertexAttrib4uivARB(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4UIVARBPROC>(wglGetProcAddress("glVertexAttrib4uivARB"))(index, v);
}

inline void glVertexAttrib4usvARB(GLuint index, const GLushort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4USVARBPROC>(wglGetProcAddress("glVertexAttrib4usvARB"))(index, v);
}

inline void glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBPOINTERARBPROC>(wglGetProcAddress("glVertexAttribPointerARB"))(index, size, type, normalized, stride, pointer);
}

inline void glEnableVertexAttribArrayARB(GLuint index) 
{
	reinterpret_cast<PFNGLENABLEVERTEXATTRIBARRAYARBPROC>(wglGetProcAddress("glEnableVertexAttribArrayARB"))(index);
}

inline void glDisableVertexAttribArrayARB(GLuint index) 
{
	reinterpret_cast<PFNGLDISABLEVERTEXATTRIBARRAYARBPROC>(wglGetProcAddress("glDisableVertexAttribArrayARB"))(index);
}

inline void glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBDVARBPROC>(wglGetProcAddress("glGetVertexAttribdvARB"))(index, pname, params);
}

inline void glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBFVARBPROC>(wglGetProcAddress("glGetVertexAttribfvARB"))(index, pname, params);
}

inline void glGetVertexAttribivARB(GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBIVARBPROC>(wglGetProcAddress("glGetVertexAttribivARB"))(index, pname, params);
}

inline void glGetVertexAttribPointervARB(GLuint index, GLenum pname, void **pointer) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVARBPROC>(wglGetProcAddress("glGetVertexAttribPointervARB"))(index, pname, pointer);
}

inline void glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB *name) 
{
	reinterpret_cast<PFNGLBINDATTRIBLOCATIONARBPROC>(wglGetProcAddress("glBindAttribLocationARB"))(programObj, index, name);
}

inline void glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name) 
{
	reinterpret_cast<PFNGLGETACTIVEATTRIBARBPROC>(wglGetProcAddress("glGetActiveAttribARB"))(programObj, index, maxLength, length, size, type, name);
}

inline GLint glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB *name) 
{
	return reinterpret_cast<PFNGLGETATTRIBLOCATIONARBPROC>(wglGetProcAddress("glGetAttribLocationARB"))(programObj, name);
}

inline void glWindowPos2dARB(GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2DARBPROC>(wglGetProcAddress("glWindowPos2dARB"))(x, y);
}

inline void glWindowPos2dvARB(const GLdouble *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2DVARBPROC>(wglGetProcAddress("glWindowPos2dvARB"))(v);
}

inline void glWindowPos2fARB(GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2FARBPROC>(wglGetProcAddress("glWindowPos2fARB"))(x, y);
}

inline void glWindowPos2fvARB(const GLfloat *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2FVARBPROC>(wglGetProcAddress("glWindowPos2fvARB"))(v);
}

inline void glWindowPos2iARB(GLint x, GLint y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2IARBPROC>(wglGetProcAddress("glWindowPos2iARB"))(x, y);
}

inline void glWindowPos2ivARB(const GLint *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2IVARBPROC>(wglGetProcAddress("glWindowPos2ivARB"))(v);
}

inline void glWindowPos2sARB(GLshort x, GLshort y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2SARBPROC>(wglGetProcAddress("glWindowPos2sARB"))(x, y);
}

inline void glWindowPos2svARB(const GLshort *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2SVARBPROC>(wglGetProcAddress("glWindowPos2svARB"))(v);
}

inline void glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3DARBPROC>(wglGetProcAddress("glWindowPos3dARB"))(x, y, z);
}

inline void glWindowPos3dvARB(const GLdouble *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3DVARBPROC>(wglGetProcAddress("glWindowPos3dvARB"))(v);
}

inline void glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3FARBPROC>(wglGetProcAddress("glWindowPos3fARB"))(x, y, z);
}

inline void glWindowPos3fvARB(const GLfloat *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3FVARBPROC>(wglGetProcAddress("glWindowPos3fvARB"))(v);
}

inline void glWindowPos3iARB(GLint x, GLint y, GLint z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3IARBPROC>(wglGetProcAddress("glWindowPos3iARB"))(x, y, z);
}

inline void glWindowPos3ivARB(const GLint *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3IVARBPROC>(wglGetProcAddress("glWindowPos3ivARB"))(v);
}

inline void glWindowPos3sARB(GLshort x, GLshort y, GLshort z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3SARBPROC>(wglGetProcAddress("glWindowPos3sARB"))(x, y, z);
}

inline void glWindowPos3svARB(const GLshort *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3SVARBPROC>(wglGetProcAddress("glWindowPos3svARB"))(v);
}

inline void glBlendBarrierKHR(void) 
{
	reinterpret_cast<PFNGLBLENDBARRIERKHRPROC>(wglGetProcAddress("glBlendBarrierKHR"))();
}

inline void glMultiTexCoord1bOES(GLenum texture, GLbyte s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1BOESPROC>(wglGetProcAddress("glMultiTexCoord1bOES"))(texture, s);
}

inline void glMultiTexCoord1bvOES(GLenum texture, const GLbyte *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1BVOESPROC>(wglGetProcAddress("glMultiTexCoord1bvOES"))(texture, coords);
}

inline void glMultiTexCoord2bOES(GLenum texture, GLbyte s, GLbyte t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2BOESPROC>(wglGetProcAddress("glMultiTexCoord2bOES"))(texture, s, t);
}

inline void glMultiTexCoord2bvOES(GLenum texture, const GLbyte *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2BVOESPROC>(wglGetProcAddress("glMultiTexCoord2bvOES"))(texture, coords);
}

inline void glMultiTexCoord3bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3BOESPROC>(wglGetProcAddress("glMultiTexCoord3bOES"))(texture, s, t, r);
}

inline void glMultiTexCoord3bvOES(GLenum texture, const GLbyte *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3BVOESPROC>(wglGetProcAddress("glMultiTexCoord3bvOES"))(texture, coords);
}

inline void glMultiTexCoord4bOES(GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4BOESPROC>(wglGetProcAddress("glMultiTexCoord4bOES"))(texture, s, t, r, q);
}

inline void glMultiTexCoord4bvOES(GLenum texture, const GLbyte *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4BVOESPROC>(wglGetProcAddress("glMultiTexCoord4bvOES"))(texture, coords);
}

inline void glTexCoord1bOES(GLbyte s) 
{
	reinterpret_cast<PFNGLTEXCOORD1BOESPROC>(wglGetProcAddress("glTexCoord1bOES"))(s);
}

inline void glTexCoord1bvOES(const GLbyte *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD1BVOESPROC>(wglGetProcAddress("glTexCoord1bvOES"))(coords);
}

inline void glTexCoord2bOES(GLbyte s, GLbyte t) 
{
	reinterpret_cast<PFNGLTEXCOORD2BOESPROC>(wglGetProcAddress("glTexCoord2bOES"))(s, t);
}

inline void glTexCoord2bvOES(const GLbyte *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD2BVOESPROC>(wglGetProcAddress("glTexCoord2bvOES"))(coords);
}

inline void glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r) 
{
	reinterpret_cast<PFNGLTEXCOORD3BOESPROC>(wglGetProcAddress("glTexCoord3bOES"))(s, t, r);
}

inline void glTexCoord3bvOES(const GLbyte *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD3BVOESPROC>(wglGetProcAddress("glTexCoord3bvOES"))(coords);
}

inline void glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q) 
{
	reinterpret_cast<PFNGLTEXCOORD4BOESPROC>(wglGetProcAddress("glTexCoord4bOES"))(s, t, r, q);
}

inline void glTexCoord4bvOES(const GLbyte *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD4BVOESPROC>(wglGetProcAddress("glTexCoord4bvOES"))(coords);
}

inline void glVertex2bOES(GLbyte x, GLbyte y) 
{
	reinterpret_cast<PFNGLVERTEX2BOESPROC>(wglGetProcAddress("glVertex2bOES"))(x, y);
}

inline void glVertex2bvOES(const GLbyte *coords) 
{
	reinterpret_cast<PFNGLVERTEX2BVOESPROC>(wglGetProcAddress("glVertex2bvOES"))(coords);
}

inline void glVertex3bOES(GLbyte x, GLbyte y, GLbyte z) 
{
	reinterpret_cast<PFNGLVERTEX3BOESPROC>(wglGetProcAddress("glVertex3bOES"))(x, y, z);
}

inline void glVertex3bvOES(const GLbyte *coords) 
{
	reinterpret_cast<PFNGLVERTEX3BVOESPROC>(wglGetProcAddress("glVertex3bvOES"))(coords);
}

inline void glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w) 
{
	reinterpret_cast<PFNGLVERTEX4BOESPROC>(wglGetProcAddress("glVertex4bOES"))(x, y, z, w);
}

inline void glVertex4bvOES(const GLbyte *coords) 
{
	reinterpret_cast<PFNGLVERTEX4BVOESPROC>(wglGetProcAddress("glVertex4bvOES"))(coords);
}

inline void glAlphaFuncxOES(GLenum func, GLfixed ref) 
{
	reinterpret_cast<PFNGLALPHAFUNCXOESPROC>(wglGetProcAddress("glAlphaFuncxOES"))(func, ref);
}

inline void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) 
{
	reinterpret_cast<PFNGLCLEARCOLORXOESPROC>(wglGetProcAddress("glClearColorxOES"))(red, green, blue, alpha);
}

inline void glClearDepthxOES(GLfixed depth) 
{
	reinterpret_cast<PFNGLCLEARDEPTHXOESPROC>(wglGetProcAddress("glClearDepthxOES"))(depth);
}

inline void glClipPlanexOES(GLenum plane, const GLfixed *equation) 
{
	reinterpret_cast<PFNGLCLIPPLANEXOESPROC>(wglGetProcAddress("glClipPlanexOES"))(plane, equation);
}

inline void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) 
{
	reinterpret_cast<PFNGLCOLOR4XOESPROC>(wglGetProcAddress("glColor4xOES"))(red, green, blue, alpha);
}

inline void glDepthRangexOES(GLfixed n, GLfixed f) 
{
	reinterpret_cast<PFNGLDEPTHRANGEXOESPROC>(wglGetProcAddress("glDepthRangexOES"))(n, f);
}

inline void glFogxOES(GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLFOGXOESPROC>(wglGetProcAddress("glFogxOES"))(pname, param);
}

inline void glFogxvOES(GLenum pname, const GLfixed *param) 
{
	reinterpret_cast<PFNGLFOGXVOESPROC>(wglGetProcAddress("glFogxvOES"))(pname, param);
}

inline void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) 
{
	reinterpret_cast<PFNGLFRUSTUMXOESPROC>(wglGetProcAddress("glFrustumxOES"))(l, r, b, t, n, f);
}

inline void glGetClipPlanexOES(GLenum plane, GLfixed *equation) 
{
	reinterpret_cast<PFNGLGETCLIPPLANEXOESPROC>(wglGetProcAddress("glGetClipPlanexOES"))(plane, equation);
}

inline void glGetFixedvOES(GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETFIXEDVOESPROC>(wglGetProcAddress("glGetFixedvOES"))(pname, params);
}

inline void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETTEXENVXVOESPROC>(wglGetProcAddress("glGetTexEnvxvOES"))(target, pname, params);
}

inline void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETTEXPARAMETERXVOESPROC>(wglGetProcAddress("glGetTexParameterxvOES"))(target, pname, params);
}

inline void glLightModelxOES(GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLLIGHTMODELXOESPROC>(wglGetProcAddress("glLightModelxOES"))(pname, param);
}

inline void glLightModelxvOES(GLenum pname, const GLfixed *param) 
{
	reinterpret_cast<PFNGLLIGHTMODELXVOESPROC>(wglGetProcAddress("glLightModelxvOES"))(pname, param);
}

inline void glLightxOES(GLenum light, GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLLIGHTXOESPROC>(wglGetProcAddress("glLightxOES"))(light, pname, param);
}

inline void glLightxvOES(GLenum light, GLenum pname, const GLfixed *params) 
{
	reinterpret_cast<PFNGLLIGHTXVOESPROC>(wglGetProcAddress("glLightxvOES"))(light, pname, params);
}

inline void glLineWidthxOES(GLfixed width) 
{
	reinterpret_cast<PFNGLLINEWIDTHXOESPROC>(wglGetProcAddress("glLineWidthxOES"))(width);
}

inline void glLoadMatrixxOES(const GLfixed *m) 
{
	reinterpret_cast<PFNGLLOADMATRIXXOESPROC>(wglGetProcAddress("glLoadMatrixxOES"))(m);
}

inline void glMaterialxOES(GLenum face, GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLMATERIALXOESPROC>(wglGetProcAddress("glMaterialxOES"))(face, pname, param);
}

inline void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed *param) 
{
	reinterpret_cast<PFNGLMATERIALXVOESPROC>(wglGetProcAddress("glMaterialxvOES"))(face, pname, param);
}

inline void glMultMatrixxOES(const GLfixed *m) 
{
	reinterpret_cast<PFNGLMULTMATRIXXOESPROC>(wglGetProcAddress("glMultMatrixxOES"))(m);
}

inline void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4XOESPROC>(wglGetProcAddress("glMultiTexCoord4xOES"))(texture, s, t, r, q);
}

inline void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz) 
{
	reinterpret_cast<PFNGLNORMAL3XOESPROC>(wglGetProcAddress("glNormal3xOES"))(nx, ny, nz);
}

inline void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) 
{
	reinterpret_cast<PFNGLORTHOXOESPROC>(wglGetProcAddress("glOrthoxOES"))(l, r, b, t, n, f);
}

inline void glPointParameterxvOES(GLenum pname, const GLfixed *params) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERXVOESPROC>(wglGetProcAddress("glPointParameterxvOES"))(pname, params);
}

inline void glPointSizexOES(GLfixed size) 
{
	reinterpret_cast<PFNGLPOINTSIZEXOESPROC>(wglGetProcAddress("glPointSizexOES"))(size);
}

inline void glPolygonOffsetxOES(GLfixed factor, GLfixed units) 
{
	reinterpret_cast<PFNGLPOLYGONOFFSETXOESPROC>(wglGetProcAddress("glPolygonOffsetxOES"))(factor, units);
}

inline void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z) 
{
	reinterpret_cast<PFNGLROTATEXOESPROC>(wglGetProcAddress("glRotatexOES"))(angle, x, y, z);
}

inline void glScalexOES(GLfixed x, GLfixed y, GLfixed z) 
{
	reinterpret_cast<PFNGLSCALEXOESPROC>(wglGetProcAddress("glScalexOES"))(x, y, z);
}

inline void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLTEXENVXOESPROC>(wglGetProcAddress("glTexEnvxOES"))(target, pname, param);
}

inline void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed *params) 
{
	reinterpret_cast<PFNGLTEXENVXVOESPROC>(wglGetProcAddress("glTexEnvxvOES"))(target, pname, params);
}

inline void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLTEXPARAMETERXOESPROC>(wglGetProcAddress("glTexParameterxOES"))(target, pname, param);
}

inline void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed *params) 
{
	reinterpret_cast<PFNGLTEXPARAMETERXVOESPROC>(wglGetProcAddress("glTexParameterxvOES"))(target, pname, params);
}

inline void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z) 
{
	reinterpret_cast<PFNGLTRANSLATEXOESPROC>(wglGetProcAddress("glTranslatexOES"))(x, y, z);
}

inline void glAccumxOES(GLenum op, GLfixed value) 
{
	reinterpret_cast<PFNGLACCUMXOESPROC>(wglGetProcAddress("glAccumxOES"))(op, value);
}

inline void glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte *bitmap) 
{
	reinterpret_cast<PFNGLBITMAPXOESPROC>(wglGetProcAddress("glBitmapxOES"))(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) 
{
	reinterpret_cast<PFNGLBLENDCOLORXOESPROC>(wglGetProcAddress("glBlendColorxOES"))(red, green, blue, alpha);
}

inline void glClearAccumxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) 
{
	reinterpret_cast<PFNGLCLEARACCUMXOESPROC>(wglGetProcAddress("glClearAccumxOES"))(red, green, blue, alpha);
}

inline void glColor3xOES(GLfixed red, GLfixed green, GLfixed blue) 
{
	reinterpret_cast<PFNGLCOLOR3XOESPROC>(wglGetProcAddress("glColor3xOES"))(red, green, blue);
}

inline void glColor3xvOES(const GLfixed *components) 
{
	reinterpret_cast<PFNGLCOLOR3XVOESPROC>(wglGetProcAddress("glColor3xvOES"))(components);
}

inline void glColor4xvOES(const GLfixed *components) 
{
	reinterpret_cast<PFNGLCOLOR4XVOESPROC>(wglGetProcAddress("glColor4xvOES"))(components);
}

inline void glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERXOESPROC>(wglGetProcAddress("glConvolutionParameterxOES"))(target, pname, param);
}

inline void glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed *params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERXVOESPROC>(wglGetProcAddress("glConvolutionParameterxvOES"))(target, pname, params);
}

inline void glEvalCoord1xOES(GLfixed u) 
{
	reinterpret_cast<PFNGLEVALCOORD1XOESPROC>(wglGetProcAddress("glEvalCoord1xOES"))(u);
}

inline void glEvalCoord1xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLEVALCOORD1XVOESPROC>(wglGetProcAddress("glEvalCoord1xvOES"))(coords);
}

inline void glEvalCoord2xOES(GLfixed u, GLfixed v) 
{
	reinterpret_cast<PFNGLEVALCOORD2XOESPROC>(wglGetProcAddress("glEvalCoord2xOES"))(u, v);
}

inline void glEvalCoord2xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLEVALCOORD2XVOESPROC>(wglGetProcAddress("glEvalCoord2xvOES"))(coords);
}

inline void glFeedbackBufferxOES(GLsizei n, GLenum type, const GLfixed *buffer) 
{
	reinterpret_cast<PFNGLFEEDBACKBUFFERXOESPROC>(wglGetProcAddress("glFeedbackBufferxOES"))(n, type, buffer);
}

inline void glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERXVOESPROC>(wglGetProcAddress("glGetConvolutionParameterxvOES"))(target, pname, params);
}

inline void glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERXVOESPROC>(wglGetProcAddress("glGetHistogramParameterxvOES"))(target, pname, params);
}

inline void glGetLightxOES(GLenum light, GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETLIGHTXOESPROC>(wglGetProcAddress("glGetLightxOES"))(light, pname, params);
}

inline void glGetMapxvOES(GLenum target, GLenum query, GLfixed *v) 
{
	reinterpret_cast<PFNGLGETMAPXVOESPROC>(wglGetProcAddress("glGetMapxvOES"))(target, query, v);
}

inline void glGetMaterialxOES(GLenum face, GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLGETMATERIALXOESPROC>(wglGetProcAddress("glGetMaterialxOES"))(face, pname, param);
}

inline void glGetPixelMapxv(GLenum map, GLint size, GLfixed *values) 
{
	reinterpret_cast<PFNGLGETPIXELMAPXVPROC>(wglGetProcAddress("glGetPixelMapxv"))(map, size, values);
}

inline void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETTEXGENXVOESPROC>(wglGetProcAddress("glGetTexGenxvOES"))(coord, pname, params);
}

inline void glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed *params) 
{
	reinterpret_cast<PFNGLGETTEXLEVELPARAMETERXVOESPROC>(wglGetProcAddress("glGetTexLevelParameterxvOES"))(target, level, pname, params);
}

inline void glIndexxOES(GLfixed component) 
{
	reinterpret_cast<PFNGLINDEXXOESPROC>(wglGetProcAddress("glIndexxOES"))(component);
}

inline void glIndexxvOES(const GLfixed *component) 
{
	reinterpret_cast<PFNGLINDEXXVOESPROC>(wglGetProcAddress("glIndexxvOES"))(component);
}

inline void glLoadTransposeMatrixxOES(const GLfixed *m) 
{
	reinterpret_cast<PFNGLLOADTRANSPOSEMATRIXXOESPROC>(wglGetProcAddress("glLoadTransposeMatrixxOES"))(m);
}

inline void glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points) 
{
	reinterpret_cast<PFNGLMAP1XOESPROC>(wglGetProcAddress("glMap1xOES"))(target, u1, u2, stride, order, points);
}

inline void glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points) 
{
	reinterpret_cast<PFNGLMAP2XOESPROC>(wglGetProcAddress("glMap2xOES"))(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapGrid1xOES(GLint n, GLfixed u1, GLfixed u2) 
{
	reinterpret_cast<PFNGLMAPGRID1XOESPROC>(wglGetProcAddress("glMapGrid1xOES"))(n, u1, u2);
}

inline void glMapGrid2xOES(GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2) 
{
	reinterpret_cast<PFNGLMAPGRID2XOESPROC>(wglGetProcAddress("glMapGrid2xOES"))(n, u1, u2, v1, v2);
}

inline void glMultTransposeMatrixxOES(const GLfixed *m) 
{
	reinterpret_cast<PFNGLMULTTRANSPOSEMATRIXXOESPROC>(wglGetProcAddress("glMultTransposeMatrixxOES"))(m);
}

inline void glMultiTexCoord1xOES(GLenum texture, GLfixed s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1XOESPROC>(wglGetProcAddress("glMultiTexCoord1xOES"))(texture, s);
}

inline void glMultiTexCoord1xvOES(GLenum texture, const GLfixed *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1XVOESPROC>(wglGetProcAddress("glMultiTexCoord1xvOES"))(texture, coords);
}

inline void glMultiTexCoord2xOES(GLenum texture, GLfixed s, GLfixed t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2XOESPROC>(wglGetProcAddress("glMultiTexCoord2xOES"))(texture, s, t);
}

inline void glMultiTexCoord2xvOES(GLenum texture, const GLfixed *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2XVOESPROC>(wglGetProcAddress("glMultiTexCoord2xvOES"))(texture, coords);
}

inline void glMultiTexCoord3xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3XOESPROC>(wglGetProcAddress("glMultiTexCoord3xOES"))(texture, s, t, r);
}

inline void glMultiTexCoord3xvOES(GLenum texture, const GLfixed *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3XVOESPROC>(wglGetProcAddress("glMultiTexCoord3xvOES"))(texture, coords);
}

inline void glMultiTexCoord4xvOES(GLenum texture, const GLfixed *coords) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4XVOESPROC>(wglGetProcAddress("glMultiTexCoord4xvOES"))(texture, coords);
}

inline void glNormal3xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLNORMAL3XVOESPROC>(wglGetProcAddress("glNormal3xvOES"))(coords);
}

inline void glPassThroughxOES(GLfixed token) 
{
	reinterpret_cast<PFNGLPASSTHROUGHXOESPROC>(wglGetProcAddress("glPassThroughxOES"))(token);
}

inline void glPixelMapx(GLenum map, GLint size, const GLfixed *values) 
{
	reinterpret_cast<PFNGLPIXELMAPXPROC>(wglGetProcAddress("glPixelMapx"))(map, size, values);
}

inline void glPixelStorex(GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLPIXELSTOREXPROC>(wglGetProcAddress("glPixelStorex"))(pname, param);
}

inline void glPixelTransferxOES(GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLPIXELTRANSFERXOESPROC>(wglGetProcAddress("glPixelTransferxOES"))(pname, param);
}

inline void glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor) 
{
	reinterpret_cast<PFNGLPIXELZOOMXOESPROC>(wglGetProcAddress("glPixelZoomxOES"))(xfactor, yfactor);
}

inline void glPrioritizeTexturesxOES(GLsizei n, const GLuint *textures, const GLfixed *priorities) 
{
	reinterpret_cast<PFNGLPRIORITIZETEXTURESXOESPROC>(wglGetProcAddress("glPrioritizeTexturesxOES"))(n, textures, priorities);
}

inline void glRasterPos2xOES(GLfixed x, GLfixed y) 
{
	reinterpret_cast<PFNGLRASTERPOS2XOESPROC>(wglGetProcAddress("glRasterPos2xOES"))(x, y);
}

inline void glRasterPos2xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLRASTERPOS2XVOESPROC>(wglGetProcAddress("glRasterPos2xvOES"))(coords);
}

inline void glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z) 
{
	reinterpret_cast<PFNGLRASTERPOS3XOESPROC>(wglGetProcAddress("glRasterPos3xOES"))(x, y, z);
}

inline void glRasterPos3xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLRASTERPOS3XVOESPROC>(wglGetProcAddress("glRasterPos3xvOES"))(coords);
}

inline void glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w) 
{
	reinterpret_cast<PFNGLRASTERPOS4XOESPROC>(wglGetProcAddress("glRasterPos4xOES"))(x, y, z, w);
}

inline void glRasterPos4xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLRASTERPOS4XVOESPROC>(wglGetProcAddress("glRasterPos4xvOES"))(coords);
}

inline void glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2) 
{
	reinterpret_cast<PFNGLRECTXOESPROC>(wglGetProcAddress("glRectxOES"))(x1, y1, x2, y2);
}

inline void glRectxvOES(const GLfixed *v1, const GLfixed *v2) 
{
	reinterpret_cast<PFNGLRECTXVOESPROC>(wglGetProcAddress("glRectxvOES"))(v1, v2);
}

inline void glTexCoord1xOES(GLfixed s) 
{
	reinterpret_cast<PFNGLTEXCOORD1XOESPROC>(wglGetProcAddress("glTexCoord1xOES"))(s);
}

inline void glTexCoord1xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD1XVOESPROC>(wglGetProcAddress("glTexCoord1xvOES"))(coords);
}

inline void glTexCoord2xOES(GLfixed s, GLfixed t) 
{
	reinterpret_cast<PFNGLTEXCOORD2XOESPROC>(wglGetProcAddress("glTexCoord2xOES"))(s, t);
}

inline void glTexCoord2xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD2XVOESPROC>(wglGetProcAddress("glTexCoord2xvOES"))(coords);
}

inline void glTexCoord3xOES(GLfixed s, GLfixed t, GLfixed r) 
{
	reinterpret_cast<PFNGLTEXCOORD3XOESPROC>(wglGetProcAddress("glTexCoord3xOES"))(s, t, r);
}

inline void glTexCoord3xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD3XVOESPROC>(wglGetProcAddress("glTexCoord3xvOES"))(coords);
}

inline void glTexCoord4xOES(GLfixed s, GLfixed t, GLfixed r, GLfixed q) 
{
	reinterpret_cast<PFNGLTEXCOORD4XOESPROC>(wglGetProcAddress("glTexCoord4xOES"))(s, t, r, q);
}

inline void glTexCoord4xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLTEXCOORD4XVOESPROC>(wglGetProcAddress("glTexCoord4xvOES"))(coords);
}

inline void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param) 
{
	reinterpret_cast<PFNGLTEXGENXOESPROC>(wglGetProcAddress("glTexGenxOES"))(coord, pname, param);
}

inline void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed *params) 
{
	reinterpret_cast<PFNGLTEXGENXVOESPROC>(wglGetProcAddress("glTexGenxvOES"))(coord, pname, params);
}

inline void glVertex2xOES(GLfixed x) 
{
	reinterpret_cast<PFNGLVERTEX2XOESPROC>(wglGetProcAddress("glVertex2xOES"))(x);
}

inline void glVertex2xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLVERTEX2XVOESPROC>(wglGetProcAddress("glVertex2xvOES"))(coords);
}

inline void glVertex3xOES(GLfixed x, GLfixed y) 
{
	reinterpret_cast<PFNGLVERTEX3XOESPROC>(wglGetProcAddress("glVertex3xOES"))(x, y);
}

inline void glVertex3xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLVERTEX3XVOESPROC>(wglGetProcAddress("glVertex3xvOES"))(coords);
}

inline void glVertex4xOES(GLfixed x, GLfixed y, GLfixed z) 
{
	reinterpret_cast<PFNGLVERTEX4XOESPROC>(wglGetProcAddress("glVertex4xOES"))(x, y, z);
}

inline void glVertex4xvOES(const GLfixed *coords) 
{
	reinterpret_cast<PFNGLVERTEX4XVOESPROC>(wglGetProcAddress("glVertex4xvOES"))(coords);
}

inline GLbitfield glQueryMatrixxOES(GLfixed *mantissa, GLint *exponent) 
{
	return reinterpret_cast<PFNGLQUERYMATRIXXOESPROC>(wglGetProcAddress("glQueryMatrixxOES"))(mantissa, exponent);
}

inline void glClearDepthfOES(GLclampf depth) 
{
	reinterpret_cast<PFNGLCLEARDEPTHFOESPROC>(wglGetProcAddress("glClearDepthfOES"))(depth);
}

inline void glClipPlanefOES(GLenum plane, const GLfloat *equation) 
{
	reinterpret_cast<PFNGLCLIPPLANEFOESPROC>(wglGetProcAddress("glClipPlanefOES"))(plane, equation);
}

inline void glDepthRangefOES(GLclampf n, GLclampf f) 
{
	reinterpret_cast<PFNGLDEPTHRANGEFOESPROC>(wglGetProcAddress("glDepthRangefOES"))(n, f);
}

inline void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) 
{
	reinterpret_cast<PFNGLFRUSTUMFOESPROC>(wglGetProcAddress("glFrustumfOES"))(l, r, b, t, n, f);
}

inline void glGetClipPlanefOES(GLenum plane, GLfloat *equation) 
{
	reinterpret_cast<PFNGLGETCLIPPLANEFOESPROC>(wglGetProcAddress("glGetClipPlanefOES"))(plane, equation);
}

inline void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) 
{
	reinterpret_cast<PFNGLORTHOFOESPROC>(wglGetProcAddress("glOrthofOES"))(l, r, b, t, n, f);
}

inline void glTbufferMask3DFX(GLuint mask) 
{
	reinterpret_cast<PFNGLTBUFFERMASK3DFXPROC>(wglGetProcAddress("glTbufferMask3DFX"))(mask);
}

inline void glDebugMessageEnableAMD(GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGEENABLEAMDPROC>(wglGetProcAddress("glDebugMessageEnableAMD"))(category, severity, count, ids, enabled);
}

inline void glDebugMessageInsertAMD(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGEINSERTAMDPROC>(wglGetProcAddress("glDebugMessageInsertAMD"))(category, severity, id, length, buf);
}

inline void glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback, void *userParam) 
{
	reinterpret_cast<PFNGLDEBUGMESSAGECALLBACKAMDPROC>(wglGetProcAddress("glDebugMessageCallbackAMD"))(callback, userParam);
}

inline GLuint glGetDebugMessageLogAMD(GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message) 
{
	return reinterpret_cast<PFNGLGETDEBUGMESSAGELOGAMDPROC>(wglGetProcAddress("glGetDebugMessageLogAMD"))(count, bufsize, categories, severities, ids, lengths, message);
}

inline void glBlendFuncIndexedAMD(GLuint buf, GLenum src, GLenum dst) 
{
	reinterpret_cast<PFNGLBLENDFUNCINDEXEDAMDPROC>(wglGetProcAddress("glBlendFuncIndexedAMD"))(buf, src, dst);
}

inline void glBlendFuncSeparateIndexedAMD(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) 
{
	reinterpret_cast<PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC>(wglGetProcAddress("glBlendFuncSeparateIndexedAMD"))(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}

inline void glBlendEquationIndexedAMD(GLuint buf, GLenum mode) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONINDEXEDAMDPROC>(wglGetProcAddress("glBlendEquationIndexedAMD"))(buf, mode);
}

inline void glBlendEquationSeparateIndexedAMD(GLuint buf, GLenum modeRGB, GLenum modeAlpha) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC>(wglGetProcAddress("glBlendEquationSeparateIndexedAMD"))(buf, modeRGB, modeAlpha);
}

inline void glUniform1i64NV(GLint location, GLint64EXT x) 
{
	reinterpret_cast<PFNGLUNIFORM1I64NVPROC>(wglGetProcAddress("glUniform1i64NV"))(location, x);
}

inline void glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y) 
{
	reinterpret_cast<PFNGLUNIFORM2I64NVPROC>(wglGetProcAddress("glUniform2i64NV"))(location, x, y);
}

inline void glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) 
{
	reinterpret_cast<PFNGLUNIFORM3I64NVPROC>(wglGetProcAddress("glUniform3i64NV"))(location, x, y, z);
}

inline void glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) 
{
	reinterpret_cast<PFNGLUNIFORM4I64NVPROC>(wglGetProcAddress("glUniform4i64NV"))(location, x, y, z, w);
}

inline void glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM1I64VNVPROC>(wglGetProcAddress("glUniform1i64vNV"))(location, count, value);
}

inline void glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM2I64VNVPROC>(wglGetProcAddress("glUniform2i64vNV"))(location, count, value);
}

inline void glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM3I64VNVPROC>(wglGetProcAddress("glUniform3i64vNV"))(location, count, value);
}

inline void glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM4I64VNVPROC>(wglGetProcAddress("glUniform4i64vNV"))(location, count, value);
}

inline void glUniform1ui64NV(GLint location, GLuint64EXT x) 
{
	reinterpret_cast<PFNGLUNIFORM1UI64NVPROC>(wglGetProcAddress("glUniform1ui64NV"))(location, x);
}

inline void glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y) 
{
	reinterpret_cast<PFNGLUNIFORM2UI64NVPROC>(wglGetProcAddress("glUniform2ui64NV"))(location, x, y);
}

inline void glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) 
{
	reinterpret_cast<PFNGLUNIFORM3UI64NVPROC>(wglGetProcAddress("glUniform3ui64NV"))(location, x, y, z);
}

inline void glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) 
{
	reinterpret_cast<PFNGLUNIFORM4UI64NVPROC>(wglGetProcAddress("glUniform4ui64NV"))(location, x, y, z, w);
}

inline void glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM1UI64VNVPROC>(wglGetProcAddress("glUniform1ui64vNV"))(location, count, value);
}

inline void glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM2UI64VNVPROC>(wglGetProcAddress("glUniform2ui64vNV"))(location, count, value);
}

inline void glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM3UI64VNVPROC>(wglGetProcAddress("glUniform3ui64vNV"))(location, count, value);
}

inline void glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORM4UI64VNVPROC>(wglGetProcAddress("glUniform4ui64vNV"))(location, count, value);
}

inline void glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMI64VNVPROC>(wglGetProcAddress("glGetUniformi64vNV"))(program, location, params);
}

inline void glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMUI64VNVPROC>(wglGetProcAddress("glGetUniformui64vNV"))(program, location, params);
}

inline void glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1I64NVPROC>(wglGetProcAddress("glProgramUniform1i64NV"))(program, location, x);
}

inline void glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2I64NVPROC>(wglGetProcAddress("glProgramUniform2i64NV"))(program, location, x, y);
}

inline void glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3I64NVPROC>(wglGetProcAddress("glProgramUniform3i64NV"))(program, location, x, y, z);
}

inline void glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4I64NVPROC>(wglGetProcAddress("glProgramUniform4i64NV"))(program, location, x, y, z, w);
}

inline void glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1I64VNVPROC>(wglGetProcAddress("glProgramUniform1i64vNV"))(program, location, count, value);
}

inline void glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2I64VNVPROC>(wglGetProcAddress("glProgramUniform2i64vNV"))(program, location, count, value);
}

inline void glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3I64VNVPROC>(wglGetProcAddress("glProgramUniform3i64vNV"))(program, location, count, value);
}

inline void glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4I64VNVPROC>(wglGetProcAddress("glProgramUniform4i64vNV"))(program, location, count, value);
}

inline void glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64NVPROC>(wglGetProcAddress("glProgramUniform1ui64NV"))(program, location, x);
}

inline void glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64NVPROC>(wglGetProcAddress("glProgramUniform2ui64NV"))(program, location, x, y);
}

inline void glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64NVPROC>(wglGetProcAddress("glProgramUniform3ui64NV"))(program, location, x, y, z);
}

inline void glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64NVPROC>(wglGetProcAddress("glProgramUniform4ui64NV"))(program, location, x, y, z, w);
}

inline void glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UI64VNVPROC>(wglGetProcAddress("glProgramUniform1ui64vNV"))(program, location, count, value);
}

inline void glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UI64VNVPROC>(wglGetProcAddress("glProgramUniform2ui64vNV"))(program, location, count, value);
}

inline void glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UI64VNVPROC>(wglGetProcAddress("glProgramUniform3ui64vNV"))(program, location, count, value);
}

inline void glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UI64VNVPROC>(wglGetProcAddress("glProgramUniform4ui64vNV"))(program, location, count, value);
}

inline void glVertexAttribParameteriAMD(GLuint index, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBPARAMETERIAMDPROC>(wglGetProcAddress("glVertexAttribParameteriAMD"))(index, pname, param);
}

inline void glMultiDrawArraysIndirectAMD(GLenum mode, const void *indirect, GLsizei primcount, GLsizei stride) 
{
	reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC>(wglGetProcAddress("glMultiDrawArraysIndirectAMD"))(mode, indirect, primcount, stride);
}

inline void glMultiDrawElementsIndirectAMD(GLenum mode, GLenum type, const void *indirect, GLsizei primcount, GLsizei stride) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC>(wglGetProcAddress("glMultiDrawElementsIndirectAMD"))(mode, type, indirect, primcount, stride);
}

inline void glGenNamesAMD(GLenum identifier, GLuint num, GLuint *names) 
{
	reinterpret_cast<PFNGLGENNAMESAMDPROC>(wglGetProcAddress("glGenNamesAMD"))(identifier, num, names);
}

inline void glDeleteNamesAMD(GLenum identifier, GLuint num, const GLuint *names) 
{
	reinterpret_cast<PFNGLDELETENAMESAMDPROC>(wglGetProcAddress("glDeleteNamesAMD"))(identifier, num, names);
}

inline GLboolean glIsNameAMD(GLenum identifier, GLuint name) 
{
	return reinterpret_cast<PFNGLISNAMEAMDPROC>(wglGetProcAddress("glIsNameAMD"))(identifier, name);
}

inline void glQueryObjectParameteruiAMD(GLenum target, GLuint id, GLenum pname, GLuint param) 
{
	reinterpret_cast<PFNGLQUERYOBJECTPARAMETERUIAMDPROC>(wglGetProcAddress("glQueryObjectParameteruiAMD"))(target, id, pname, param);
}

inline void glGetPerfMonitorGroupsAMD(GLint *numGroups, GLsizei groupsSize, GLuint *groups) 
{
	reinterpret_cast<PFNGLGETPERFMONITORGROUPSAMDPROC>(wglGetProcAddress("glGetPerfMonitorGroupsAMD"))(numGroups, groupsSize, groups);
}

inline void glGetPerfMonitorCountersAMD(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters) 
{
	reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSAMDPROC>(wglGetProcAddress("glGetPerfMonitorCountersAMD"))(group, numCounters, maxActiveCounters, counterSize, counters);
}

inline void glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString) 
{
	reinterpret_cast<PFNGLGETPERFMONITORGROUPSTRINGAMDPROC>(wglGetProcAddress("glGetPerfMonitorGroupStringAMD"))(group, bufSize, length, groupString);
}

inline void glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString) 
{
	reinterpret_cast<PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC>(wglGetProcAddress("glGetPerfMonitorCounterStringAMD"))(group, counter, bufSize, length, counterString);
}

inline void glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void *data) 
{
	reinterpret_cast<PFNGLGETPERFMONITORCOUNTERINFOAMDPROC>(wglGetProcAddress("glGetPerfMonitorCounterInfoAMD"))(group, counter, pname, data);
}

inline void glGenPerfMonitorsAMD(GLsizei n, GLuint *monitors) 
{
	reinterpret_cast<PFNGLGENPERFMONITORSAMDPROC>(wglGetProcAddress("glGenPerfMonitorsAMD"))(n, monitors);
}

inline void glDeletePerfMonitorsAMD(GLsizei n, GLuint *monitors) 
{
	reinterpret_cast<PFNGLDELETEPERFMONITORSAMDPROC>(wglGetProcAddress("glDeletePerfMonitorsAMD"))(n, monitors);
}

inline void glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList) 
{
	reinterpret_cast<PFNGLSELECTPERFMONITORCOUNTERSAMDPROC>(wglGetProcAddress("glSelectPerfMonitorCountersAMD"))(monitor, enable, group, numCounters, counterList);
}

inline void glBeginPerfMonitorAMD(GLuint monitor) 
{
	reinterpret_cast<PFNGLBEGINPERFMONITORAMDPROC>(wglGetProcAddress("glBeginPerfMonitorAMD"))(monitor);
}

inline void glEndPerfMonitorAMD(GLuint monitor) 
{
	reinterpret_cast<PFNGLENDPERFMONITORAMDPROC>(wglGetProcAddress("glEndPerfMonitorAMD"))(monitor);
}

inline void glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten) 
{
	reinterpret_cast<PFNGLGETPERFMONITORCOUNTERDATAAMDPROC>(wglGetProcAddress("glGetPerfMonitorCounterDataAMD"))(monitor, pname, dataSize, data, bytesWritten);
}

inline void glSetMultisamplefvAMD(GLenum pname, GLuint index, const GLfloat *val) 
{
	reinterpret_cast<PFNGLSETMULTISAMPLEFVAMDPROC>(wglGetProcAddress("glSetMultisamplefvAMD"))(pname, index, val);
}

inline void glTexStorageSparseAMD(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) 
{
	reinterpret_cast<PFNGLTEXSTORAGESPARSEAMDPROC>(wglGetProcAddress("glTexStorageSparseAMD"))(target, internalFormat, width, height, depth, layers, flags);
}

inline void glTextureStorageSparseAMD(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGESPARSEAMDPROC>(wglGetProcAddress("glTextureStorageSparseAMD"))(texture, target, internalFormat, width, height, depth, layers, flags);
}

inline void glStencilOpValueAMD(GLenum face, GLuint value) 
{
	reinterpret_cast<PFNGLSTENCILOPVALUEAMDPROC>(wglGetProcAddress("glStencilOpValueAMD"))(face, value);
}

inline void glTessellationFactorAMD(GLfloat factor) 
{
	reinterpret_cast<PFNGLTESSELLATIONFACTORAMDPROC>(wglGetProcAddress("glTessellationFactorAMD"))(factor);
}

inline void glTessellationModeAMD(GLenum mode) 
{
	reinterpret_cast<PFNGLTESSELLATIONMODEAMDPROC>(wglGetProcAddress("glTessellationModeAMD"))(mode);
}

inline void glElementPointerAPPLE(GLenum type, const void *pointer) 
{
	reinterpret_cast<PFNGLELEMENTPOINTERAPPLEPROC>(wglGetProcAddress("glElementPointerAPPLE"))(type, pointer);
}

inline void glDrawElementArrayAPPLE(GLenum mode, GLint first, GLsizei count) 
{
	reinterpret_cast<PFNGLDRAWELEMENTARRAYAPPLEPROC>(wglGetProcAddress("glDrawElementArrayAPPLE"))(mode, first, count);
}

inline void glDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count) 
{
	reinterpret_cast<PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC>(wglGetProcAddress("glDrawRangeElementArrayAPPLE"))(mode, start, end, first, count);
}

inline void glMultiDrawElementArrayAPPLE(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC>(wglGetProcAddress("glMultiDrawElementArrayAPPLE"))(mode, first, count, primcount);
}

inline void glMultiDrawRangeElementArrayAPPLE(GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount) 
{
	reinterpret_cast<PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC>(wglGetProcAddress("glMultiDrawRangeElementArrayAPPLE"))(mode, start, end, first, count, primcount);
}

inline void glGenFencesAPPLE(GLsizei n, GLuint *fences) 
{
	reinterpret_cast<PFNGLGENFENCESAPPLEPROC>(wglGetProcAddress("glGenFencesAPPLE"))(n, fences);
}

inline void glDeleteFencesAPPLE(GLsizei n, const GLuint *fences) 
{
	reinterpret_cast<PFNGLDELETEFENCESAPPLEPROC>(wglGetProcAddress("glDeleteFencesAPPLE"))(n, fences);
}

inline void glSetFenceAPPLE(GLuint fence) 
{
	reinterpret_cast<PFNGLSETFENCEAPPLEPROC>(wglGetProcAddress("glSetFenceAPPLE"))(fence);
}

inline GLboolean glIsFenceAPPLE(GLuint fence) 
{
	return reinterpret_cast<PFNGLISFENCEAPPLEPROC>(wglGetProcAddress("glIsFenceAPPLE"))(fence);
}

inline GLboolean glTestFenceAPPLE(GLuint fence) 
{
	return reinterpret_cast<PFNGLTESTFENCEAPPLEPROC>(wglGetProcAddress("glTestFenceAPPLE"))(fence);
}

inline void glFinishFenceAPPLE(GLuint fence) 
{
	reinterpret_cast<PFNGLFINISHFENCEAPPLEPROC>(wglGetProcAddress("glFinishFenceAPPLE"))(fence);
}

inline GLboolean glTestObjectAPPLE(GLenum object, GLuint name) 
{
	return reinterpret_cast<PFNGLTESTOBJECTAPPLEPROC>(wglGetProcAddress("glTestObjectAPPLE"))(object, name);
}

inline void glFinishObjectAPPLE(GLenum object, GLint name) 
{
	reinterpret_cast<PFNGLFINISHOBJECTAPPLEPROC>(wglGetProcAddress("glFinishObjectAPPLE"))(object, name);
}

inline void glBufferParameteriAPPLE(GLenum target, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLBUFFERPARAMETERIAPPLEPROC>(wglGetProcAddress("glBufferParameteriAPPLE"))(target, pname, param);
}

inline void glFlushMappedBufferRangeAPPLE(GLenum target, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC>(wglGetProcAddress("glFlushMappedBufferRangeAPPLE"))(target, offset, size);
}

inline GLenum glObjectPurgeableAPPLE(GLenum objectType, GLuint name, GLenum option) 
{
	return reinterpret_cast<PFNGLOBJECTPURGEABLEAPPLEPROC>(wglGetProcAddress("glObjectPurgeableAPPLE"))(objectType, name, option);
}

inline GLenum glObjectUnpurgeableAPPLE(GLenum objectType, GLuint name, GLenum option) 
{
	return reinterpret_cast<PFNGLOBJECTUNPURGEABLEAPPLEPROC>(wglGetProcAddress("glObjectUnpurgeableAPPLE"))(objectType, name, option);
}

inline void glGetObjectParameterivAPPLE(GLenum objectType, GLuint name, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETOBJECTPARAMETERIVAPPLEPROC>(wglGetProcAddress("glGetObjectParameterivAPPLE"))(objectType, name, pname, params);
}

inline void glTextureRangeAPPLE(GLenum target, GLsizei length, const void *pointer) 
{
	reinterpret_cast<PFNGLTEXTURERANGEAPPLEPROC>(wglGetProcAddress("glTextureRangeAPPLE"))(target, length, pointer);
}

inline void glGetTexParameterPointervAPPLE(GLenum target, GLenum pname, void **params) 
{
	reinterpret_cast<PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC>(wglGetProcAddress("glGetTexParameterPointervAPPLE"))(target, pname, params);
}

inline void glBindVertexArrayAPPLE(GLuint array) 
{
	reinterpret_cast<PFNGLBINDVERTEXARRAYAPPLEPROC>(wglGetProcAddress("glBindVertexArrayAPPLE"))(array);
}

inline void glDeleteVertexArraysAPPLE(GLsizei n, const GLuint *arrays) 
{
	reinterpret_cast<PFNGLDELETEVERTEXARRAYSAPPLEPROC>(wglGetProcAddress("glDeleteVertexArraysAPPLE"))(n, arrays);
}

inline void glGenVertexArraysAPPLE(GLsizei n, GLuint *arrays) 
{
	reinterpret_cast<PFNGLGENVERTEXARRAYSAPPLEPROC>(wglGetProcAddress("glGenVertexArraysAPPLE"))(n, arrays);
}

inline GLboolean glIsVertexArrayAPPLE(GLuint array) 
{
	return reinterpret_cast<PFNGLISVERTEXARRAYAPPLEPROC>(wglGetProcAddress("glIsVertexArrayAPPLE"))(array);
}

inline void glVertexArrayRangeAPPLE(GLsizei length, void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXARRAYRANGEAPPLEPROC>(wglGetProcAddress("glVertexArrayRangeAPPLE"))(length, pointer);
}

inline void glFlushVertexArrayRangeAPPLE(GLsizei length, void *pointer) 
{
	reinterpret_cast<PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC>(wglGetProcAddress("glFlushVertexArrayRangeAPPLE"))(length, pointer);
}

inline void glVertexArrayParameteriAPPLE(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLVERTEXARRAYPARAMETERIAPPLEPROC>(wglGetProcAddress("glVertexArrayParameteriAPPLE"))(pname, param);
}

inline void glEnableVertexAttribAPPLE(GLuint index, GLenum pname) 
{
	reinterpret_cast<PFNGLENABLEVERTEXATTRIBAPPLEPROC>(wglGetProcAddress("glEnableVertexAttribAPPLE"))(index, pname);
}

inline void glDisableVertexAttribAPPLE(GLuint index, GLenum pname) 
{
	reinterpret_cast<PFNGLDISABLEVERTEXATTRIBAPPLEPROC>(wglGetProcAddress("glDisableVertexAttribAPPLE"))(index, pname);
}

inline GLboolean glIsVertexAttribEnabledAPPLE(GLuint index, GLenum pname) 
{
	return reinterpret_cast<PFNGLISVERTEXATTRIBENABLEDAPPLEPROC>(wglGetProcAddress("glIsVertexAttribEnabledAPPLE"))(index, pname);
}

inline void glMapVertexAttrib1dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points) 
{
	reinterpret_cast<PFNGLMAPVERTEXATTRIB1DAPPLEPROC>(wglGetProcAddress("glMapVertexAttrib1dAPPLE"))(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib1fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points) 
{
	reinterpret_cast<PFNGLMAPVERTEXATTRIB1FAPPLEPROC>(wglGetProcAddress("glMapVertexAttrib1fAPPLE"))(index, size, u1, u2, stride, order, points);
}

inline void glMapVertexAttrib2dAPPLE(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points) 
{
	reinterpret_cast<PFNGLMAPVERTEXATTRIB2DAPPLEPROC>(wglGetProcAddress("glMapVertexAttrib2dAPPLE"))(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapVertexAttrib2fAPPLE(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points) 
{
	reinterpret_cast<PFNGLMAPVERTEXATTRIB2FAPPLEPROC>(wglGetProcAddress("glMapVertexAttrib2fAPPLE"))(index, size, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glDrawBuffersATI(GLsizei n, const GLenum *bufs) 
{
	reinterpret_cast<PFNGLDRAWBUFFERSATIPROC>(wglGetProcAddress("glDrawBuffersATI"))(n, bufs);
}

inline void glElementPointerATI(GLenum type, const void *pointer) 
{
	reinterpret_cast<PFNGLELEMENTPOINTERATIPROC>(wglGetProcAddress("glElementPointerATI"))(type, pointer);
}

inline void glDrawElementArrayATI(GLenum mode, GLsizei count) 
{
	reinterpret_cast<PFNGLDRAWELEMENTARRAYATIPROC>(wglGetProcAddress("glDrawElementArrayATI"))(mode, count);
}

inline void glDrawRangeElementArrayATI(GLenum mode, GLuint start, GLuint end, GLsizei count) 
{
	reinterpret_cast<PFNGLDRAWRANGEELEMENTARRAYATIPROC>(wglGetProcAddress("glDrawRangeElementArrayATI"))(mode, start, end, count);
}

inline void glTexBumpParameterivATI(GLenum pname, const GLint *param) 
{
	reinterpret_cast<PFNGLTEXBUMPPARAMETERIVATIPROC>(wglGetProcAddress("glTexBumpParameterivATI"))(pname, param);
}

inline void glTexBumpParameterfvATI(GLenum pname, const GLfloat *param) 
{
	reinterpret_cast<PFNGLTEXBUMPPARAMETERFVATIPROC>(wglGetProcAddress("glTexBumpParameterfvATI"))(pname, param);
}

inline void glGetTexBumpParameterivATI(GLenum pname, GLint *param) 
{
	reinterpret_cast<PFNGLGETTEXBUMPPARAMETERIVATIPROC>(wglGetProcAddress("glGetTexBumpParameterivATI"))(pname, param);
}

inline void glGetTexBumpParameterfvATI(GLenum pname, GLfloat *param) 
{
	reinterpret_cast<PFNGLGETTEXBUMPPARAMETERFVATIPROC>(wglGetProcAddress("glGetTexBumpParameterfvATI"))(pname, param);
}

inline GLuint glGenFragmentShadersATI(GLuint range) 
{
	return reinterpret_cast<PFNGLGENFRAGMENTSHADERSATIPROC>(wglGetProcAddress("glGenFragmentShadersATI"))(range);
}

inline void glBindFragmentShaderATI(GLuint id) 
{
	reinterpret_cast<PFNGLBINDFRAGMENTSHADERATIPROC>(wglGetProcAddress("glBindFragmentShaderATI"))(id);
}

inline void glDeleteFragmentShaderATI(GLuint id) 
{
	reinterpret_cast<PFNGLDELETEFRAGMENTSHADERATIPROC>(wglGetProcAddress("glDeleteFragmentShaderATI"))(id);
}

inline void glBeginFragmentShaderATI(void) 
{
	reinterpret_cast<PFNGLBEGINFRAGMENTSHADERATIPROC>(wglGetProcAddress("glBeginFragmentShaderATI"))();
}

inline void glEndFragmentShaderATI(void) 
{
	reinterpret_cast<PFNGLENDFRAGMENTSHADERATIPROC>(wglGetProcAddress("glEndFragmentShaderATI"))();
}

inline void glPassTexCoordATI(GLuint dst, GLuint coord, GLenum swizzle) 
{
	reinterpret_cast<PFNGLPASSTEXCOORDATIPROC>(wglGetProcAddress("glPassTexCoordATI"))(dst, coord, swizzle);
}

inline void glSampleMapATI(GLuint dst, GLuint interp, GLenum swizzle) 
{
	reinterpret_cast<PFNGLSAMPLEMAPATIPROC>(wglGetProcAddress("glSampleMapATI"))(dst, interp, swizzle);
}

inline void glColorFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) 
{
	reinterpret_cast<PFNGLCOLORFRAGMENTOP1ATIPROC>(wglGetProcAddress("glColorFragmentOp1ATI"))(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glColorFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) 
{
	reinterpret_cast<PFNGLCOLORFRAGMENTOP2ATIPROC>(wglGetProcAddress("glColorFragmentOp2ATI"))(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glColorFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) 
{
	reinterpret_cast<PFNGLCOLORFRAGMENTOP3ATIPROC>(wglGetProcAddress("glColorFragmentOp3ATI"))(op, dst, dstMask, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glAlphaFragmentOp1ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) 
{
	reinterpret_cast<PFNGLALPHAFRAGMENTOP1ATIPROC>(wglGetProcAddress("glAlphaFragmentOp1ATI"))(op, dst, dstMod, arg1, arg1Rep, arg1Mod);
}

inline void glAlphaFragmentOp2ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) 
{
	reinterpret_cast<PFNGLALPHAFRAGMENTOP2ATIPROC>(wglGetProcAddress("glAlphaFragmentOp2ATI"))(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod);
}

inline void glAlphaFragmentOp3ATI(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) 
{
	reinterpret_cast<PFNGLALPHAFRAGMENTOP3ATIPROC>(wglGetProcAddress("glAlphaFragmentOp3ATI"))(op, dst, dstMod, arg1, arg1Rep, arg1Mod, arg2, arg2Rep, arg2Mod, arg3, arg3Rep, arg3Mod);
}

inline void glSetFragmentShaderConstantATI(GLuint dst, const GLfloat *value) 
{
	reinterpret_cast<PFNGLSETFRAGMENTSHADERCONSTANTATIPROC>(wglGetProcAddress("glSetFragmentShaderConstantATI"))(dst, value);
}

inline void glUnmapObjectBufferATI(GLuint buffer) 
{
	reinterpret_cast<PFNGLUNMAPOBJECTBUFFERATIPROC>(wglGetProcAddress("glUnmapObjectBufferATI"))(buffer);
}

inline void glPNTrianglesiATI(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLPNTRIANGLESIATIPROC>(wglGetProcAddress("glPNTrianglesiATI"))(pname, param);
}

inline void glPNTrianglesfATI(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLPNTRIANGLESFATIPROC>(wglGetProcAddress("glPNTrianglesfATI"))(pname, param);
}

inline void glStencilOpSeparateATI(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) 
{
	reinterpret_cast<PFNGLSTENCILOPSEPARATEATIPROC>(wglGetProcAddress("glStencilOpSeparateATI"))(face, sfail, dpfail, dppass);
}

inline void glStencilFuncSeparateATI(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask) 
{
	reinterpret_cast<PFNGLSTENCILFUNCSEPARATEATIPROC>(wglGetProcAddress("glStencilFuncSeparateATI"))(frontfunc, backfunc, ref, mask);
}

inline GLuint glNewObjectBufferATI(GLsizei size, const void *pointer, GLenum usage) 
{
	return reinterpret_cast<PFNGLNEWOBJECTBUFFERATIPROC>(wglGetProcAddress("glNewObjectBufferATI"))(size, pointer, usage);
}

inline GLboolean glIsObjectBufferATI(GLuint buffer) 
{
	return reinterpret_cast<PFNGLISOBJECTBUFFERATIPROC>(wglGetProcAddress("glIsObjectBufferATI"))(buffer);
}

inline void glUpdateObjectBufferATI(GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve) 
{
	reinterpret_cast<PFNGLUPDATEOBJECTBUFFERATIPROC>(wglGetProcAddress("glUpdateObjectBufferATI"))(buffer, offset, size, pointer, preserve);
}

inline void glGetObjectBufferfvATI(GLuint buffer, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETOBJECTBUFFERFVATIPROC>(wglGetProcAddress("glGetObjectBufferfvATI"))(buffer, pname, params);
}

inline void glGetObjectBufferivATI(GLuint buffer, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETOBJECTBUFFERIVATIPROC>(wglGetProcAddress("glGetObjectBufferivATI"))(buffer, pname, params);
}

inline void glFreeObjectBufferATI(GLuint buffer) 
{
	reinterpret_cast<PFNGLFREEOBJECTBUFFERATIPROC>(wglGetProcAddress("glFreeObjectBufferATI"))(buffer);
}

inline void glArrayObjectATI(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) 
{
	reinterpret_cast<PFNGLARRAYOBJECTATIPROC>(wglGetProcAddress("glArrayObjectATI"))(array, size, type, stride, buffer, offset);
}

inline void glGetArrayObjectfvATI(GLenum array, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETARRAYOBJECTFVATIPROC>(wglGetProcAddress("glGetArrayObjectfvATI"))(array, pname, params);
}

inline void glGetArrayObjectivATI(GLenum array, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETARRAYOBJECTIVATIPROC>(wglGetProcAddress("glGetArrayObjectivATI"))(array, pname, params);
}

inline void glVariantArrayObjectATI(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) 
{
	reinterpret_cast<PFNGLVARIANTARRAYOBJECTATIPROC>(wglGetProcAddress("glVariantArrayObjectATI"))(id, type, stride, buffer, offset);
}

inline void glGetVariantArrayObjectfvATI(GLuint id, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETVARIANTARRAYOBJECTFVATIPROC>(wglGetProcAddress("glGetVariantArrayObjectfvATI"))(id, pname, params);
}

inline void glGetVariantArrayObjectivATI(GLuint id, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVARIANTARRAYOBJECTIVATIPROC>(wglGetProcAddress("glGetVariantArrayObjectivATI"))(id, pname, params);
}

inline void glVertexAttribArrayObjectATI(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBARRAYOBJECTATIPROC>(wglGetProcAddress("glVertexAttribArrayObjectATI"))(index, size, type, normalized, stride, buffer, offset);
}

inline void glGetVertexAttribArrayObjectfvATI(GLuint index, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC>(wglGetProcAddress("glGetVertexAttribArrayObjectfvATI"))(index, pname, params);
}

inline void glGetVertexAttribArrayObjectivATI(GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC>(wglGetProcAddress("glGetVertexAttribArrayObjectivATI"))(index, pname, params);
}

inline void glVertexStream1sATI(GLenum stream, GLshort x) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1SATIPROC>(wglGetProcAddress("glVertexStream1sATI"))(stream, x);
}

inline void glVertexStream1svATI(GLenum stream, const GLshort *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1SVATIPROC>(wglGetProcAddress("glVertexStream1svATI"))(stream, coords);
}

inline void glVertexStream1iATI(GLenum stream, GLint x) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1IATIPROC>(wglGetProcAddress("glVertexStream1iATI"))(stream, x);
}

inline void glVertexStream1ivATI(GLenum stream, const GLint *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1IVATIPROC>(wglGetProcAddress("glVertexStream1ivATI"))(stream, coords);
}

inline void glVertexStream1fATI(GLenum stream, GLfloat x) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1FATIPROC>(wglGetProcAddress("glVertexStream1fATI"))(stream, x);
}

inline void glVertexStream1fvATI(GLenum stream, const GLfloat *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1FVATIPROC>(wglGetProcAddress("glVertexStream1fvATI"))(stream, coords);
}

inline void glVertexStream1dATI(GLenum stream, GLdouble x) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1DATIPROC>(wglGetProcAddress("glVertexStream1dATI"))(stream, x);
}

inline void glVertexStream1dvATI(GLenum stream, const GLdouble *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM1DVATIPROC>(wglGetProcAddress("glVertexStream1dvATI"))(stream, coords);
}

inline void glVertexStream2sATI(GLenum stream, GLshort x, GLshort y) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2SATIPROC>(wglGetProcAddress("glVertexStream2sATI"))(stream, x, y);
}

inline void glVertexStream2svATI(GLenum stream, const GLshort *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2SVATIPROC>(wglGetProcAddress("glVertexStream2svATI"))(stream, coords);
}

inline void glVertexStream2iATI(GLenum stream, GLint x, GLint y) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2IATIPROC>(wglGetProcAddress("glVertexStream2iATI"))(stream, x, y);
}

inline void glVertexStream2ivATI(GLenum stream, const GLint *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2IVATIPROC>(wglGetProcAddress("glVertexStream2ivATI"))(stream, coords);
}

inline void glVertexStream2fATI(GLenum stream, GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2FATIPROC>(wglGetProcAddress("glVertexStream2fATI"))(stream, x, y);
}

inline void glVertexStream2fvATI(GLenum stream, const GLfloat *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2FVATIPROC>(wglGetProcAddress("glVertexStream2fvATI"))(stream, coords);
}

inline void glVertexStream2dATI(GLenum stream, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2DATIPROC>(wglGetProcAddress("glVertexStream2dATI"))(stream, x, y);
}

inline void glVertexStream2dvATI(GLenum stream, const GLdouble *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM2DVATIPROC>(wglGetProcAddress("glVertexStream2dvATI"))(stream, coords);
}

inline void glVertexStream3sATI(GLenum stream, GLshort x, GLshort y, GLshort z) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3SATIPROC>(wglGetProcAddress("glVertexStream3sATI"))(stream, x, y, z);
}

inline void glVertexStream3svATI(GLenum stream, const GLshort *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3SVATIPROC>(wglGetProcAddress("glVertexStream3svATI"))(stream, coords);
}

inline void glVertexStream3iATI(GLenum stream, GLint x, GLint y, GLint z) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3IATIPROC>(wglGetProcAddress("glVertexStream3iATI"))(stream, x, y, z);
}

inline void glVertexStream3ivATI(GLenum stream, const GLint *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3IVATIPROC>(wglGetProcAddress("glVertexStream3ivATI"))(stream, coords);
}

inline void glVertexStream3fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3FATIPROC>(wglGetProcAddress("glVertexStream3fATI"))(stream, x, y, z);
}

inline void glVertexStream3fvATI(GLenum stream, const GLfloat *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3FVATIPROC>(wglGetProcAddress("glVertexStream3fvATI"))(stream, coords);
}

inline void glVertexStream3dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3DATIPROC>(wglGetProcAddress("glVertexStream3dATI"))(stream, x, y, z);
}

inline void glVertexStream3dvATI(GLenum stream, const GLdouble *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM3DVATIPROC>(wglGetProcAddress("glVertexStream3dvATI"))(stream, coords);
}

inline void glVertexStream4sATI(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4SATIPROC>(wglGetProcAddress("glVertexStream4sATI"))(stream, x, y, z, w);
}

inline void glVertexStream4svATI(GLenum stream, const GLshort *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4SVATIPROC>(wglGetProcAddress("glVertexStream4svATI"))(stream, coords);
}

inline void glVertexStream4iATI(GLenum stream, GLint x, GLint y, GLint z, GLint w) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4IATIPROC>(wglGetProcAddress("glVertexStream4iATI"))(stream, x, y, z, w);
}

inline void glVertexStream4ivATI(GLenum stream, const GLint *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4IVATIPROC>(wglGetProcAddress("glVertexStream4ivATI"))(stream, coords);
}

inline void glVertexStream4fATI(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4FATIPROC>(wglGetProcAddress("glVertexStream4fATI"))(stream, x, y, z, w);
}

inline void glVertexStream4fvATI(GLenum stream, const GLfloat *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4FVATIPROC>(wglGetProcAddress("glVertexStream4fvATI"))(stream, coords);
}

inline void glVertexStream4dATI(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4DATIPROC>(wglGetProcAddress("glVertexStream4dATI"))(stream, x, y, z, w);
}

inline void glVertexStream4dvATI(GLenum stream, const GLdouble *coords) 
{
	reinterpret_cast<PFNGLVERTEXSTREAM4DVATIPROC>(wglGetProcAddress("glVertexStream4dvATI"))(stream, coords);
}

inline void glNormalStream3bATI(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3BATIPROC>(wglGetProcAddress("glNormalStream3bATI"))(stream, nx, ny, nz);
}

inline void glNormalStream3bvATI(GLenum stream, const GLbyte *coords) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3BVATIPROC>(wglGetProcAddress("glNormalStream3bvATI"))(stream, coords);
}

inline void glNormalStream3sATI(GLenum stream, GLshort nx, GLshort ny, GLshort nz) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3SATIPROC>(wglGetProcAddress("glNormalStream3sATI"))(stream, nx, ny, nz);
}

inline void glNormalStream3svATI(GLenum stream, const GLshort *coords) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3SVATIPROC>(wglGetProcAddress("glNormalStream3svATI"))(stream, coords);
}

inline void glNormalStream3iATI(GLenum stream, GLint nx, GLint ny, GLint nz) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3IATIPROC>(wglGetProcAddress("glNormalStream3iATI"))(stream, nx, ny, nz);
}

inline void glNormalStream3ivATI(GLenum stream, const GLint *coords) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3IVATIPROC>(wglGetProcAddress("glNormalStream3ivATI"))(stream, coords);
}

inline void glNormalStream3fATI(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3FATIPROC>(wglGetProcAddress("glNormalStream3fATI"))(stream, nx, ny, nz);
}

inline void glNormalStream3fvATI(GLenum stream, const GLfloat *coords) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3FVATIPROC>(wglGetProcAddress("glNormalStream3fvATI"))(stream, coords);
}

inline void glNormalStream3dATI(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3DATIPROC>(wglGetProcAddress("glNormalStream3dATI"))(stream, nx, ny, nz);
}

inline void glNormalStream3dvATI(GLenum stream, const GLdouble *coords) 
{
	reinterpret_cast<PFNGLNORMALSTREAM3DVATIPROC>(wglGetProcAddress("glNormalStream3dvATI"))(stream, coords);
}

inline void glClientActiveVertexStreamATI(GLenum stream) 
{
	reinterpret_cast<PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC>(wglGetProcAddress("glClientActiveVertexStreamATI"))(stream);
}

inline void glVertexBlendEnviATI(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLVERTEXBLENDENVIATIPROC>(wglGetProcAddress("glVertexBlendEnviATI"))(pname, param);
}

inline void glVertexBlendEnvfATI(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLVERTEXBLENDENVFATIPROC>(wglGetProcAddress("glVertexBlendEnvfATI"))(pname, param);
}

inline void glUniformBufferEXT(GLuint program, GLint location, GLuint buffer) 
{
	reinterpret_cast<PFNGLUNIFORMBUFFEREXTPROC>(wglGetProcAddress("glUniformBufferEXT"))(program, location, buffer);
}

inline GLint glGetUniformBufferSizeEXT(GLuint program, GLint location) 
{
	return reinterpret_cast<PFNGLGETUNIFORMBUFFERSIZEEXTPROC>(wglGetProcAddress("glGetUniformBufferSizeEXT"))(program, location);
}

inline GLintptr glGetUniformOffsetEXT(GLuint program, GLint location) 
{
	return reinterpret_cast<PFNGLGETUNIFORMOFFSETEXTPROC>(wglGetProcAddress("glGetUniformOffsetEXT"))(program, location);
}

inline void glBlendColorEXT(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) 
{
	reinterpret_cast<PFNGLBLENDCOLOREXTPROC>(wglGetProcAddress("glBlendColorEXT"))(red, green, blue, alpha);
}

inline void glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONSEPARATEEXTPROC>(wglGetProcAddress("glBlendEquationSeparateEXT"))(modeRGB, modeAlpha);
}

inline void glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) 
{
	reinterpret_cast<PFNGLBLENDFUNCSEPARATEEXTPROC>(wglGetProcAddress("glBlendFuncSeparateEXT"))(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glBlendEquationEXT(GLenum mode) 
{
	reinterpret_cast<PFNGLBLENDEQUATIONEXTPROC>(wglGetProcAddress("glBlendEquationEXT"))(mode);
}

inline void glColorSubTableEXT(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCOLORSUBTABLEEXTPROC>(wglGetProcAddress("glColorSubTableEXT"))(target, start, count, format, type, data);
}

inline void glCopyColorSubTableEXT(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYCOLORSUBTABLEEXTPROC>(wglGetProcAddress("glCopyColorSubTableEXT"))(target, start, x, y, width);
}

inline void glLockArraysEXT(GLint first, GLsizei count) 
{
	reinterpret_cast<PFNGLLOCKARRAYSEXTPROC>(wglGetProcAddress("glLockArraysEXT"))(first, count);
}

inline void glUnlockArraysEXT(void) 
{
	reinterpret_cast<PFNGLUNLOCKARRAYSEXTPROC>(wglGetProcAddress("glUnlockArraysEXT"))();
}

inline void glConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image) 
{
	reinterpret_cast<PFNGLCONVOLUTIONFILTER1DEXTPROC>(wglGetProcAddress("glConvolutionFilter1DEXT"))(target, internalformat, width, format, type, image);
}

inline void glConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image) 
{
	reinterpret_cast<PFNGLCONVOLUTIONFILTER2DEXTPROC>(wglGetProcAddress("glConvolutionFilter2DEXT"))(target, internalformat, width, height, format, type, image);
}

inline void glConvolutionParameterfEXT(GLenum target, GLenum pname, GLfloat params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFEXTPROC>(wglGetProcAddress("glConvolutionParameterfEXT"))(target, pname, params);
}

inline void glConvolutionParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERFVEXTPROC>(wglGetProcAddress("glConvolutionParameterfvEXT"))(target, pname, params);
}

inline void glConvolutionParameteriEXT(GLenum target, GLenum pname, GLint params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIEXTPROC>(wglGetProcAddress("glConvolutionParameteriEXT"))(target, pname, params);
}

inline void glConvolutionParameterivEXT(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLCONVOLUTIONPARAMETERIVEXTPROC>(wglGetProcAddress("glConvolutionParameterivEXT"))(target, pname, params);
}

inline void glCopyConvolutionFilter1DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC>(wglGetProcAddress("glCopyConvolutionFilter1DEXT"))(target, internalformat, x, y, width);
}

inline void glCopyConvolutionFilter2DEXT(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC>(wglGetProcAddress("glCopyConvolutionFilter2DEXT"))(target, internalformat, x, y, width, height);
}

inline void glGetConvolutionFilterEXT(GLenum target, GLenum format, GLenum type, void *image) 
{
	reinterpret_cast<PFNGLGETCONVOLUTIONFILTEREXTPROC>(wglGetProcAddress("glGetConvolutionFilterEXT"))(target, format, type, image);
}

inline void glGetConvolutionParameterfvEXT(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC>(wglGetProcAddress("glGetConvolutionParameterfvEXT"))(target, pname, params);
}

inline void glGetConvolutionParameterivEXT(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC>(wglGetProcAddress("glGetConvolutionParameterivEXT"))(target, pname, params);
}

inline void glGetSeparableFilterEXT(GLenum target, GLenum format, GLenum type, void *row, void *column, void *span) 
{
	reinterpret_cast<PFNGLGETSEPARABLEFILTEREXTPROC>(wglGetProcAddress("glGetSeparableFilterEXT"))(target, format, type, row, column, span);
}

inline void glSeparableFilter2DEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column) 
{
	reinterpret_cast<PFNGLSEPARABLEFILTER2DEXTPROC>(wglGetProcAddress("glSeparableFilter2DEXT"))(target, internalformat, width, height, format, type, row, column);
}

inline void glTangent3bEXT(GLbyte tx, GLbyte ty, GLbyte tz) 
{
	reinterpret_cast<PFNGLTANGENT3BEXTPROC>(wglGetProcAddress("glTangent3bEXT"))(tx, ty, tz);
}

inline void glTangent3bvEXT(const GLbyte *v) 
{
	reinterpret_cast<PFNGLTANGENT3BVEXTPROC>(wglGetProcAddress("glTangent3bvEXT"))(v);
}

inline void glTangent3dEXT(GLdouble tx, GLdouble ty, GLdouble tz) 
{
	reinterpret_cast<PFNGLTANGENT3DEXTPROC>(wglGetProcAddress("glTangent3dEXT"))(tx, ty, tz);
}

inline void glTangent3dvEXT(const GLdouble *v) 
{
	reinterpret_cast<PFNGLTANGENT3DVEXTPROC>(wglGetProcAddress("glTangent3dvEXT"))(v);
}

inline void glTangent3fEXT(GLfloat tx, GLfloat ty, GLfloat tz) 
{
	reinterpret_cast<PFNGLTANGENT3FEXTPROC>(wglGetProcAddress("glTangent3fEXT"))(tx, ty, tz);
}

inline void glTangent3fvEXT(const GLfloat *v) 
{
	reinterpret_cast<PFNGLTANGENT3FVEXTPROC>(wglGetProcAddress("glTangent3fvEXT"))(v);
}

inline void glTangent3iEXT(GLint tx, GLint ty, GLint tz) 
{
	reinterpret_cast<PFNGLTANGENT3IEXTPROC>(wglGetProcAddress("glTangent3iEXT"))(tx, ty, tz);
}

inline void glTangent3ivEXT(const GLint *v) 
{
	reinterpret_cast<PFNGLTANGENT3IVEXTPROC>(wglGetProcAddress("glTangent3ivEXT"))(v);
}

inline void glTangent3sEXT(GLshort tx, GLshort ty, GLshort tz) 
{
	reinterpret_cast<PFNGLTANGENT3SEXTPROC>(wglGetProcAddress("glTangent3sEXT"))(tx, ty, tz);
}

inline void glTangent3svEXT(const GLshort *v) 
{
	reinterpret_cast<PFNGLTANGENT3SVEXTPROC>(wglGetProcAddress("glTangent3svEXT"))(v);
}

inline void glBinormal3bEXT(GLbyte bx, GLbyte by, GLbyte bz) 
{
	reinterpret_cast<PFNGLBINORMAL3BEXTPROC>(wglGetProcAddress("glBinormal3bEXT"))(bx, by, bz);
}

inline void glBinormal3bvEXT(const GLbyte *v) 
{
	reinterpret_cast<PFNGLBINORMAL3BVEXTPROC>(wglGetProcAddress("glBinormal3bvEXT"))(v);
}

inline void glBinormal3dEXT(GLdouble bx, GLdouble by, GLdouble bz) 
{
	reinterpret_cast<PFNGLBINORMAL3DEXTPROC>(wglGetProcAddress("glBinormal3dEXT"))(bx, by, bz);
}

inline void glBinormal3dvEXT(const GLdouble *v) 
{
	reinterpret_cast<PFNGLBINORMAL3DVEXTPROC>(wglGetProcAddress("glBinormal3dvEXT"))(v);
}

inline void glBinormal3fEXT(GLfloat bx, GLfloat by, GLfloat bz) 
{
	reinterpret_cast<PFNGLBINORMAL3FEXTPROC>(wglGetProcAddress("glBinormal3fEXT"))(bx, by, bz);
}

inline void glBinormal3fvEXT(const GLfloat *v) 
{
	reinterpret_cast<PFNGLBINORMAL3FVEXTPROC>(wglGetProcAddress("glBinormal3fvEXT"))(v);
}

inline void glBinormal3iEXT(GLint bx, GLint by, GLint bz) 
{
	reinterpret_cast<PFNGLBINORMAL3IEXTPROC>(wglGetProcAddress("glBinormal3iEXT"))(bx, by, bz);
}

inline void glBinormal3ivEXT(const GLint *v) 
{
	reinterpret_cast<PFNGLBINORMAL3IVEXTPROC>(wglGetProcAddress("glBinormal3ivEXT"))(v);
}

inline void glBinormal3sEXT(GLshort bx, GLshort by, GLshort bz) 
{
	reinterpret_cast<PFNGLBINORMAL3SEXTPROC>(wglGetProcAddress("glBinormal3sEXT"))(bx, by, bz);
}

inline void glBinormal3svEXT(const GLshort *v) 
{
	reinterpret_cast<PFNGLBINORMAL3SVEXTPROC>(wglGetProcAddress("glBinormal3svEXT"))(v);
}

inline void glTangentPointerEXT(GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLTANGENTPOINTEREXTPROC>(wglGetProcAddress("glTangentPointerEXT"))(type, stride, pointer);
}

inline void glBinormalPointerEXT(GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLBINORMALPOINTEREXTPROC>(wglGetProcAddress("glBinormalPointerEXT"))(type, stride, pointer);
}

inline void glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) 
{
	reinterpret_cast<PFNGLCOPYTEXIMAGE1DEXTPROC>(wglGetProcAddress("glCopyTexImage1DEXT"))(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) 
{
	reinterpret_cast<PFNGLCOPYTEXIMAGE2DEXTPROC>(wglGetProcAddress("glCopyTexImage2DEXT"))(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYTEXSUBIMAGE1DEXTPROC>(wglGetProcAddress("glCopyTexSubImage1DEXT"))(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYTEXSUBIMAGE2DEXTPROC>(wglGetProcAddress("glCopyTexSubImage2DEXT"))(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYTEXSUBIMAGE3DEXTPROC>(wglGetProcAddress("glCopyTexSubImage3DEXT"))(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCullParameterdvEXT(GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLCULLPARAMETERDVEXTPROC>(wglGetProcAddress("glCullParameterdvEXT"))(pname, params);
}

inline void glCullParameterfvEXT(GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLCULLPARAMETERFVEXTPROC>(wglGetProcAddress("glCullParameterfvEXT"))(pname, params);
}

inline void glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar *label) 
{
	reinterpret_cast<PFNGLLABELOBJECTEXTPROC>(wglGetProcAddress("glLabelObjectEXT"))(type, object, length, label);
}

inline void glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label) 
{
	reinterpret_cast<PFNGLGETOBJECTLABELEXTPROC>(wglGetProcAddress("glGetObjectLabelEXT"))(type, object, bufSize, length, label);
}

inline void glInsertEventMarkerEXT(GLsizei length, const GLchar *marker) 
{
	reinterpret_cast<PFNGLINSERTEVENTMARKEREXTPROC>(wglGetProcAddress("glInsertEventMarkerEXT"))(length, marker);
}

inline void glPushGroupMarkerEXT(GLsizei length, const GLchar *marker) 
{
	reinterpret_cast<PFNGLPUSHGROUPMARKEREXTPROC>(wglGetProcAddress("glPushGroupMarkerEXT"))(length, marker);
}

inline void glPopGroupMarkerEXT(void) 
{
	reinterpret_cast<PFNGLPOPGROUPMARKEREXTPROC>(wglGetProcAddress("glPopGroupMarkerEXT"))();
}

inline void glDepthBoundsEXT(GLclampd zmin, GLclampd zmax) 
{
	reinterpret_cast<PFNGLDEPTHBOUNDSEXTPROC>(wglGetProcAddress("glDepthBoundsEXT"))(zmin, zmax);
}

inline void glMatrixLoadfEXT(GLenum mode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXLOADFEXTPROC>(wglGetProcAddress("glMatrixLoadfEXT"))(mode, m);
}

inline void glMatrixLoaddEXT(GLenum mode, const GLdouble *m) 
{
	reinterpret_cast<PFNGLMATRIXLOADDEXTPROC>(wglGetProcAddress("glMatrixLoaddEXT"))(mode, m);
}

inline void glMatrixMultfEXT(GLenum mode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXMULTFEXTPROC>(wglGetProcAddress("glMatrixMultfEXT"))(mode, m);
}

inline void glMatrixMultdEXT(GLenum mode, const GLdouble *m) 
{
	reinterpret_cast<PFNGLMATRIXMULTDEXTPROC>(wglGetProcAddress("glMatrixMultdEXT"))(mode, m);
}

inline void glMatrixLoadIdentityEXT(GLenum mode) 
{
	reinterpret_cast<PFNGLMATRIXLOADIDENTITYEXTPROC>(wglGetProcAddress("glMatrixLoadIdentityEXT"))(mode);
}

inline void glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLMATRIXROTATEFEXTPROC>(wglGetProcAddress("glMatrixRotatefEXT"))(mode, angle, x, y, z);
}

inline void glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLMATRIXROTATEDEXTPROC>(wglGetProcAddress("glMatrixRotatedEXT"))(mode, angle, x, y, z);
}

inline void glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLMATRIXSCALEFEXTPROC>(wglGetProcAddress("glMatrixScalefEXT"))(mode, x, y, z);
}

inline void glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLMATRIXSCALEDEXTPROC>(wglGetProcAddress("glMatrixScaledEXT"))(mode, x, y, z);
}

inline void glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLMATRIXTRANSLATEFEXTPROC>(wglGetProcAddress("glMatrixTranslatefEXT"))(mode, x, y, z);
}

inline void glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLMATRIXTRANSLATEDEXTPROC>(wglGetProcAddress("glMatrixTranslatedEXT"))(mode, x, y, z);
}

inline void glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) 
{
	reinterpret_cast<PFNGLMATRIXFRUSTUMEXTPROC>(wglGetProcAddress("glMatrixFrustumEXT"))(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) 
{
	reinterpret_cast<PFNGLMATRIXORTHOEXTPROC>(wglGetProcAddress("glMatrixOrthoEXT"))(mode, left, right, bottom, top, zNear, zFar);
}

inline void glMatrixPopEXT(GLenum mode) 
{
	reinterpret_cast<PFNGLMATRIXPOPEXTPROC>(wglGetProcAddress("glMatrixPopEXT"))(mode);
}

inline void glMatrixPushEXT(GLenum mode) 
{
	reinterpret_cast<PFNGLMATRIXPUSHEXTPROC>(wglGetProcAddress("glMatrixPushEXT"))(mode);
}

inline void glClientAttribDefaultEXT(GLbitfield mask) 
{
	reinterpret_cast<PFNGLCLIENTATTRIBDEFAULTEXTPROC>(wglGetProcAddress("glClientAttribDefaultEXT"))(mask);
}

inline void glPushClientAttribDefaultEXT(GLbitfield mask) 
{
	reinterpret_cast<PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC>(wglGetProcAddress("glPushClientAttribDefaultEXT"))(mask);
}

inline void glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERFEXTPROC>(wglGetProcAddress("glTextureParameterfEXT"))(texture, target, pname, param);
}

inline void glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERFVEXTPROC>(wglGetProcAddress("glTextureParameterfvEXT"))(texture, target, pname, params);
}

inline void glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIEXTPROC>(wglGetProcAddress("glTextureParameteriEXT"))(texture, target, pname, param);
}

inline void glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIVEXTPROC>(wglGetProcAddress("glTextureParameterivEXT"))(texture, target, pname, params);
}

inline void glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTUREIMAGE1DEXTPROC>(wglGetProcAddress("glTextureImage1DEXT"))(texture, target, level, internalformat, width, border, format, type, pixels);
}

inline void glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTUREIMAGE2DEXTPROC>(wglGetProcAddress("glTextureImage2DEXT"))(texture, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTURESUBIMAGE1DEXTPROC>(wglGetProcAddress("glTextureSubImage1DEXT"))(texture, target, level, xoffset, width, format, type, pixels);
}

inline void glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTURESUBIMAGE2DEXTPROC>(wglGetProcAddress("glTextureSubImage2DEXT"))(texture, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) 
{
	reinterpret_cast<PFNGLCOPYTEXTUREIMAGE1DEXTPROC>(wglGetProcAddress("glCopyTextureImage1DEXT"))(texture, target, level, internalformat, x, y, width, border);
}

inline void glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) 
{
	reinterpret_cast<PFNGLCOPYTEXTUREIMAGE2DEXTPROC>(wglGetProcAddress("glCopyTextureImage2DEXT"))(texture, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC>(wglGetProcAddress("glCopyTextureSubImage1DEXT"))(texture, target, level, xoffset, x, y, width);
}

inline void glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC>(wglGetProcAddress("glCopyTextureSubImage2DEXT"))(texture, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) 
{
	reinterpret_cast<PFNGLGETTEXTUREIMAGEEXTPROC>(wglGetProcAddress("glGetTextureImageEXT"))(texture, target, level, format, type, pixels);
}

inline void glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERFVEXTPROC>(wglGetProcAddress("glGetTextureParameterfvEXT"))(texture, target, pname, params);
}

inline void glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERIVEXTPROC>(wglGetProcAddress("glGetTextureParameterivEXT"))(texture, target, pname, params);
}

inline void glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC>(wglGetProcAddress("glGetTextureLevelParameterfvEXT"))(texture, target, level, pname, params);
}

inline void glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC>(wglGetProcAddress("glGetTextureLevelParameterivEXT"))(texture, target, level, pname, params);
}

inline void glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTUREIMAGE3DEXTPROC>(wglGetProcAddress("glTextureImage3DEXT"))(texture, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXTURESUBIMAGE3DEXTPROC>(wglGetProcAddress("glTextureSubImage3DEXT"))(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC>(wglGetProcAddress("glCopyTextureSubImage3DEXT"))(texture, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture) 
{
	reinterpret_cast<PFNGLBINDMULTITEXTUREEXTPROC>(wglGetProcAddress("glBindMultiTextureEXT"))(texunit, target, texture);
}

inline void glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLMULTITEXCOORDPOINTEREXTPROC>(wglGetProcAddress("glMultiTexCoordPointerEXT"))(texunit, size, type, stride, pointer);
}

inline void glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLMULTITEXENVFEXTPROC>(wglGetProcAddress("glMultiTexEnvfEXT"))(texunit, target, pname, param);
}

inline void glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLMULTITEXENVFVEXTPROC>(wglGetProcAddress("glMultiTexEnvfvEXT"))(texunit, target, pname, params);
}

inline void glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLMULTITEXENVIEXTPROC>(wglGetProcAddress("glMultiTexEnviEXT"))(texunit, target, pname, param);
}

inline void glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLMULTITEXENVIVEXTPROC>(wglGetProcAddress("glMultiTexEnvivEXT"))(texunit, target, pname, params);
}

inline void glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param) 
{
	reinterpret_cast<PFNGLMULTITEXGENDEXTPROC>(wglGetProcAddress("glMultiTexGendEXT"))(texunit, coord, pname, param);
}

inline void glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params) 
{
	reinterpret_cast<PFNGLMULTITEXGENDVEXTPROC>(wglGetProcAddress("glMultiTexGendvEXT"))(texunit, coord, pname, params);
}

inline void glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLMULTITEXGENFEXTPROC>(wglGetProcAddress("glMultiTexGenfEXT"))(texunit, coord, pname, param);
}

inline void glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLMULTITEXGENFVEXTPROC>(wglGetProcAddress("glMultiTexGenfvEXT"))(texunit, coord, pname, params);
}

inline void glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLMULTITEXGENIEXTPROC>(wglGetProcAddress("glMultiTexGeniEXT"))(texunit, coord, pname, param);
}

inline void glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLMULTITEXGENIVEXTPROC>(wglGetProcAddress("glMultiTexGenivEXT"))(texunit, coord, pname, params);
}

inline void glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXENVFVEXTPROC>(wglGetProcAddress("glGetMultiTexEnvfvEXT"))(texunit, target, pname, params);
}

inline void glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXENVIVEXTPROC>(wglGetProcAddress("glGetMultiTexEnvivEXT"))(texunit, target, pname, params);
}

inline void glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXGENDVEXTPROC>(wglGetProcAddress("glGetMultiTexGendvEXT"))(texunit, coord, pname, params);
}

inline void glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXGENFVEXTPROC>(wglGetProcAddress("glGetMultiTexGenfvEXT"))(texunit, coord, pname, params);
}

inline void glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXGENIVEXTPROC>(wglGetProcAddress("glGetMultiTexGenivEXT"))(texunit, coord, pname, params);
}

inline void glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLMULTITEXPARAMETERIEXTPROC>(wglGetProcAddress("glMultiTexParameteriEXT"))(texunit, target, pname, param);
}

inline void glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLMULTITEXPARAMETERIVEXTPROC>(wglGetProcAddress("glMultiTexParameterivEXT"))(texunit, target, pname, params);
}

inline void glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLMULTITEXPARAMETERFEXTPROC>(wglGetProcAddress("glMultiTexParameterfEXT"))(texunit, target, pname, param);
}

inline void glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLMULTITEXPARAMETERFVEXTPROC>(wglGetProcAddress("glMultiTexParameterfvEXT"))(texunit, target, pname, params);
}

inline void glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLMULTITEXIMAGE1DEXTPROC>(wglGetProcAddress("glMultiTexImage1DEXT"))(texunit, target, level, internalformat, width, border, format, type, pixels);
}

inline void glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLMULTITEXIMAGE2DEXTPROC>(wglGetProcAddress("glMultiTexImage2DEXT"))(texunit, target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLMULTITEXSUBIMAGE1DEXTPROC>(wglGetProcAddress("glMultiTexSubImage1DEXT"))(texunit, target, level, xoffset, width, format, type, pixels);
}

inline void glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLMULTITEXSUBIMAGE2DEXTPROC>(wglGetProcAddress("glMultiTexSubImage2DEXT"))(texunit, target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) 
{
	reinterpret_cast<PFNGLCOPYMULTITEXIMAGE1DEXTPROC>(wglGetProcAddress("glCopyMultiTexImage1DEXT"))(texunit, target, level, internalformat, x, y, width, border);
}

inline void glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) 
{
	reinterpret_cast<PFNGLCOPYMULTITEXIMAGE2DEXTPROC>(wglGetProcAddress("glCopyMultiTexImage2DEXT"))(texunit, target, level, internalformat, x, y, width, height, border);
}

inline void glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC>(wglGetProcAddress("glCopyMultiTexSubImage1DEXT"))(texunit, target, level, xoffset, x, y, width);
}

inline void glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC>(wglGetProcAddress("glCopyMultiTexSubImage2DEXT"))(texunit, target, level, xoffset, yoffset, x, y, width, height);
}

inline void glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) 
{
	reinterpret_cast<PFNGLGETMULTITEXIMAGEEXTPROC>(wglGetProcAddress("glGetMultiTexImageEXT"))(texunit, target, level, format, type, pixels);
}

inline void glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXPARAMETERFVEXTPROC>(wglGetProcAddress("glGetMultiTexParameterfvEXT"))(texunit, target, pname, params);
}

inline void glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXPARAMETERIVEXTPROC>(wglGetProcAddress("glGetMultiTexParameterivEXT"))(texunit, target, pname, params);
}

inline void glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC>(wglGetProcAddress("glGetMultiTexLevelParameterfvEXT"))(texunit, target, level, pname, params);
}

inline void glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC>(wglGetProcAddress("glGetMultiTexLevelParameterivEXT"))(texunit, target, level, pname, params);
}

inline void glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLMULTITEXIMAGE3DEXTPROC>(wglGetProcAddress("glMultiTexImage3DEXT"))(texunit, target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLMULTITEXSUBIMAGE3DEXTPROC>(wglGetProcAddress("glMultiTexSubImage3DEXT"))(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC>(wglGetProcAddress("glCopyMultiTexSubImage3DEXT"))(texunit, target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glEnableClientStateIndexedEXT(GLenum array, GLuint index) 
{
	reinterpret_cast<PFNGLENABLECLIENTSTATEINDEXEDEXTPROC>(wglGetProcAddress("glEnableClientStateIndexedEXT"))(array, index);
}

inline void glDisableClientStateIndexedEXT(GLenum array, GLuint index) 
{
	reinterpret_cast<PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC>(wglGetProcAddress("glDisableClientStateIndexedEXT"))(array, index);
}

inline void glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat *data) 
{
	reinterpret_cast<PFNGLGETFLOATINDEXEDVEXTPROC>(wglGetProcAddress("glGetFloatIndexedvEXT"))(target, index, data);
}

inline void glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble *data) 
{
	reinterpret_cast<PFNGLGETDOUBLEINDEXEDVEXTPROC>(wglGetProcAddress("glGetDoubleIndexedvEXT"))(target, index, data);
}

inline void glGetPointerIndexedvEXT(GLenum target, GLuint index, void **data) 
{
	reinterpret_cast<PFNGLGETPOINTERINDEXEDVEXTPROC>(wglGetProcAddress("glGetPointerIndexedvEXT"))(target, index, data);
}

inline void glEnableIndexedEXT(GLenum target, GLuint index) 
{
	reinterpret_cast<PFNGLENABLEINDEXEDEXTPROC>(wglGetProcAddress("glEnableIndexedEXT"))(target, index);
}

inline void glDisableIndexedEXT(GLenum target, GLuint index) 
{
	reinterpret_cast<PFNGLDISABLEINDEXEDEXTPROC>(wglGetProcAddress("glDisableIndexedEXT"))(target, index);
}

inline GLboolean glIsEnabledIndexedEXT(GLenum target, GLuint index) 
{
	return reinterpret_cast<PFNGLISENABLEDINDEXEDEXTPROC>(wglGetProcAddress("glIsEnabledIndexedEXT"))(target, index);
}

inline void glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint *data) 
{
	reinterpret_cast<PFNGLGETINTEGERINDEXEDVEXTPROC>(wglGetProcAddress("glGetIntegerIndexedvEXT"))(target, index, data);
}

inline void glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean *data) 
{
	reinterpret_cast<PFNGLGETBOOLEANINDEXEDVEXTPROC>(wglGetProcAddress("glGetBooleanIndexedvEXT"))(target, index, data);
}

inline void glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC>(wglGetProcAddress("glCompressedTextureImage3DEXT"))(texture, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC>(wglGetProcAddress("glCompressedTextureImage2DEXT"))(texture, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC>(wglGetProcAddress("glCompressedTextureImage1DEXT"))(texture, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC>(wglGetProcAddress("glCompressedTextureSubImage3DEXT"))(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC>(wglGetProcAddress("glCompressedTextureSubImage2DEXT"))(texture, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC>(wglGetProcAddress("glCompressedTextureSubImage1DEXT"))(texture, target, level, xoffset, width, format, imageSize, bits);
}

inline void glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void *img) 
{
	reinterpret_cast<PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC>(wglGetProcAddress("glGetCompressedTextureImageEXT"))(texture, target, lod, img);
}

inline void glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC>(wglGetProcAddress("glCompressedMultiTexImage3DEXT"))(texunit, target, level, internalformat, width, height, depth, border, imageSize, bits);
}

inline void glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC>(wglGetProcAddress("glCompressedMultiTexImage2DEXT"))(texunit, target, level, internalformat, width, height, border, imageSize, bits);
}

inline void glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC>(wglGetProcAddress("glCompressedMultiTexImage1DEXT"))(texunit, target, level, internalformat, width, border, imageSize, bits);
}

inline void glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC>(wglGetProcAddress("glCompressedMultiTexSubImage3DEXT"))(texunit, target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC>(wglGetProcAddress("glCompressedMultiTexSubImage2DEXT"))(texunit, target, level, xoffset, yoffset, width, height, format, imageSize, bits);
}

inline void glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) 
{
	reinterpret_cast<PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC>(wglGetProcAddress("glCompressedMultiTexSubImage1DEXT"))(texunit, target, level, xoffset, width, format, imageSize, bits);
}

inline void glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void *img) 
{
	reinterpret_cast<PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC>(wglGetProcAddress("glGetCompressedMultiTexImageEXT"))(texunit, target, lod, img);
}

inline void glMatrixLoadTransposefEXT(GLenum mode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEFEXTPROC>(wglGetProcAddress("glMatrixLoadTransposefEXT"))(mode, m);
}

inline void glMatrixLoadTransposedEXT(GLenum mode, const GLdouble *m) 
{
	reinterpret_cast<PFNGLMATRIXLOADTRANSPOSEDEXTPROC>(wglGetProcAddress("glMatrixLoadTransposedEXT"))(mode, m);
}

inline void glMatrixMultTransposefEXT(GLenum mode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEFEXTPROC>(wglGetProcAddress("glMatrixMultTransposefEXT"))(mode, m);
}

inline void glMatrixMultTransposedEXT(GLenum mode, const GLdouble *m) 
{
	reinterpret_cast<PFNGLMATRIXMULTTRANSPOSEDEXTPROC>(wglGetProcAddress("glMatrixMultTransposedEXT"))(mode, m);
}

inline void glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERDATAEXTPROC>(wglGetProcAddress("glNamedBufferDataEXT"))(buffer, size, data, usage);
}

inline void glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERSUBDATAEXTPROC>(wglGetProcAddress("glNamedBufferSubDataEXT"))(buffer, offset, size, data);
}

inline GLboolean glUnmapNamedBufferEXT(GLuint buffer) 
{
	return reinterpret_cast<PFNGLUNMAPNAMEDBUFFEREXTPROC>(wglGetProcAddress("glUnmapNamedBufferEXT"))(buffer);
}

inline void glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC>(wglGetProcAddress("glGetNamedBufferParameterivEXT"))(buffer, pname, params);
}

inline void glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void **params) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERPOINTERVEXTPROC>(wglGetProcAddress("glGetNamedBufferPointervEXT"))(buffer, pname, params);
}

inline void glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERSUBDATAEXTPROC>(wglGetProcAddress("glGetNamedBufferSubDataEXT"))(buffer, offset, size, data);
}

inline void glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1FEXTPROC>(wglGetProcAddress("glProgramUniform1fEXT"))(program, location, v0);
}

inline void glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2FEXTPROC>(wglGetProcAddress("glProgramUniform2fEXT"))(program, location, v0, v1);
}

inline void glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3FEXTPROC>(wglGetProcAddress("glProgramUniform3fEXT"))(program, location, v0, v1, v2);
}

inline void glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4FEXTPROC>(wglGetProcAddress("glProgramUniform4fEXT"))(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform1iEXT(GLuint program, GLint location, GLint v0) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1IEXTPROC>(wglGetProcAddress("glProgramUniform1iEXT"))(program, location, v0);
}

inline void glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2IEXTPROC>(wglGetProcAddress("glProgramUniform2iEXT"))(program, location, v0, v1);
}

inline void glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3IEXTPROC>(wglGetProcAddress("glProgramUniform3iEXT"))(program, location, v0, v1, v2);
}

inline void glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4IEXTPROC>(wglGetProcAddress("glProgramUniform4iEXT"))(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1FVEXTPROC>(wglGetProcAddress("glProgramUniform1fvEXT"))(program, location, count, value);
}

inline void glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2FVEXTPROC>(wglGetProcAddress("glProgramUniform2fvEXT"))(program, location, count, value);
}

inline void glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3FVEXTPROC>(wglGetProcAddress("glProgramUniform3fvEXT"))(program, location, count, value);
}

inline void glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4FVEXTPROC>(wglGetProcAddress("glProgramUniform4fvEXT"))(program, location, count, value);
}

inline void glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1IVEXTPROC>(wglGetProcAddress("glProgramUniform1ivEXT"))(program, location, count, value);
}

inline void glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2IVEXTPROC>(wglGetProcAddress("glProgramUniform2ivEXT"))(program, location, count, value);
}

inline void glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3IVEXTPROC>(wglGetProcAddress("glProgramUniform3ivEXT"))(program, location, count, value);
}

inline void glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4IVEXTPROC>(wglGetProcAddress("glProgramUniform4ivEXT"))(program, location, count, value);
}

inline void glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix2fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix3fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix4fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix2x3fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix3x2fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix2x4fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix4x2fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix3x4fvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix4x3fvEXT"))(program, location, count, transpose, value);
}

inline void glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer) 
{
	reinterpret_cast<PFNGLTEXTUREBUFFEREXTPROC>(wglGetProcAddress("glTextureBufferEXT"))(texture, target, internalformat, buffer);
}

inline void glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer) 
{
	reinterpret_cast<PFNGLMULTITEXBUFFEREXTPROC>(wglGetProcAddress("glMultiTexBufferEXT"))(texunit, target, internalformat, buffer);
}

inline void glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIIVEXTPROC>(wglGetProcAddress("glTextureParameterIivEXT"))(texture, target, pname, params);
}

inline void glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint *params) 
{
	reinterpret_cast<PFNGLTEXTUREPARAMETERIUIVEXTPROC>(wglGetProcAddress("glTextureParameterIuivEXT"))(texture, target, pname, params);
}

inline void glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERIIVEXTPROC>(wglGetProcAddress("glGetTextureParameterIivEXT"))(texture, target, pname, params);
}

inline void glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETTEXTUREPARAMETERIUIVEXTPROC>(wglGetProcAddress("glGetTextureParameterIuivEXT"))(texture, target, pname, params);
}

inline void glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLMULTITEXPARAMETERIIVEXTPROC>(wglGetProcAddress("glMultiTexParameterIivEXT"))(texunit, target, pname, params);
}

inline void glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint *params) 
{
	reinterpret_cast<PFNGLMULTITEXPARAMETERIUIVEXTPROC>(wglGetProcAddress("glMultiTexParameterIuivEXT"))(texunit, target, pname, params);
}

inline void glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXPARAMETERIIVEXTPROC>(wglGetProcAddress("glGetMultiTexParameterIivEXT"))(texunit, target, pname, params);
}

inline void glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETMULTITEXPARAMETERIUIVEXTPROC>(wglGetProcAddress("glGetMultiTexParameterIuivEXT"))(texunit, target, pname, params);
}

inline void glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UIEXTPROC>(wglGetProcAddress("glProgramUniform1uiEXT"))(program, location, v0);
}

inline void glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UIEXTPROC>(wglGetProcAddress("glProgramUniform2uiEXT"))(program, location, v0, v1);
}

inline void glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UIEXTPROC>(wglGetProcAddress("glProgramUniform3uiEXT"))(program, location, v0, v1, v2);
}

inline void glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UIEXTPROC>(wglGetProcAddress("glProgramUniform4uiEXT"))(program, location, v0, v1, v2, v3);
}

inline void glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1UIVEXTPROC>(wglGetProcAddress("glProgramUniform1uivEXT"))(program, location, count, value);
}

inline void glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2UIVEXTPROC>(wglGetProcAddress("glProgramUniform2uivEXT"))(program, location, count, value);
}

inline void glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3UIVEXTPROC>(wglGetProcAddress("glProgramUniform3uivEXT"))(program, location, count, value);
}

inline void glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4UIVEXTPROC>(wglGetProcAddress("glProgramUniform4uivEXT"))(program, location, count, value);
}

inline void glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameters4fvEXT"))(program, target, index, count, params);
}

inline void glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameterI4iEXT"))(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint *params) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT"))(program, target, index, params);
}

inline void glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC>(wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT"))(program, target, index, count, params);
}

inline void glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT"))(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint *params) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT"))(program, target, index, params);
}

inline void glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC>(wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT"))(program, target, index, count, params);
}

inline void glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC>(wglGetProcAddress("glGetNamedProgramLocalParameterIivEXT"))(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC>(wglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT"))(program, target, index, params);
}

inline void glEnableClientStateiEXT(GLenum array, GLuint index) 
{
	reinterpret_cast<PFNGLENABLECLIENTSTATEIEXTPROC>(wglGetProcAddress("glEnableClientStateiEXT"))(array, index);
}

inline void glDisableClientStateiEXT(GLenum array, GLuint index) 
{
	reinterpret_cast<PFNGLDISABLECLIENTSTATEIEXTPROC>(wglGetProcAddress("glDisableClientStateiEXT"))(array, index);
}

inline void glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETFLOATI_VEXTPROC>(wglGetProcAddress("glGetFloati_vEXT"))(pname, index, params);
}

inline void glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETDOUBLEI_VEXTPROC>(wglGetProcAddress("glGetDoublei_vEXT"))(pname, index, params);
}

inline void glGetPointeri_vEXT(GLenum pname, GLuint index, void **params) 
{
	reinterpret_cast<PFNGLGETPOINTERI_VEXTPROC>(wglGetProcAddress("glGetPointeri_vEXT"))(pname, index, params);
}

inline void glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void *string) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMSTRINGEXTPROC>(wglGetProcAddress("glNamedProgramStringEXT"))(program, target, format, len, string);
}

inline void glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameter4dEXT"))(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble *params) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameter4dvEXT"))(program, target, index, params);
}

inline void glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameter4fEXT"))(program, target, index, x, y, z, w);
}

inline void glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat *params) 
{
	reinterpret_cast<PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC>(wglGetProcAddress("glNamedProgramLocalParameter4fvEXT"))(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC>(wglGetProcAddress("glGetNamedProgramLocalParameterdvEXT"))(program, target, index, params);
}

inline void glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC>(wglGetProcAddress("glGetNamedProgramLocalParameterfvEXT"))(program, target, index, params);
}

inline void glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDPROGRAMIVEXTPROC>(wglGetProcAddress("glGetNamedProgramivEXT"))(program, target, pname, params);
}

inline void glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void *string) 
{
	reinterpret_cast<PFNGLGETNAMEDPROGRAMSTRINGEXTPROC>(wglGetProcAddress("glGetNamedProgramStringEXT"))(program, target, pname, string);
}

inline void glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC>(wglGetProcAddress("glNamedRenderbufferStorageEXT"))(renderbuffer, internalformat, width, height);
}

inline void glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC>(wglGetProcAddress("glGetNamedRenderbufferParameterivEXT"))(renderbuffer, pname, params);
}

inline void glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT"))(renderbuffer, samples, internalformat, width, height);
}

inline void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC>(wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT"))(renderbuffer, coverageSamples, colorSamples, internalformat, width, height);
}

inline GLenum glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target) 
{
	return reinterpret_cast<PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC>(wglGetProcAddress("glCheckNamedFramebufferStatusEXT"))(framebuffer, target);
}

inline void glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC>(wglGetProcAddress("glNamedFramebufferTexture1DEXT"))(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC>(wglGetProcAddress("glNamedFramebufferTexture2DEXT"))(framebuffer, attachment, textarget, texture, level);
}

inline void glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC>(wglGetProcAddress("glNamedFramebufferTexture3DEXT"))(framebuffer, attachment, textarget, texture, level, zoffset);
}

inline void glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC>(wglGetProcAddress("glNamedFramebufferRenderbufferEXT"))(framebuffer, attachment, renderbuffertarget, renderbuffer);
}

inline void glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC>(wglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT"))(framebuffer, attachment, pname, params);
}

inline void glGenerateTextureMipmapEXT(GLuint texture, GLenum target) 
{
	reinterpret_cast<PFNGLGENERATETEXTUREMIPMAPEXTPROC>(wglGetProcAddress("glGenerateTextureMipmapEXT"))(texture, target);
}

inline void glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target) 
{
	reinterpret_cast<PFNGLGENERATEMULTITEXMIPMAPEXTPROC>(wglGetProcAddress("glGenerateMultiTexMipmapEXT"))(texunit, target);
}

inline void glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC>(wglGetProcAddress("glFramebufferDrawBufferEXT"))(framebuffer, mode);
}

inline void glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum *bufs) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC>(wglGetProcAddress("glFramebufferDrawBuffersEXT"))(framebuffer, n, bufs);
}

inline void glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERREADBUFFEREXTPROC>(wglGetProcAddress("glFramebufferReadBufferEXT"))(framebuffer, mode);
}

inline void glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC>(wglGetProcAddress("glGetFramebufferParameterivEXT"))(framebuffer, pname, params);
}

inline void glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC>(wglGetProcAddress("glNamedCopyBufferSubDataEXT"))(readBuffer, writeBuffer, readOffset, writeOffset, size);
}

inline void glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC>(wglGetProcAddress("glNamedFramebufferTextureEXT"))(framebuffer, attachment, texture, level);
}

inline void glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC>(wglGetProcAddress("glNamedFramebufferTextureLayerEXT"))(framebuffer, attachment, texture, level, layer);
}

inline void glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC>(wglGetProcAddress("glNamedFramebufferTextureFaceEXT"))(framebuffer, attachment, texture, level, face);
}

inline void glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLTEXTURERENDERBUFFEREXTPROC>(wglGetProcAddress("glTextureRenderbufferEXT"))(texture, target, renderbuffer);
}

inline void glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLMULTITEXRENDERBUFFEREXTPROC>(wglGetProcAddress("glMultiTexRenderbufferEXT"))(texunit, target, renderbuffer);
}

inline void glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayVertexOffsetEXT"))(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYCOLOROFFSETEXTPROC>(wglGetProcAddress("glVertexArrayColorOffsetEXT"))(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT"))(vaobj, buffer, stride, offset);
}

inline void glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYINDEXOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayIndexOffsetEXT"))(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYNORMALOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayNormalOffsetEXT"))(vaobj, buffer, type, stride, offset);
}

inline void glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayTexCoordOffsetEXT"))(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT"))(vaobj, buffer, texunit, size, type, stride, offset);
}

inline void glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayFogCoordOffsetEXT"))(vaobj, buffer, type, stride, offset);
}

inline void glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC>(wglGetProcAddress("glVertexArraySecondaryColorOffsetEXT"))(vaobj, buffer, size, type, stride, offset);
}

inline void glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribOffsetEXT"))(vaobj, buffer, index, size, type, normalized, stride, offset);
}

inline void glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT"))(vaobj, buffer, index, size, type, stride, offset);
}

inline void glEnableVertexArrayEXT(GLuint vaobj, GLenum array) 
{
	reinterpret_cast<PFNGLENABLEVERTEXARRAYEXTPROC>(wglGetProcAddress("glEnableVertexArrayEXT"))(vaobj, array);
}

inline void glDisableVertexArrayEXT(GLuint vaobj, GLenum array) 
{
	reinterpret_cast<PFNGLDISABLEVERTEXARRAYEXTPROC>(wglGetProcAddress("glDisableVertexArrayEXT"))(vaobj, array);
}

inline void glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index) 
{
	reinterpret_cast<PFNGLENABLEVERTEXARRAYATTRIBEXTPROC>(wglGetProcAddress("glEnableVertexArrayAttribEXT"))(vaobj, index);
}

inline void glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index) 
{
	reinterpret_cast<PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC>(wglGetProcAddress("glDisableVertexArrayAttribEXT"))(vaobj, index);
}

inline void glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint *param) 
{
	reinterpret_cast<PFNGLGETVERTEXARRAYINTEGERVEXTPROC>(wglGetProcAddress("glGetVertexArrayIntegervEXT"))(vaobj, pname, param);
}

inline void glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void **param) 
{
	reinterpret_cast<PFNGLGETVERTEXARRAYPOINTERVEXTPROC>(wglGetProcAddress("glGetVertexArrayPointervEXT"))(vaobj, pname, param);
}

inline void glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint *param) 
{
	reinterpret_cast<PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC>(wglGetProcAddress("glGetVertexArrayIntegeri_vEXT"))(vaobj, index, pname, param);
}

inline void glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void **param) 
{
	reinterpret_cast<PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC>(wglGetProcAddress("glGetVertexArrayPointeri_vEXT"))(vaobj, index, pname, param);
}

inline void glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length) 
{
	reinterpret_cast<PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC>(wglGetProcAddress("glFlushMappedNamedBufferRangeEXT"))(buffer, offset, length);
}

inline void glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) 
{
	reinterpret_cast<PFNGLNAMEDBUFFERSTORAGEEXTPROC>(wglGetProcAddress("glNamedBufferStorageEXT"))(buffer, size, data, flags);
}

inline void glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARNAMEDBUFFERDATAEXTPROC>(wglGetProcAddress("glClearNamedBufferDataEXT"))(buffer, internalformat, format, type, data);
}

inline void glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) 
{
	reinterpret_cast<PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC>(wglGetProcAddress("glClearNamedBufferSubDataEXT"))(buffer, internalformat, offset, size, format, type, data);
}

inline void glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC>(wglGetProcAddress("glNamedFramebufferParameteriEXT"))(framebuffer, pname, param);
}

inline void glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC>(wglGetProcAddress("glGetNamedFramebufferParameterivEXT"))(framebuffer, pname, params);
}

inline void glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1DEXTPROC>(wglGetProcAddress("glProgramUniform1dEXT"))(program, location, x);
}

inline void glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2DEXTPROC>(wglGetProcAddress("glProgramUniform2dEXT"))(program, location, x, y);
}

inline void glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3DEXTPROC>(wglGetProcAddress("glProgramUniform3dEXT"))(program, location, x, y, z);
}

inline void glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4DEXTPROC>(wglGetProcAddress("glProgramUniform4dEXT"))(program, location, x, y, z, w);
}

inline void glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM1DVEXTPROC>(wglGetProcAddress("glProgramUniform1dvEXT"))(program, location, count, value);
}

inline void glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM2DVEXTPROC>(wglGetProcAddress("glProgramUniform2dvEXT"))(program, location, count, value);
}

inline void glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM3DVEXTPROC>(wglGetProcAddress("glProgramUniform3dvEXT"))(program, location, count, value);
}

inline void glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORM4DVEXTPROC>(wglGetProcAddress("glProgramUniform4dvEXT"))(program, location, count, value);
}

inline void glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix2dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix3dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix4dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix2x3dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix2x4dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix3x2dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix3x4dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix4x2dvEXT"))(program, location, count, transpose, value);
}

inline void glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC>(wglGetProcAddress("glProgramUniformMatrix4x3dvEXT"))(program, location, count, transpose, value);
}

inline void glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLTEXTUREBUFFERRANGEEXTPROC>(wglGetProcAddress("glTextureBufferRangeEXT"))(texture, target, internalformat, buffer, offset, size);
}

inline void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE1DEXTPROC>(wglGetProcAddress("glTextureStorage1DEXT"))(texture, target, levels, internalformat, width);
}

inline void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE2DEXTPROC>(wglGetProcAddress("glTextureStorage2DEXT"))(texture, target, levels, internalformat, width, height);
}

inline void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE3DEXTPROC>(wglGetProcAddress("glTextureStorage3DEXT"))(texture, target, levels, internalformat, width, height, depth);
}

inline void glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC>(wglGetProcAddress("glTextureStorage2DMultisampleEXT"))(texture, target, samples, internalformat, width, height, fixedsamplelocations);
}

inline void glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC>(wglGetProcAddress("glTextureStorage3DMultisampleEXT"))(texture, target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

inline void glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) 
{
	reinterpret_cast<PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC>(wglGetProcAddress("glVertexArrayBindVertexBufferEXT"))(vaobj, bindingindex, buffer, offset, stride);
}

inline void glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribFormatEXT"))(vaobj, attribindex, size, type, normalized, relativeoffset);
}

inline void glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribIFormatEXT"))(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribLFormatEXT"))(vaobj, attribindex, size, type, relativeoffset);
}

inline void glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribBindingEXT"))(vaobj, attribindex, bindingindex);
}

inline void glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC>(wglGetProcAddress("glVertexArrayVertexBindingDivisorEXT"))(vaobj, bindingindex, divisor);
}

inline void glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT"))(vaobj, buffer, index, size, type, stride, offset);
}

inline void glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) 
{
	reinterpret_cast<PFNGLTEXTUREPAGECOMMITMENTEXTPROC>(wglGetProcAddress("glTexturePageCommitmentEXT"))(texture, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

inline void glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor) 
{
	reinterpret_cast<PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC>(wglGetProcAddress("glVertexArrayVertexAttribDivisorEXT"))(vaobj, index, divisor);
}

inline void glColorMaskIndexedEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) 
{
	reinterpret_cast<PFNGLCOLORMASKINDEXEDEXTPROC>(wglGetProcAddress("glColorMaskIndexedEXT"))(index, r, g, b, a);
}

inline void glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount) 
{
	reinterpret_cast<PFNGLDRAWARRAYSINSTANCEDEXTPROC>(wglGetProcAddress("glDrawArraysInstancedEXT"))(mode, start, count, primcount);
}

inline void glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) 
{
	reinterpret_cast<PFNGLDRAWELEMENTSINSTANCEDEXTPROC>(wglGetProcAddress("glDrawElementsInstancedEXT"))(mode, count, type, indices, primcount);
}

inline void glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) 
{
	reinterpret_cast<PFNGLDRAWRANGEELEMENTSEXTPROC>(wglGetProcAddress("glDrawRangeElementsEXT"))(mode, start, end, count, type, indices);
}

inline void glFogCoordfEXT(GLfloat coord) 
{
	reinterpret_cast<PFNGLFOGCOORDFEXTPROC>(wglGetProcAddress("glFogCoordfEXT"))(coord);
}

inline void glFogCoordfvEXT(const GLfloat *coord) 
{
	reinterpret_cast<PFNGLFOGCOORDFVEXTPROC>(wglGetProcAddress("glFogCoordfvEXT"))(coord);
}

inline void glFogCoorddEXT(GLdouble coord) 
{
	reinterpret_cast<PFNGLFOGCOORDDEXTPROC>(wglGetProcAddress("glFogCoorddEXT"))(coord);
}

inline void glFogCoorddvEXT(const GLdouble *coord) 
{
	reinterpret_cast<PFNGLFOGCOORDDVEXTPROC>(wglGetProcAddress("glFogCoorddvEXT"))(coord);
}

inline void glFogCoordPointerEXT(GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLFOGCOORDPOINTEREXTPROC>(wglGetProcAddress("glFogCoordPointerEXT"))(type, stride, pointer);
}

inline void glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) 
{
	reinterpret_cast<PFNGLBLITFRAMEBUFFEREXTPROC>(wglGetProcAddress("glBlitFramebufferEXT"))(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

inline void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC>(wglGetProcAddress("glRenderbufferStorageMultisampleEXT"))(target, samples, internalformat, width, height);
}

inline GLboolean glIsRenderbufferEXT(GLuint renderbuffer) 
{
	return reinterpret_cast<PFNGLISRENDERBUFFEREXTPROC>(wglGetProcAddress("glIsRenderbufferEXT"))(renderbuffer);
}

inline void glBindRenderbufferEXT(GLenum target, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLBINDRENDERBUFFEREXTPROC>(wglGetProcAddress("glBindRenderbufferEXT"))(target, renderbuffer);
}

inline void glDeleteRenderbuffersEXT(GLsizei n, const GLuint *renderbuffers) 
{
	reinterpret_cast<PFNGLDELETERENDERBUFFERSEXTPROC>(wglGetProcAddress("glDeleteRenderbuffersEXT"))(n, renderbuffers);
}

inline void glGenRenderbuffersEXT(GLsizei n, GLuint *renderbuffers) 
{
	reinterpret_cast<PFNGLGENRENDERBUFFERSEXTPROC>(wglGetProcAddress("glGenRenderbuffersEXT"))(n, renderbuffers);
}

inline void glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLRENDERBUFFERSTORAGEEXTPROC>(wglGetProcAddress("glRenderbufferStorageEXT"))(target, internalformat, width, height);
}

inline void glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC>(wglGetProcAddress("glGetRenderbufferParameterivEXT"))(target, pname, params);
}

inline GLboolean glIsFramebufferEXT(GLuint framebuffer) 
{
	return reinterpret_cast<PFNGLISFRAMEBUFFEREXTPROC>(wglGetProcAddress("glIsFramebufferEXT"))(framebuffer);
}

inline void glBindFramebufferEXT(GLenum target, GLuint framebuffer) 
{
	reinterpret_cast<PFNGLBINDFRAMEBUFFEREXTPROC>(wglGetProcAddress("glBindFramebufferEXT"))(target, framebuffer);
}

inline void glDeleteFramebuffersEXT(GLsizei n, const GLuint *framebuffers) 
{
	reinterpret_cast<PFNGLDELETEFRAMEBUFFERSEXTPROC>(wglGetProcAddress("glDeleteFramebuffersEXT"))(n, framebuffers);
}

inline void glGenFramebuffersEXT(GLsizei n, GLuint *framebuffers) 
{
	reinterpret_cast<PFNGLGENFRAMEBUFFERSEXTPROC>(wglGetProcAddress("glGenFramebuffersEXT"))(n, framebuffers);
}

inline GLenum glCheckFramebufferStatusEXT(GLenum target) 
{
	return reinterpret_cast<PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC>(wglGetProcAddress("glCheckFramebufferStatusEXT"))(target);
}

inline void glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE1DEXTPROC>(wglGetProcAddress("glFramebufferTexture1DEXT"))(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE2DEXTPROC>(wglGetProcAddress("glFramebufferTexture2DEXT"))(target, attachment, textarget, texture, level);
}

inline void glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURE3DEXTPROC>(wglGetProcAddress("glFramebufferTexture3DEXT"))(target, attachment, textarget, texture, level, zoffset);
}

inline void glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC>(wglGetProcAddress("glFramebufferRenderbufferEXT"))(target, attachment, renderbuffertarget, renderbuffer);
}

inline void glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC>(wglGetProcAddress("glGetFramebufferAttachmentParameterivEXT"))(target, attachment, pname, params);
}

inline void glGenerateMipmapEXT(GLenum target) 
{
	reinterpret_cast<PFNGLGENERATEMIPMAPEXTPROC>(wglGetProcAddress("glGenerateMipmapEXT"))(target);
}

inline void glProgramParameteriEXT(GLuint program, GLenum pname, GLint value) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETERIEXTPROC>(wglGetProcAddress("glProgramParameteriEXT"))(program, pname, value);
}

inline void glProgramEnvParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETERS4FVEXTPROC>(wglGetProcAddress("glProgramEnvParameters4fvEXT"))(target, index, count, params);
}

inline void glProgramLocalParameters4fvEXT(GLenum target, GLuint index, GLsizei count, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC>(wglGetProcAddress("glProgramLocalParameters4fvEXT"))(target, index, count, params);
}

inline void glGetUniformuivEXT(GLuint program, GLint location, GLuint *params) 
{
	reinterpret_cast<PFNGLGETUNIFORMUIVEXTPROC>(wglGetProcAddress("glGetUniformuivEXT"))(program, location, params);
}

inline void glBindFragDataLocationEXT(GLuint program, GLuint color, const GLchar *name) 
{
	reinterpret_cast<PFNGLBINDFRAGDATALOCATIONEXTPROC>(wglGetProcAddress("glBindFragDataLocationEXT"))(program, color, name);
}

inline GLint glGetFragDataLocationEXT(GLuint program, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETFRAGDATALOCATIONEXTPROC>(wglGetProcAddress("glGetFragDataLocationEXT"))(program, name);
}

inline void glUniform1uiEXT(GLint location, GLuint v0) 
{
	reinterpret_cast<PFNGLUNIFORM1UIEXTPROC>(wglGetProcAddress("glUniform1uiEXT"))(location, v0);
}

inline void glUniform2uiEXT(GLint location, GLuint v0, GLuint v1) 
{
	reinterpret_cast<PFNGLUNIFORM2UIEXTPROC>(wglGetProcAddress("glUniform2uiEXT"))(location, v0, v1);
}

inline void glUniform3uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2) 
{
	reinterpret_cast<PFNGLUNIFORM3UIEXTPROC>(wglGetProcAddress("glUniform3uiEXT"))(location, v0, v1, v2);
}

inline void glUniform4uiEXT(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) 
{
	reinterpret_cast<PFNGLUNIFORM4UIEXTPROC>(wglGetProcAddress("glUniform4uiEXT"))(location, v0, v1, v2, v3);
}

inline void glUniform1uivEXT(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM1UIVEXTPROC>(wglGetProcAddress("glUniform1uivEXT"))(location, count, value);
}

inline void glUniform2uivEXT(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM2UIVEXTPROC>(wglGetProcAddress("glUniform2uivEXT"))(location, count, value);
}

inline void glUniform3uivEXT(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM3UIVEXTPROC>(wglGetProcAddress("glUniform3uivEXT"))(location, count, value);
}

inline void glUniform4uivEXT(GLint location, GLsizei count, const GLuint *value) 
{
	reinterpret_cast<PFNGLUNIFORM4UIVEXTPROC>(wglGetProcAddress("glUniform4uivEXT"))(location, count, value);
}

inline void glGetHistogramEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) 
{
	reinterpret_cast<PFNGLGETHISTOGRAMEXTPROC>(wglGetProcAddress("glGetHistogramEXT"))(target, reset, format, type, values);
}

inline void glGetHistogramParameterfvEXT(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERFVEXTPROC>(wglGetProcAddress("glGetHistogramParameterfvEXT"))(target, pname, params);
}

inline void glGetHistogramParameterivEXT(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETHISTOGRAMPARAMETERIVEXTPROC>(wglGetProcAddress("glGetHistogramParameterivEXT"))(target, pname, params);
}

inline void glGetMinmaxEXT(GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) 
{
	reinterpret_cast<PFNGLGETMINMAXEXTPROC>(wglGetProcAddress("glGetMinmaxEXT"))(target, reset, format, type, values);
}

inline void glGetMinmaxParameterfvEXT(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMINMAXPARAMETERFVEXTPROC>(wglGetProcAddress("glGetMinmaxParameterfvEXT"))(target, pname, params);
}

inline void glGetMinmaxParameterivEXT(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMINMAXPARAMETERIVEXTPROC>(wglGetProcAddress("glGetMinmaxParameterivEXT"))(target, pname, params);
}

inline void glHistogramEXT(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) 
{
	reinterpret_cast<PFNGLHISTOGRAMEXTPROC>(wglGetProcAddress("glHistogramEXT"))(target, width, internalformat, sink);
}

inline void glMinmaxEXT(GLenum target, GLenum internalformat, GLboolean sink) 
{
	reinterpret_cast<PFNGLMINMAXEXTPROC>(wglGetProcAddress("glMinmaxEXT"))(target, internalformat, sink);
}

inline void glResetHistogramEXT(GLenum target) 
{
	reinterpret_cast<PFNGLRESETHISTOGRAMEXTPROC>(wglGetProcAddress("glResetHistogramEXT"))(target);
}

inline void glResetMinmaxEXT(GLenum target) 
{
	reinterpret_cast<PFNGLRESETMINMAXEXTPROC>(wglGetProcAddress("glResetMinmaxEXT"))(target);
}

inline void glIndexFuncEXT(GLenum func, GLclampf ref) 
{
	reinterpret_cast<PFNGLINDEXFUNCEXTPROC>(wglGetProcAddress("glIndexFuncEXT"))(func, ref);
}

inline void glIndexMaterialEXT(GLenum face, GLenum mode) 
{
	reinterpret_cast<PFNGLINDEXMATERIALEXTPROC>(wglGetProcAddress("glIndexMaterialEXT"))(face, mode);
}

inline void glApplyTextureEXT(GLenum mode) 
{
	reinterpret_cast<PFNGLAPPLYTEXTUREEXTPROC>(wglGetProcAddress("glApplyTextureEXT"))(mode);
}

inline void glTextureLightEXT(GLenum pname) 
{
	reinterpret_cast<PFNGLTEXTURELIGHTEXTPROC>(wglGetProcAddress("glTextureLightEXT"))(pname);
}

inline void glTextureMaterialEXT(GLenum face, GLenum mode) 
{
	reinterpret_cast<PFNGLTEXTUREMATERIALEXTPROC>(wglGetProcAddress("glTextureMaterialEXT"))(face, mode);
}

inline void glMultiDrawArraysEXT(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) 
{
	reinterpret_cast<PFNGLMULTIDRAWARRAYSEXTPROC>(wglGetProcAddress("glMultiDrawArraysEXT"))(mode, first, count, primcount);
}

inline void glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSEXTPROC>(wglGetProcAddress("glMultiDrawElementsEXT"))(mode, count, type, indices, primcount);
}

inline void glSampleMaskEXT(GLclampf value, GLboolean invert) 
{
	reinterpret_cast<PFNGLSAMPLEMASKEXTPROC>(wglGetProcAddress("glSampleMaskEXT"))(value, invert);
}

inline void glSamplePatternEXT(GLenum pattern) 
{
	reinterpret_cast<PFNGLSAMPLEPATTERNEXTPROC>(wglGetProcAddress("glSamplePatternEXT"))(pattern);
}

inline void glColorTableEXT(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void *table) 
{
	reinterpret_cast<PFNGLCOLORTABLEEXTPROC>(wglGetProcAddress("glColorTableEXT"))(target, internalFormat, width, format, type, table);
}

inline void glGetColorTableEXT(GLenum target, GLenum format, GLenum type, void *data) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEEXTPROC>(wglGetProcAddress("glGetColorTableEXT"))(target, format, type, data);
}

inline void glGetColorTableParameterivEXT(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERIVEXTPROC>(wglGetProcAddress("glGetColorTableParameterivEXT"))(target, pname, params);
}

inline void glGetColorTableParameterfvEXT(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERFVEXTPROC>(wglGetProcAddress("glGetColorTableParameterfvEXT"))(target, pname, params);
}

inline void glPixelTransformParameteriEXT(GLenum target, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERIEXTPROC>(wglGetProcAddress("glPixelTransformParameteriEXT"))(target, pname, param);
}

inline void glPixelTransformParameterfEXT(GLenum target, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERFEXTPROC>(wglGetProcAddress("glPixelTransformParameterfEXT"))(target, pname, param);
}

inline void glPixelTransformParameterivEXT(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC>(wglGetProcAddress("glPixelTransformParameterivEXT"))(target, pname, params);
}

inline void glPixelTransformParameterfvEXT(GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC>(wglGetProcAddress("glPixelTransformParameterfvEXT"))(target, pname, params);
}

inline void glGetPixelTransformParameterivEXT(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC>(wglGetProcAddress("glGetPixelTransformParameterivEXT"))(target, pname, params);
}

inline void glGetPixelTransformParameterfvEXT(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC>(wglGetProcAddress("glGetPixelTransformParameterfvEXT"))(target, pname, params);
}

inline void glPointParameterfEXT(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFEXTPROC>(wglGetProcAddress("glPointParameterfEXT"))(pname, param);
}

inline void glPointParameterfvEXT(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFVEXTPROC>(wglGetProcAddress("glPointParameterfvEXT"))(pname, params);
}

inline void glPolygonOffsetEXT(GLfloat factor, GLfloat bias) 
{
	reinterpret_cast<PFNGLPOLYGONOFFSETEXTPROC>(wglGetProcAddress("glPolygonOffsetEXT"))(factor, bias);
}

inline void glPolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp) 
{
	reinterpret_cast<PFNGLPOLYGONOFFSETCLAMPEXTPROC>(wglGetProcAddress("glPolygonOffsetClampEXT"))(factor, units, clamp);
}

inline void glProvokingVertexEXT(GLenum mode) 
{
	reinterpret_cast<PFNGLPROVOKINGVERTEXEXTPROC>(wglGetProcAddress("glProvokingVertexEXT"))(mode);
}

inline void glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations) 
{
	reinterpret_cast<PFNGLRASTERSAMPLESEXTPROC>(wglGetProcAddress("glRasterSamplesEXT"))(samples, fixedsamplelocations);
}

inline void glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3BEXTPROC>(wglGetProcAddress("glSecondaryColor3bEXT"))(red, green, blue);
}

inline void glSecondaryColor3bvEXT(const GLbyte *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3BVEXTPROC>(wglGetProcAddress("glSecondaryColor3bvEXT"))(v);
}

inline void glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3DEXTPROC>(wglGetProcAddress("glSecondaryColor3dEXT"))(red, green, blue);
}

inline void glSecondaryColor3dvEXT(const GLdouble *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3DVEXTPROC>(wglGetProcAddress("glSecondaryColor3dvEXT"))(v);
}

inline void glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3FEXTPROC>(wglGetProcAddress("glSecondaryColor3fEXT"))(red, green, blue);
}

inline void glSecondaryColor3fvEXT(const GLfloat *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3FVEXTPROC>(wglGetProcAddress("glSecondaryColor3fvEXT"))(v);
}

inline void glSecondaryColor3iEXT(GLint red, GLint green, GLint blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3IEXTPROC>(wglGetProcAddress("glSecondaryColor3iEXT"))(red, green, blue);
}

inline void glSecondaryColor3ivEXT(const GLint *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3IVEXTPROC>(wglGetProcAddress("glSecondaryColor3ivEXT"))(v);
}

inline void glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3SEXTPROC>(wglGetProcAddress("glSecondaryColor3sEXT"))(red, green, blue);
}

inline void glSecondaryColor3svEXT(const GLshort *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3SVEXTPROC>(wglGetProcAddress("glSecondaryColor3svEXT"))(v);
}

inline void glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UBEXTPROC>(wglGetProcAddress("glSecondaryColor3ubEXT"))(red, green, blue);
}

inline void glSecondaryColor3ubvEXT(const GLubyte *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UBVEXTPROC>(wglGetProcAddress("glSecondaryColor3ubvEXT"))(v);
}

inline void glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UIEXTPROC>(wglGetProcAddress("glSecondaryColor3uiEXT"))(red, green, blue);
}

inline void glSecondaryColor3uivEXT(const GLuint *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3UIVEXTPROC>(wglGetProcAddress("glSecondaryColor3uivEXT"))(v);
}

inline void glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3USEXTPROC>(wglGetProcAddress("glSecondaryColor3usEXT"))(red, green, blue);
}

inline void glSecondaryColor3usvEXT(const GLushort *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3USVEXTPROC>(wglGetProcAddress("glSecondaryColor3usvEXT"))(v);
}

inline void glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLSECONDARYCOLORPOINTEREXTPROC>(wglGetProcAddress("glSecondaryColorPointerEXT"))(size, type, stride, pointer);
}

inline void glUseShaderProgramEXT(GLenum type, GLuint program) 
{
	reinterpret_cast<PFNGLUSESHADERPROGRAMEXTPROC>(wglGetProcAddress("glUseShaderProgramEXT"))(type, program);
}

inline void glActiveProgramEXT(GLuint program) 
{
	reinterpret_cast<PFNGLACTIVEPROGRAMEXTPROC>(wglGetProcAddress("glActiveProgramEXT"))(program);
}

inline GLuint glCreateShaderProgramEXT(GLenum type, const GLchar *string) 
{
	return reinterpret_cast<PFNGLCREATESHADERPROGRAMEXTPROC>(wglGetProcAddress("glCreateShaderProgramEXT"))(type, string);
}

inline void glBindImageTextureEXT(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format) 
{
	reinterpret_cast<PFNGLBINDIMAGETEXTUREEXTPROC>(wglGetProcAddress("glBindImageTextureEXT"))(index, texture, level, layered, layer, access, format);
}

inline void glMemoryBarrierEXT(GLbitfield barriers) 
{
	reinterpret_cast<PFNGLMEMORYBARRIEREXTPROC>(wglGetProcAddress("glMemoryBarrierEXT"))(barriers);
}

inline void glStencilClearTagEXT(GLsizei stencilTagBits, GLuint stencilClearTag) 
{
	reinterpret_cast<PFNGLSTENCILCLEARTAGEXTPROC>(wglGetProcAddress("glStencilClearTagEXT"))(stencilTagBits, stencilClearTag);
}

inline void glActiveStencilFaceEXT(GLenum face) 
{
	reinterpret_cast<PFNGLACTIVESTENCILFACEEXTPROC>(wglGetProcAddress("glActiveStencilFaceEXT"))(face);
}

inline void glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXSUBIMAGE1DEXTPROC>(wglGetProcAddress("glTexSubImage1DEXT"))(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXSUBIMAGE2DEXTPROC>(wglGetProcAddress("glTexSubImage2DEXT"))(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexImage3DEXT(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXIMAGE3DEXTPROC>(wglGetProcAddress("glTexImage3DEXT"))(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXSUBIMAGE3DEXTPROC>(wglGetProcAddress("glTexSubImage3DEXT"))(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glFramebufferTextureLayerEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC>(wglGetProcAddress("glFramebufferTextureLayerEXT"))(target, attachment, texture, level, layer);
}

inline void glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer) 
{
	reinterpret_cast<PFNGLTEXBUFFEREXTPROC>(wglGetProcAddress("glTexBufferEXT"))(target, internalformat, buffer);
}

inline void glTexParameterIivEXT(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLTEXPARAMETERIIVEXTPROC>(wglGetProcAddress("glTexParameterIivEXT"))(target, pname, params);
}

inline void glTexParameterIuivEXT(GLenum target, GLenum pname, const GLuint *params) 
{
	reinterpret_cast<PFNGLTEXPARAMETERIUIVEXTPROC>(wglGetProcAddress("glTexParameterIuivEXT"))(target, pname, params);
}

inline void glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTEXPARAMETERIIVEXTPROC>(wglGetProcAddress("glGetTexParameterIivEXT"))(target, pname, params);
}

inline void glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETTEXPARAMETERIUIVEXTPROC>(wglGetProcAddress("glGetTexParameterIuivEXT"))(target, pname, params);
}

inline void glClearColorIiEXT(GLint red, GLint green, GLint blue, GLint alpha) 
{
	reinterpret_cast<PFNGLCLEARCOLORIIEXTPROC>(wglGetProcAddress("glClearColorIiEXT"))(red, green, blue, alpha);
}

inline void glClearColorIuiEXT(GLuint red, GLuint green, GLuint blue, GLuint alpha) 
{
	reinterpret_cast<PFNGLCLEARCOLORIUIEXTPROC>(wglGetProcAddress("glClearColorIuiEXT"))(red, green, blue, alpha);
}

inline GLboolean glAreTexturesResidentEXT(GLsizei n, const GLuint *textures, GLboolean *residences) 
{
	return reinterpret_cast<PFNGLARETEXTURESRESIDENTEXTPROC>(wglGetProcAddress("glAreTexturesResidentEXT"))(n, textures, residences);
}

inline void glBindTextureEXT(GLenum target, GLuint texture) 
{
	reinterpret_cast<PFNGLBINDTEXTUREEXTPROC>(wglGetProcAddress("glBindTextureEXT"))(target, texture);
}

inline void glDeleteTexturesEXT(GLsizei n, const GLuint *textures) 
{
	reinterpret_cast<PFNGLDELETETEXTURESEXTPROC>(wglGetProcAddress("glDeleteTexturesEXT"))(n, textures);
}

inline void glGenTexturesEXT(GLsizei n, GLuint *textures) 
{
	reinterpret_cast<PFNGLGENTEXTURESEXTPROC>(wglGetProcAddress("glGenTexturesEXT"))(n, textures);
}

inline GLboolean glIsTextureEXT(GLuint texture) 
{
	return reinterpret_cast<PFNGLISTEXTUREEXTPROC>(wglGetProcAddress("glIsTextureEXT"))(texture);
}

inline void glPrioritizeTexturesEXT(GLsizei n, const GLuint *textures, const GLclampf *priorities) 
{
	reinterpret_cast<PFNGLPRIORITIZETEXTURESEXTPROC>(wglGetProcAddress("glPrioritizeTexturesEXT"))(n, textures, priorities);
}

inline void glTextureNormalEXT(GLenum mode) 
{
	reinterpret_cast<PFNGLTEXTURENORMALEXTPROC>(wglGetProcAddress("glTextureNormalEXT"))(mode);
}

inline void glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64 *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTI64VEXTPROC>(wglGetProcAddress("glGetQueryObjecti64vEXT"))(id, pname, params);
}

inline void glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64 *params) 
{
	reinterpret_cast<PFNGLGETQUERYOBJECTUI64VEXTPROC>(wglGetProcAddress("glGetQueryObjectui64vEXT"))(id, pname, params);
}

inline void glBeginTransformFeedbackEXT(GLenum primitiveMode) 
{
	reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKEXTPROC>(wglGetProcAddress("glBeginTransformFeedbackEXT"))(primitiveMode);
}

inline void glEndTransformFeedbackEXT(void) 
{
	reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKEXTPROC>(wglGetProcAddress("glEndTransformFeedbackEXT"))();
}

inline void glBindBufferRangeEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLBINDBUFFERRANGEEXTPROC>(wglGetProcAddress("glBindBufferRangeEXT"))(target, index, buffer, offset, size);
}

inline void glBindBufferOffsetEXT(GLenum target, GLuint index, GLuint buffer, GLintptr offset) 
{
	reinterpret_cast<PFNGLBINDBUFFEROFFSETEXTPROC>(wglGetProcAddress("glBindBufferOffsetEXT"))(target, index, buffer, offset);
}

inline void glBindBufferBaseEXT(GLenum target, GLuint index, GLuint buffer) 
{
	reinterpret_cast<PFNGLBINDBUFFERBASEEXTPROC>(wglGetProcAddress("glBindBufferBaseEXT"))(target, index, buffer);
}

inline void glTransformFeedbackVaryingsEXT(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) 
{
	reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC>(wglGetProcAddress("glTransformFeedbackVaryingsEXT"))(program, count, varyings, bufferMode);
}

inline void glGetTransformFeedbackVaryingEXT(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) 
{
	reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC>(wglGetProcAddress("glGetTransformFeedbackVaryingEXT"))(program, index, bufSize, length, size, type, name);
}

inline void glArrayElementEXT(GLint i) 
{
	reinterpret_cast<PFNGLARRAYELEMENTEXTPROC>(wglGetProcAddress("glArrayElementEXT"))(i);
}

inline void glColorPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) 
{
	reinterpret_cast<PFNGLCOLORPOINTEREXTPROC>(wglGetProcAddress("glColorPointerEXT"))(size, type, stride, count, pointer);
}

inline void glDrawArraysEXT(GLenum mode, GLint first, GLsizei count) 
{
	reinterpret_cast<PFNGLDRAWARRAYSEXTPROC>(wglGetProcAddress("glDrawArraysEXT"))(mode, first, count);
}

inline void glEdgeFlagPointerEXT(GLsizei stride, GLsizei count, const GLboolean *pointer) 
{
	reinterpret_cast<PFNGLEDGEFLAGPOINTEREXTPROC>(wglGetProcAddress("glEdgeFlagPointerEXT"))(stride, count, pointer);
}

inline void glGetPointervEXT(GLenum pname, void **params) 
{
	reinterpret_cast<PFNGLGETPOINTERVEXTPROC>(wglGetProcAddress("glGetPointervEXT"))(pname, params);
}

inline void glIndexPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void *pointer) 
{
	reinterpret_cast<PFNGLINDEXPOINTEREXTPROC>(wglGetProcAddress("glIndexPointerEXT"))(type, stride, count, pointer);
}

inline void glNormalPointerEXT(GLenum type, GLsizei stride, GLsizei count, const void *pointer) 
{
	reinterpret_cast<PFNGLNORMALPOINTEREXTPROC>(wglGetProcAddress("glNormalPointerEXT"))(type, stride, count, pointer);
}

inline void glTexCoordPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) 
{
	reinterpret_cast<PFNGLTEXCOORDPOINTEREXTPROC>(wglGetProcAddress("glTexCoordPointerEXT"))(size, type, stride, count, pointer);
}

inline void glVertexPointerEXT(GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXPOINTEREXTPROC>(wglGetProcAddress("glVertexPointerEXT"))(size, type, stride, count, pointer);
}

inline void glVertexAttribL1dEXT(GLuint index, GLdouble x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1DEXTPROC>(wglGetProcAddress("glVertexAttribL1dEXT"))(index, x);
}

inline void glVertexAttribL2dEXT(GLuint index, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2DEXTPROC>(wglGetProcAddress("glVertexAttribL2dEXT"))(index, x, y);
}

inline void glVertexAttribL3dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3DEXTPROC>(wglGetProcAddress("glVertexAttribL3dEXT"))(index, x, y, z);
}

inline void glVertexAttribL4dEXT(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4DEXTPROC>(wglGetProcAddress("glVertexAttribL4dEXT"))(index, x, y, z, w);
}

inline void glVertexAttribL1dvEXT(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1DVEXTPROC>(wglGetProcAddress("glVertexAttribL1dvEXT"))(index, v);
}

inline void glVertexAttribL2dvEXT(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2DVEXTPROC>(wglGetProcAddress("glVertexAttribL2dvEXT"))(index, v);
}

inline void glVertexAttribL3dvEXT(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3DVEXTPROC>(wglGetProcAddress("glVertexAttribL3dvEXT"))(index, v);
}

inline void glVertexAttribL4dvEXT(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4DVEXTPROC>(wglGetProcAddress("glVertexAttribL4dvEXT"))(index, v);
}

inline void glVertexAttribLPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBLPOINTEREXTPROC>(wglGetProcAddress("glVertexAttribLPointerEXT"))(index, size, type, stride, pointer);
}

inline void glGetVertexAttribLdvEXT(GLuint index, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBLDVEXTPROC>(wglGetProcAddress("glGetVertexAttribLdvEXT"))(index, pname, params);
}

inline void glBeginVertexShaderEXT(void) 
{
	reinterpret_cast<PFNGLBEGINVERTEXSHADEREXTPROC>(wglGetProcAddress("glBeginVertexShaderEXT"))();
}

inline void glEndVertexShaderEXT(void) 
{
	reinterpret_cast<PFNGLENDVERTEXSHADEREXTPROC>(wglGetProcAddress("glEndVertexShaderEXT"))();
}

inline void glBindVertexShaderEXT(GLuint id) 
{
	reinterpret_cast<PFNGLBINDVERTEXSHADEREXTPROC>(wglGetProcAddress("glBindVertexShaderEXT"))(id);
}

inline GLuint glGenVertexShadersEXT(GLuint range) 
{
	return reinterpret_cast<PFNGLGENVERTEXSHADERSEXTPROC>(wglGetProcAddress("glGenVertexShadersEXT"))(range);
}

inline void glDeleteVertexShaderEXT(GLuint id) 
{
	reinterpret_cast<PFNGLDELETEVERTEXSHADEREXTPROC>(wglGetProcAddress("glDeleteVertexShaderEXT"))(id);
}

inline void glShaderOp1EXT(GLenum op, GLuint res, GLuint arg1) 
{
	reinterpret_cast<PFNGLSHADEROP1EXTPROC>(wglGetProcAddress("glShaderOp1EXT"))(op, res, arg1);
}

inline void glShaderOp2EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2) 
{
	reinterpret_cast<PFNGLSHADEROP2EXTPROC>(wglGetProcAddress("glShaderOp2EXT"))(op, res, arg1, arg2);
}

inline void glShaderOp3EXT(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3) 
{
	reinterpret_cast<PFNGLSHADEROP3EXTPROC>(wglGetProcAddress("glShaderOp3EXT"))(op, res, arg1, arg2, arg3);
}

inline void glSwizzleEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) 
{
	reinterpret_cast<PFNGLSWIZZLEEXTPROC>(wglGetProcAddress("glSwizzleEXT"))(res, in, outX, outY, outZ, outW);
}

inline void glWriteMaskEXT(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) 
{
	reinterpret_cast<PFNGLWRITEMASKEXTPROC>(wglGetProcAddress("glWriteMaskEXT"))(res, in, outX, outY, outZ, outW);
}

inline void glInsertComponentEXT(GLuint res, GLuint src, GLuint num) 
{
	reinterpret_cast<PFNGLINSERTCOMPONENTEXTPROC>(wglGetProcAddress("glInsertComponentEXT"))(res, src, num);
}

inline void glExtractComponentEXT(GLuint res, GLuint src, GLuint num) 
{
	reinterpret_cast<PFNGLEXTRACTCOMPONENTEXTPROC>(wglGetProcAddress("glExtractComponentEXT"))(res, src, num);
}

inline GLuint glGenSymbolsEXT(GLenum datatype, GLenum storagetype, GLenum range, GLuint components) 
{
	return reinterpret_cast<PFNGLGENSYMBOLSEXTPROC>(wglGetProcAddress("glGenSymbolsEXT"))(datatype, storagetype, range, components);
}

inline void glSetInvariantEXT(GLuint id, GLenum type, const void *addr) 
{
	reinterpret_cast<PFNGLSETINVARIANTEXTPROC>(wglGetProcAddress("glSetInvariantEXT"))(id, type, addr);
}

inline void glSetLocalConstantEXT(GLuint id, GLenum type, const void *addr) 
{
	reinterpret_cast<PFNGLSETLOCALCONSTANTEXTPROC>(wglGetProcAddress("glSetLocalConstantEXT"))(id, type, addr);
}

inline void glVariantbvEXT(GLuint id, const GLbyte *addr) 
{
	reinterpret_cast<PFNGLVARIANTBVEXTPROC>(wglGetProcAddress("glVariantbvEXT"))(id, addr);
}

inline void glVariantsvEXT(GLuint id, const GLshort *addr) 
{
	reinterpret_cast<PFNGLVARIANTSVEXTPROC>(wglGetProcAddress("glVariantsvEXT"))(id, addr);
}

inline void glVariantivEXT(GLuint id, const GLint *addr) 
{
	reinterpret_cast<PFNGLVARIANTIVEXTPROC>(wglGetProcAddress("glVariantivEXT"))(id, addr);
}

inline void glVariantfvEXT(GLuint id, const GLfloat *addr) 
{
	reinterpret_cast<PFNGLVARIANTFVEXTPROC>(wglGetProcAddress("glVariantfvEXT"))(id, addr);
}

inline void glVariantdvEXT(GLuint id, const GLdouble *addr) 
{
	reinterpret_cast<PFNGLVARIANTDVEXTPROC>(wglGetProcAddress("glVariantdvEXT"))(id, addr);
}

inline void glVariantubvEXT(GLuint id, const GLubyte *addr) 
{
	reinterpret_cast<PFNGLVARIANTUBVEXTPROC>(wglGetProcAddress("glVariantubvEXT"))(id, addr);
}

inline void glVariantusvEXT(GLuint id, const GLushort *addr) 
{
	reinterpret_cast<PFNGLVARIANTUSVEXTPROC>(wglGetProcAddress("glVariantusvEXT"))(id, addr);
}

inline void glVariantuivEXT(GLuint id, const GLuint *addr) 
{
	reinterpret_cast<PFNGLVARIANTUIVEXTPROC>(wglGetProcAddress("glVariantuivEXT"))(id, addr);
}

inline void glVariantPointerEXT(GLuint id, GLenum type, GLuint stride, const void *addr) 
{
	reinterpret_cast<PFNGLVARIANTPOINTEREXTPROC>(wglGetProcAddress("glVariantPointerEXT"))(id, type, stride, addr);
}

inline void glEnableVariantClientStateEXT(GLuint id) 
{
	reinterpret_cast<PFNGLENABLEVARIANTCLIENTSTATEEXTPROC>(wglGetProcAddress("glEnableVariantClientStateEXT"))(id);
}

inline void glDisableVariantClientStateEXT(GLuint id) 
{
	reinterpret_cast<PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC>(wglGetProcAddress("glDisableVariantClientStateEXT"))(id);
}

inline GLuint glBindLightParameterEXT(GLenum light, GLenum value) 
{
	return reinterpret_cast<PFNGLBINDLIGHTPARAMETEREXTPROC>(wglGetProcAddress("glBindLightParameterEXT"))(light, value);
}

inline GLuint glBindMaterialParameterEXT(GLenum face, GLenum value) 
{
	return reinterpret_cast<PFNGLBINDMATERIALPARAMETEREXTPROC>(wglGetProcAddress("glBindMaterialParameterEXT"))(face, value);
}

inline GLuint glBindTexGenParameterEXT(GLenum unit, GLenum coord, GLenum value) 
{
	return reinterpret_cast<PFNGLBINDTEXGENPARAMETEREXTPROC>(wglGetProcAddress("glBindTexGenParameterEXT"))(unit, coord, value);
}

inline GLuint glBindTextureUnitParameterEXT(GLenum unit, GLenum value) 
{
	return reinterpret_cast<PFNGLBINDTEXTUREUNITPARAMETEREXTPROC>(wglGetProcAddress("glBindTextureUnitParameterEXT"))(unit, value);
}

inline GLuint glBindParameterEXT(GLenum value) 
{
	return reinterpret_cast<PFNGLBINDPARAMETEREXTPROC>(wglGetProcAddress("glBindParameterEXT"))(value);
}

inline GLboolean glIsVariantEnabledEXT(GLuint id, GLenum cap) 
{
	return reinterpret_cast<PFNGLISVARIANTENABLEDEXTPROC>(wglGetProcAddress("glIsVariantEnabledEXT"))(id, cap);
}

inline void glGetVariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data) 
{
	reinterpret_cast<PFNGLGETVARIANTBOOLEANVEXTPROC>(wglGetProcAddress("glGetVariantBooleanvEXT"))(id, value, data);
}

inline void glGetVariantIntegervEXT(GLuint id, GLenum value, GLint *data) 
{
	reinterpret_cast<PFNGLGETVARIANTINTEGERVEXTPROC>(wglGetProcAddress("glGetVariantIntegervEXT"))(id, value, data);
}

inline void glGetVariantFloatvEXT(GLuint id, GLenum value, GLfloat *data) 
{
	reinterpret_cast<PFNGLGETVARIANTFLOATVEXTPROC>(wglGetProcAddress("glGetVariantFloatvEXT"))(id, value, data);
}

inline void glGetVariantPointervEXT(GLuint id, GLenum value, void **data) 
{
	reinterpret_cast<PFNGLGETVARIANTPOINTERVEXTPROC>(wglGetProcAddress("glGetVariantPointervEXT"))(id, value, data);
}

inline void glGetInvariantBooleanvEXT(GLuint id, GLenum value, GLboolean *data) 
{
	reinterpret_cast<PFNGLGETINVARIANTBOOLEANVEXTPROC>(wglGetProcAddress("glGetInvariantBooleanvEXT"))(id, value, data);
}

inline void glGetInvariantIntegervEXT(GLuint id, GLenum value, GLint *data) 
{
	reinterpret_cast<PFNGLGETINVARIANTINTEGERVEXTPROC>(wglGetProcAddress("glGetInvariantIntegervEXT"))(id, value, data);
}

inline void glGetInvariantFloatvEXT(GLuint id, GLenum value, GLfloat *data) 
{
	reinterpret_cast<PFNGLGETINVARIANTFLOATVEXTPROC>(wglGetProcAddress("glGetInvariantFloatvEXT"))(id, value, data);
}

inline void glGetLocalConstantBooleanvEXT(GLuint id, GLenum value, GLboolean *data) 
{
	reinterpret_cast<PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC>(wglGetProcAddress("glGetLocalConstantBooleanvEXT"))(id, value, data);
}

inline void glGetLocalConstantIntegervEXT(GLuint id, GLenum value, GLint *data) 
{
	reinterpret_cast<PFNGLGETLOCALCONSTANTINTEGERVEXTPROC>(wglGetProcAddress("glGetLocalConstantIntegervEXT"))(id, value, data);
}

inline void glGetLocalConstantFloatvEXT(GLuint id, GLenum value, GLfloat *data) 
{
	reinterpret_cast<PFNGLGETLOCALCONSTANTFLOATVEXTPROC>(wglGetProcAddress("glGetLocalConstantFloatvEXT"))(id, value, data);
}

inline void glVertexWeightfEXT(GLfloat weight) 
{
	reinterpret_cast<PFNGLVERTEXWEIGHTFEXTPROC>(wglGetProcAddress("glVertexWeightfEXT"))(weight);
}

inline void glVertexWeightfvEXT(const GLfloat *weight) 
{
	reinterpret_cast<PFNGLVERTEXWEIGHTFVEXTPROC>(wglGetProcAddress("glVertexWeightfvEXT"))(weight);
}

inline void glVertexWeightPointerEXT(GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXWEIGHTPOINTEREXTPROC>(wglGetProcAddress("glVertexWeightPointerEXT"))(size, type, stride, pointer);
}

inline void glWindowRectanglesEXT(GLenum mode, GLsizei count, const GLint *box) 
{
	reinterpret_cast<PFNGLWINDOWRECTANGLESEXTPROC>(wglGetProcAddress("glWindowRectanglesEXT"))(mode, count, box);
}

inline GLsync glImportSyncEXT(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags) 
{
	return reinterpret_cast<PFNGLIMPORTSYNCEXTPROC>(wglGetProcAddress("glImportSyncEXT"))(external_sync_type, external_sync, flags);
}

inline void glFrameTerminatorGREMEDY(void) 
{
	reinterpret_cast<PFNGLFRAMETERMINATORGREMEDYPROC>(wglGetProcAddress("glFrameTerminatorGREMEDY"))();
}

inline void glStringMarkerGREMEDY(GLsizei len, const void *string) 
{
	reinterpret_cast<PFNGLSTRINGMARKERGREMEDYPROC>(wglGetProcAddress("glStringMarkerGREMEDY"))(len, string);
}

inline void glImageTransformParameteriHP(GLenum target, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERIHPPROC>(wglGetProcAddress("glImageTransformParameteriHP"))(target, pname, param);
}

inline void glImageTransformParameterfHP(GLenum target, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERFHPPROC>(wglGetProcAddress("glImageTransformParameterfHP"))(target, pname, param);
}

inline void glImageTransformParameterivHP(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERIVHPPROC>(wglGetProcAddress("glImageTransformParameterivHP"))(target, pname, params);
}

inline void glImageTransformParameterfvHP(GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLIMAGETRANSFORMPARAMETERFVHPPROC>(wglGetProcAddress("glImageTransformParameterfvHP"))(target, pname, params);
}

inline void glGetImageTransformParameterivHP(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC>(wglGetProcAddress("glGetImageTransformParameterivHP"))(target, pname, params);
}

inline void glGetImageTransformParameterfvHP(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC>(wglGetProcAddress("glGetImageTransformParameterfvHP"))(target, pname, params);
}

inline void glMultiModeDrawArraysIBM(const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride) 
{
	reinterpret_cast<PFNGLMULTIMODEDRAWARRAYSIBMPROC>(wglGetProcAddress("glMultiModeDrawArraysIBM"))(mode, first, count, primcount, modestride);
}

inline void glMultiModeDrawElementsIBM(const GLenum *mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, GLint modestride) 
{
	reinterpret_cast<PFNGLMULTIMODEDRAWELEMENTSIBMPROC>(wglGetProcAddress("glMultiModeDrawElementsIBM"))(mode, count, type, indices, primcount, modestride);
}

inline void glFlushStaticDataIBM(GLenum target) 
{
	reinterpret_cast<PFNGLFLUSHSTATICDATAIBMPROC>(wglGetProcAddress("glFlushStaticDataIBM"))(target);
}

inline void glColorPointerListIBM(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLCOLORPOINTERLISTIBMPROC>(wglGetProcAddress("glColorPointerListIBM"))(size, type, stride, pointer, ptrstride);
}

inline void glSecondaryColorPointerListIBM(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLSECONDARYCOLORPOINTERLISTIBMPROC>(wglGetProcAddress("glSecondaryColorPointerListIBM"))(size, type, stride, pointer, ptrstride);
}

inline void glEdgeFlagPointerListIBM(GLint stride, const GLboolean **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLEDGEFLAGPOINTERLISTIBMPROC>(wglGetProcAddress("glEdgeFlagPointerListIBM"))(stride, pointer, ptrstride);
}

inline void glFogCoordPointerListIBM(GLenum type, GLint stride, const void **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLFOGCOORDPOINTERLISTIBMPROC>(wglGetProcAddress("glFogCoordPointerListIBM"))(type, stride, pointer, ptrstride);
}

inline void glIndexPointerListIBM(GLenum type, GLint stride, const void **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLINDEXPOINTERLISTIBMPROC>(wglGetProcAddress("glIndexPointerListIBM"))(type, stride, pointer, ptrstride);
}

inline void glNormalPointerListIBM(GLenum type, GLint stride, const void **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLNORMALPOINTERLISTIBMPROC>(wglGetProcAddress("glNormalPointerListIBM"))(type, stride, pointer, ptrstride);
}

inline void glTexCoordPointerListIBM(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLTEXCOORDPOINTERLISTIBMPROC>(wglGetProcAddress("glTexCoordPointerListIBM"))(size, type, stride, pointer, ptrstride);
}

inline void glVertexPointerListIBM(GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) 
{
	reinterpret_cast<PFNGLVERTEXPOINTERLISTIBMPROC>(wglGetProcAddress("glVertexPointerListIBM"))(size, type, stride, pointer, ptrstride);
}

inline void glBlendFuncSeparateINGR(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) 
{
	reinterpret_cast<PFNGLBLENDFUNCSEPARATEINGRPROC>(wglGetProcAddress("glBlendFuncSeparateINGR"))(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glApplyFramebufferAttachmentCMAAINTEL(void) 
{
	reinterpret_cast<PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC>(wglGetProcAddress("glApplyFramebufferAttachmentCMAAINTEL"))();
}

inline void glSyncTextureINTEL(GLuint texture) 
{
	reinterpret_cast<PFNGLSYNCTEXTUREINTELPROC>(wglGetProcAddress("glSyncTextureINTEL"))(texture);
}

inline void glUnmapTexture2DINTEL(GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLUNMAPTEXTURE2DINTELPROC>(wglGetProcAddress("glUnmapTexture2DINTEL"))(texture, level);
}

inline void glVertexPointervINTEL(GLint size, GLenum type, const void **pointer) 
{
	reinterpret_cast<PFNGLVERTEXPOINTERVINTELPROC>(wglGetProcAddress("glVertexPointervINTEL"))(size, type, pointer);
}

inline void glNormalPointervINTEL(GLenum type, const void **pointer) 
{
	reinterpret_cast<PFNGLNORMALPOINTERVINTELPROC>(wglGetProcAddress("glNormalPointervINTEL"))(type, pointer);
}

inline void glColorPointervINTEL(GLint size, GLenum type, const void **pointer) 
{
	reinterpret_cast<PFNGLCOLORPOINTERVINTELPROC>(wglGetProcAddress("glColorPointervINTEL"))(size, type, pointer);
}

inline void glTexCoordPointervINTEL(GLint size, GLenum type, const void **pointer) 
{
	reinterpret_cast<PFNGLTEXCOORDPOINTERVINTELPROC>(wglGetProcAddress("glTexCoordPointervINTEL"))(size, type, pointer);
}

inline void glBeginPerfQueryINTEL(GLuint queryHandle) 
{
	reinterpret_cast<PFNGLBEGINPERFQUERYINTELPROC>(wglGetProcAddress("glBeginPerfQueryINTEL"))(queryHandle);
}

inline void glCreatePerfQueryINTEL(GLuint queryId, GLuint *queryHandle) 
{
	reinterpret_cast<PFNGLCREATEPERFQUERYINTELPROC>(wglGetProcAddress("glCreatePerfQueryINTEL"))(queryId, queryHandle);
}

inline void glDeletePerfQueryINTEL(GLuint queryHandle) 
{
	reinterpret_cast<PFNGLDELETEPERFQUERYINTELPROC>(wglGetProcAddress("glDeletePerfQueryINTEL"))(queryHandle);
}

inline void glEndPerfQueryINTEL(GLuint queryHandle) 
{
	reinterpret_cast<PFNGLENDPERFQUERYINTELPROC>(wglGetProcAddress("glEndPerfQueryINTEL"))(queryHandle);
}

inline void glGetFirstPerfQueryIdINTEL(GLuint *queryId) 
{
	reinterpret_cast<PFNGLGETFIRSTPERFQUERYIDINTELPROC>(wglGetProcAddress("glGetFirstPerfQueryIdINTEL"))(queryId);
}

inline void glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint *nextQueryId) 
{
	reinterpret_cast<PFNGLGETNEXTPERFQUERYIDINTELPROC>(wglGetProcAddress("glGetNextPerfQueryIdINTEL"))(queryId, nextQueryId);
}

inline void glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue) 
{
	reinterpret_cast<PFNGLGETPERFCOUNTERINFOINTELPROC>(wglGetProcAddress("glGetPerfCounterInfoINTEL"))(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}

inline void glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid *data, GLuint *bytesWritten) 
{
	reinterpret_cast<PFNGLGETPERFQUERYDATAINTELPROC>(wglGetProcAddress("glGetPerfQueryDataINTEL"))(queryHandle, flags, dataSize, data, bytesWritten);
}

inline void glGetPerfQueryIdByNameINTEL(GLchar *queryName, GLuint *queryId) 
{
	reinterpret_cast<PFNGLGETPERFQUERYIDBYNAMEINTELPROC>(wglGetProcAddress("glGetPerfQueryIdByNameINTEL"))(queryName, queryId);
}

inline void glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask) 
{
	reinterpret_cast<PFNGLGETPERFQUERYINFOINTELPROC>(wglGetProcAddress("glGetPerfQueryInfoINTEL"))(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}

inline void glResizeBuffersMESA(void) 
{
	reinterpret_cast<PFNGLRESIZEBUFFERSMESAPROC>(wglGetProcAddress("glResizeBuffersMESA"))();
}

inline void glWindowPos2dMESA(GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2DMESAPROC>(wglGetProcAddress("glWindowPos2dMESA"))(x, y);
}

inline void glWindowPos2dvMESA(const GLdouble *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2DVMESAPROC>(wglGetProcAddress("glWindowPos2dvMESA"))(v);
}

inline void glWindowPos2fMESA(GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2FMESAPROC>(wglGetProcAddress("glWindowPos2fMESA"))(x, y);
}

inline void glWindowPos2fvMESA(const GLfloat *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2FVMESAPROC>(wglGetProcAddress("glWindowPos2fvMESA"))(v);
}

inline void glWindowPos2iMESA(GLint x, GLint y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2IMESAPROC>(wglGetProcAddress("glWindowPos2iMESA"))(x, y);
}

inline void glWindowPos2ivMESA(const GLint *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2IVMESAPROC>(wglGetProcAddress("glWindowPos2ivMESA"))(v);
}

inline void glWindowPos2sMESA(GLshort x, GLshort y) 
{
	reinterpret_cast<PFNGLWINDOWPOS2SMESAPROC>(wglGetProcAddress("glWindowPos2sMESA"))(x, y);
}

inline void glWindowPos2svMESA(const GLshort *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS2SVMESAPROC>(wglGetProcAddress("glWindowPos2svMESA"))(v);
}

inline void glWindowPos3dMESA(GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3DMESAPROC>(wglGetProcAddress("glWindowPos3dMESA"))(x, y, z);
}

inline void glWindowPos3dvMESA(const GLdouble *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3DVMESAPROC>(wglGetProcAddress("glWindowPos3dvMESA"))(v);
}

inline void glWindowPos3fMESA(GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3FMESAPROC>(wglGetProcAddress("glWindowPos3fMESA"))(x, y, z);
}

inline void glWindowPos3fvMESA(const GLfloat *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3FVMESAPROC>(wglGetProcAddress("glWindowPos3fvMESA"))(v);
}

inline void glWindowPos3iMESA(GLint x, GLint y, GLint z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3IMESAPROC>(wglGetProcAddress("glWindowPos3iMESA"))(x, y, z);
}

inline void glWindowPos3ivMESA(const GLint *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3IVMESAPROC>(wglGetProcAddress("glWindowPos3ivMESA"))(v);
}

inline void glWindowPos3sMESA(GLshort x, GLshort y, GLshort z) 
{
	reinterpret_cast<PFNGLWINDOWPOS3SMESAPROC>(wglGetProcAddress("glWindowPos3sMESA"))(x, y, z);
}

inline void glWindowPos3svMESA(const GLshort *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS3SVMESAPROC>(wglGetProcAddress("glWindowPos3svMESA"))(v);
}

inline void glWindowPos4dMESA(GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLWINDOWPOS4DMESAPROC>(wglGetProcAddress("glWindowPos4dMESA"))(x, y, z, w);
}

inline void glWindowPos4dvMESA(const GLdouble *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS4DVMESAPROC>(wglGetProcAddress("glWindowPos4dvMESA"))(v);
}

inline void glWindowPos4fMESA(GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLWINDOWPOS4FMESAPROC>(wglGetProcAddress("glWindowPos4fMESA"))(x, y, z, w);
}

inline void glWindowPos4fvMESA(const GLfloat *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS4FVMESAPROC>(wglGetProcAddress("glWindowPos4fvMESA"))(v);
}

inline void glWindowPos4iMESA(GLint x, GLint y, GLint z, GLint w) 
{
	reinterpret_cast<PFNGLWINDOWPOS4IMESAPROC>(wglGetProcAddress("glWindowPos4iMESA"))(x, y, z, w);
}

inline void glWindowPos4ivMESA(const GLint *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS4IVMESAPROC>(wglGetProcAddress("glWindowPos4ivMESA"))(v);
}

inline void glWindowPos4sMESA(GLshort x, GLshort y, GLshort z, GLshort w) 
{
	reinterpret_cast<PFNGLWINDOWPOS4SMESAPROC>(wglGetProcAddress("glWindowPos4sMESA"))(x, y, z, w);
}

inline void glWindowPos4svMESA(const GLshort *v) 
{
	reinterpret_cast<PFNGLWINDOWPOS4SVMESAPROC>(wglGetProcAddress("glWindowPos4svMESA"))(v);
}

inline void glBeginConditionalRenderNVX(GLuint id) 
{
	reinterpret_cast<PFNGLBEGINCONDITIONALRENDERNVXPROC>(wglGetProcAddress("glBeginConditionalRenderNVX"))(id);
}

inline void glEndConditionalRenderNVX(void) 
{
	reinterpret_cast<PFNGLENDCONDITIONALRENDERNVXPROC>(wglGetProcAddress("glEndConditionalRenderNVX"))();
}

inline void glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) 
{
	reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC>(wglGetProcAddress("glMultiDrawArraysIndirectBindlessNV"))(mode, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC>(wglGetProcAddress("glMultiDrawElementsIndirectBindlessNV"))(mode, type, indirect, drawCount, stride, vertexBufferCount);
}

inline void glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) 
{
	reinterpret_cast<PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC>(wglGetProcAddress("glMultiDrawArraysIndirectBindlessCountNV"))(mode, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

inline void glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) 
{
	reinterpret_cast<PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC>(wglGetProcAddress("glMultiDrawElementsIndirectBindlessCountNV"))(mode, type, indirect, drawCount, maxDrawCount, stride, vertexBufferCount);
}

inline GLuint64 glGetTextureHandleNV(GLuint texture) 
{
	return reinterpret_cast<PFNGLGETTEXTUREHANDLENVPROC>(wglGetProcAddress("glGetTextureHandleNV"))(texture);
}

inline GLuint64 glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler) 
{
	return reinterpret_cast<PFNGLGETTEXTURESAMPLERHANDLENVPROC>(wglGetProcAddress("glGetTextureSamplerHandleNV"))(texture, sampler);
}

inline void glMakeTextureHandleResidentNV(GLuint64 handle) 
{
	reinterpret_cast<PFNGLMAKETEXTUREHANDLERESIDENTNVPROC>(wglGetProcAddress("glMakeTextureHandleResidentNV"))(handle);
}

inline void glMakeTextureHandleNonResidentNV(GLuint64 handle) 
{
	reinterpret_cast<PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC>(wglGetProcAddress("glMakeTextureHandleNonResidentNV"))(handle);
}

inline GLuint64 glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) 
{
	return reinterpret_cast<PFNGLGETIMAGEHANDLENVPROC>(wglGetProcAddress("glGetImageHandleNV"))(texture, level, layered, layer, format);
}

inline void glMakeImageHandleResidentNV(GLuint64 handle, GLenum access) 
{
	reinterpret_cast<PFNGLMAKEIMAGEHANDLERESIDENTNVPROC>(wglGetProcAddress("glMakeImageHandleResidentNV"))(handle, access);
}

inline void glMakeImageHandleNonResidentNV(GLuint64 handle) 
{
	reinterpret_cast<PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC>(wglGetProcAddress("glMakeImageHandleNonResidentNV"))(handle);
}

inline void glUniformHandleui64NV(GLint location, GLuint64 value) 
{
	reinterpret_cast<PFNGLUNIFORMHANDLEUI64NVPROC>(wglGetProcAddress("glUniformHandleui64NV"))(location, value);
}

inline void glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 *value) 
{
	reinterpret_cast<PFNGLUNIFORMHANDLEUI64VNVPROC>(wglGetProcAddress("glUniformHandleui64vNV"))(location, count, value);
}

inline void glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC>(wglGetProcAddress("glProgramUniformHandleui64NV"))(program, location, value);
}

inline void glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 *values) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC>(wglGetProcAddress("glProgramUniformHandleui64vNV"))(program, location, count, values);
}

inline GLboolean glIsTextureHandleResidentNV(GLuint64 handle) 
{
	return reinterpret_cast<PFNGLISTEXTUREHANDLERESIDENTNVPROC>(wglGetProcAddress("glIsTextureHandleResidentNV"))(handle);
}

inline GLboolean glIsImageHandleResidentNV(GLuint64 handle) 
{
	return reinterpret_cast<PFNGLISIMAGEHANDLERESIDENTNVPROC>(wglGetProcAddress("glIsImageHandleResidentNV"))(handle);
}

inline void glBlendParameteriNV(GLenum pname, GLint value) 
{
	reinterpret_cast<PFNGLBLENDPARAMETERINVPROC>(wglGetProcAddress("glBlendParameteriNV"))(pname, value);
}

inline void glBlendBarrierNV(void) 
{
	reinterpret_cast<PFNGLBLENDBARRIERNVPROC>(wglGetProcAddress("glBlendBarrierNV"))();
}

inline void glViewportPositionWScaleNV(GLuint index, GLfloat xcoeff, GLfloat ycoeff) 
{
	reinterpret_cast<PFNGLVIEWPORTPOSITIONWSCALENVPROC>(wglGetProcAddress("glViewportPositionWScaleNV"))(index, xcoeff, ycoeff);
}

inline void glCreateStatesNV(GLsizei n, GLuint *states) 
{
	reinterpret_cast<PFNGLCREATESTATESNVPROC>(wglGetProcAddress("glCreateStatesNV"))(n, states);
}

inline void glDeleteStatesNV(GLsizei n, const GLuint *states) 
{
	reinterpret_cast<PFNGLDELETESTATESNVPROC>(wglGetProcAddress("glDeleteStatesNV"))(n, states);
}

inline GLboolean glIsStateNV(GLuint state) 
{
	return reinterpret_cast<PFNGLISSTATENVPROC>(wglGetProcAddress("glIsStateNV"))(state);
}

inline void glStateCaptureNV(GLuint state, GLenum mode) 
{
	reinterpret_cast<PFNGLSTATECAPTURENVPROC>(wglGetProcAddress("glStateCaptureNV"))(state, mode);
}

inline GLuint glGetCommandHeaderNV(GLenum tokenID, GLuint size) 
{
	return reinterpret_cast<PFNGLGETCOMMANDHEADERNVPROC>(wglGetProcAddress("glGetCommandHeaderNV"))(tokenID, size);
}

inline GLushort glGetStageIndexNV(GLenum shadertype) 
{
	return reinterpret_cast<PFNGLGETSTAGEINDEXNVPROC>(wglGetProcAddress("glGetStageIndexNV"))(shadertype);
}

inline void glDrawCommandsNV(GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count) 
{
	reinterpret_cast<PFNGLDRAWCOMMANDSNVPROC>(wglGetProcAddress("glDrawCommandsNV"))(primitiveMode, buffer, indirects, sizes, count);
}

inline void glDrawCommandsAddressNV(GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count) 
{
	reinterpret_cast<PFNGLDRAWCOMMANDSADDRESSNVPROC>(wglGetProcAddress("glDrawCommandsAddressNV"))(primitiveMode, indirects, sizes, count);
}

inline void glDrawCommandsStatesNV(GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) 
{
	reinterpret_cast<PFNGLDRAWCOMMANDSSTATESNVPROC>(wglGetProcAddress("glDrawCommandsStatesNV"))(buffer, indirects, sizes, states, fbos, count);
}

inline void glDrawCommandsStatesAddressNV(const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) 
{
	reinterpret_cast<PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC>(wglGetProcAddress("glDrawCommandsStatesAddressNV"))(indirects, sizes, states, fbos, count);
}

inline void glCreateCommandListsNV(GLsizei n, GLuint *lists) 
{
	reinterpret_cast<PFNGLCREATECOMMANDLISTSNVPROC>(wglGetProcAddress("glCreateCommandListsNV"))(n, lists);
}

inline void glDeleteCommandListsNV(GLsizei n, const GLuint *lists) 
{
	reinterpret_cast<PFNGLDELETECOMMANDLISTSNVPROC>(wglGetProcAddress("glDeleteCommandListsNV"))(n, lists);
}

inline GLboolean glIsCommandListNV(GLuint list) 
{
	return reinterpret_cast<PFNGLISCOMMANDLISTNVPROC>(wglGetProcAddress("glIsCommandListNV"))(list);
}

inline void glListDrawCommandsStatesClientNV(GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) 
{
	reinterpret_cast<PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC>(wglGetProcAddress("glListDrawCommandsStatesClientNV"))(list, segment, indirects, sizes, states, fbos, count);
}

inline void glCommandListSegmentsNV(GLuint list, GLuint segments) 
{
	reinterpret_cast<PFNGLCOMMANDLISTSEGMENTSNVPROC>(wglGetProcAddress("glCommandListSegmentsNV"))(list, segments);
}

inline void glCompileCommandListNV(GLuint list) 
{
	reinterpret_cast<PFNGLCOMPILECOMMANDLISTNVPROC>(wglGetProcAddress("glCompileCommandListNV"))(list);
}

inline void glCallCommandListNV(GLuint list) 
{
	reinterpret_cast<PFNGLCALLCOMMANDLISTNVPROC>(wglGetProcAddress("glCallCommandListNV"))(list);
}

inline void glBeginConditionalRenderNV(GLuint id, GLenum mode) 
{
	reinterpret_cast<PFNGLBEGINCONDITIONALRENDERNVPROC>(wglGetProcAddress("glBeginConditionalRenderNV"))(id, mode);
}

inline void glEndConditionalRenderNV(void) 
{
	reinterpret_cast<PFNGLENDCONDITIONALRENDERNVPROC>(wglGetProcAddress("glEndConditionalRenderNV"))();
}

inline void glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits) 
{
	reinterpret_cast<PFNGLSUBPIXELPRECISIONBIASNVPROC>(wglGetProcAddress("glSubpixelPrecisionBiasNV"))(xbits, ybits);
}

inline void glConservativeRasterParameterfNV(GLenum pname, GLfloat value) 
{
	reinterpret_cast<PFNGLCONSERVATIVERASTERPARAMETERFNVPROC>(wglGetProcAddress("glConservativeRasterParameterfNV"))(pname, value);
}

inline void glConservativeRasterParameteriNV(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLCONSERVATIVERASTERPARAMETERINVPROC>(wglGetProcAddress("glConservativeRasterParameteriNV"))(pname, param);
}

inline void glCopyImageSubDataNV(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth) 
{
	reinterpret_cast<PFNGLCOPYIMAGESUBDATANVPROC>(wglGetProcAddress("glCopyImageSubDataNV"))(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

inline void glDepthRangedNV(GLdouble zNear, GLdouble zFar) 
{
	reinterpret_cast<PFNGLDEPTHRANGEDNVPROC>(wglGetProcAddress("glDepthRangedNV"))(zNear, zFar);
}

inline void glClearDepthdNV(GLdouble depth) 
{
	reinterpret_cast<PFNGLCLEARDEPTHDNVPROC>(wglGetProcAddress("glClearDepthdNV"))(depth);
}

inline void glDepthBoundsdNV(GLdouble zmin, GLdouble zmax) 
{
	reinterpret_cast<PFNGLDEPTHBOUNDSDNVPROC>(wglGetProcAddress("glDepthBoundsdNV"))(zmin, zmax);
}

inline void glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) 
{
	reinterpret_cast<PFNGLDRAWTEXTURENVPROC>(wglGetProcAddress("glDrawTextureNV"))(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

inline void glMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void *points) 
{
	reinterpret_cast<PFNGLMAPCONTROLPOINTSNVPROC>(wglGetProcAddress("glMapControlPointsNV"))(target, index, type, ustride, vstride, uorder, vorder, packed, points);
}

inline void glMapParameterivNV(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLMAPPARAMETERIVNVPROC>(wglGetProcAddress("glMapParameterivNV"))(target, pname, params);
}

inline void glMapParameterfvNV(GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLMAPPARAMETERFVNVPROC>(wglGetProcAddress("glMapParameterfvNV"))(target, pname, params);
}

inline void glGetMapControlPointsNV(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void *points) 
{
	reinterpret_cast<PFNGLGETMAPCONTROLPOINTSNVPROC>(wglGetProcAddress("glGetMapControlPointsNV"))(target, index, type, ustride, vstride, packed, points);
}

inline void glGetMapParameterivNV(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMAPPARAMETERIVNVPROC>(wglGetProcAddress("glGetMapParameterivNV"))(target, pname, params);
}

inline void glGetMapParameterfvNV(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMAPPARAMETERFVNVPROC>(wglGetProcAddress("glGetMapParameterfvNV"))(target, pname, params);
}

inline void glGetMapAttribParameterivNV(GLenum target, GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETMAPATTRIBPARAMETERIVNVPROC>(wglGetProcAddress("glGetMapAttribParameterivNV"))(target, index, pname, params);
}

inline void glGetMapAttribParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETMAPATTRIBPARAMETERFVNVPROC>(wglGetProcAddress("glGetMapAttribParameterfvNV"))(target, index, pname, params);
}

inline void glEvalMapsNV(GLenum target, GLenum mode) 
{
	reinterpret_cast<PFNGLEVALMAPSNVPROC>(wglGetProcAddress("glEvalMapsNV"))(target, mode);
}

inline void glGetMultisamplefvNV(GLenum pname, GLuint index, GLfloat *val) 
{
	reinterpret_cast<PFNGLGETMULTISAMPLEFVNVPROC>(wglGetProcAddress("glGetMultisamplefvNV"))(pname, index, val);
}

inline void glSampleMaskIndexedNV(GLuint index, GLbitfield mask) 
{
	reinterpret_cast<PFNGLSAMPLEMASKINDEXEDNVPROC>(wglGetProcAddress("glSampleMaskIndexedNV"))(index, mask);
}

inline void glTexRenderbufferNV(GLenum target, GLuint renderbuffer) 
{
	reinterpret_cast<PFNGLTEXRENDERBUFFERNVPROC>(wglGetProcAddress("glTexRenderbufferNV"))(target, renderbuffer);
}

inline void glDeleteFencesNV(GLsizei n, const GLuint *fences) 
{
	reinterpret_cast<PFNGLDELETEFENCESNVPROC>(wglGetProcAddress("glDeleteFencesNV"))(n, fences);
}

inline void glGenFencesNV(GLsizei n, GLuint *fences) 
{
	reinterpret_cast<PFNGLGENFENCESNVPROC>(wglGetProcAddress("glGenFencesNV"))(n, fences);
}

inline GLboolean glIsFenceNV(GLuint fence) 
{
	return reinterpret_cast<PFNGLISFENCENVPROC>(wglGetProcAddress("glIsFenceNV"))(fence);
}

inline GLboolean glTestFenceNV(GLuint fence) 
{
	return reinterpret_cast<PFNGLTESTFENCENVPROC>(wglGetProcAddress("glTestFenceNV"))(fence);
}

inline void glGetFenceivNV(GLuint fence, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFENCEIVNVPROC>(wglGetProcAddress("glGetFenceivNV"))(fence, pname, params);
}

inline void glFinishFenceNV(GLuint fence) 
{
	reinterpret_cast<PFNGLFINISHFENCENVPROC>(wglGetProcAddress("glFinishFenceNV"))(fence);
}

inline void glSetFenceNV(GLuint fence, GLenum condition) 
{
	reinterpret_cast<PFNGLSETFENCENVPROC>(wglGetProcAddress("glSetFenceNV"))(fence, condition);
}

inline void glFragmentCoverageColorNV(GLuint color) 
{
	reinterpret_cast<PFNGLFRAGMENTCOVERAGECOLORNVPROC>(wglGetProcAddress("glFragmentCoverageColorNV"))(color);
}

inline void glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4FNVPROC>(wglGetProcAddress("glProgramNamedParameter4fNV"))(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v) 
{
	reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC>(wglGetProcAddress("glProgramNamedParameter4fvNV"))(id, len, name, v);
}

inline void glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4DNVPROC>(wglGetProcAddress("glProgramNamedParameter4dNV"))(id, len, name, x, y, z, w);
}

inline void glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v) 
{
	reinterpret_cast<PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC>(wglGetProcAddress("glProgramNamedParameter4dvNV"))(id, len, name, v);
}

inline void glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte *name, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC>(wglGetProcAddress("glGetProgramNamedParameterfvNV"))(id, len, name, params);
}

inline void glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte *name, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC>(wglGetProcAddress("glGetProgramNamedParameterdvNV"))(id, len, name, params);
}

inline void glCoverageModulationTableNV(GLsizei n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLCOVERAGEMODULATIONTABLENVPROC>(wglGetProcAddress("glCoverageModulationTableNV"))(n, v);
}

inline void glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat *v) 
{
	reinterpret_cast<PFNGLGETCOVERAGEMODULATIONTABLENVPROC>(wglGetProcAddress("glGetCoverageModulationTableNV"))(bufsize, v);
}

inline void glCoverageModulationNV(GLenum components) 
{
	reinterpret_cast<PFNGLCOVERAGEMODULATIONNVPROC>(wglGetProcAddress("glCoverageModulationNV"))(components);
}

inline void glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) 
{
	reinterpret_cast<PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC>(wglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV"))(target, coverageSamples, colorSamples, internalformat, width, height);
}

inline void glProgramVertexLimitNV(GLenum target, GLint limit) 
{
	reinterpret_cast<PFNGLPROGRAMVERTEXLIMITNVPROC>(wglGetProcAddress("glProgramVertexLimitNV"))(target, limit);
}

inline void glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREEXTPROC>(wglGetProcAddress("glFramebufferTextureEXT"))(target, attachment, texture, level);
}

inline void glFramebufferTextureFaceEXT(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC>(wglGetProcAddress("glFramebufferTextureFaceEXT"))(target, attachment, texture, level, face);
}

inline void glProgramLocalParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4INVPROC>(wglGetProcAddress("glProgramLocalParameterI4iNV"))(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4ivNV(GLenum target, GLuint index, const GLint *params) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC>(wglGetProcAddress("glProgramLocalParameterI4ivNV"))(target, index, params);
}

inline void glProgramLocalParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint *params) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC>(wglGetProcAddress("glProgramLocalParametersI4ivNV"))(target, index, count, params);
}

inline void glProgramLocalParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4UINVPROC>(wglGetProcAddress("glProgramLocalParameterI4uiNV"))(target, index, x, y, z, w);
}

inline void glProgramLocalParameterI4uivNV(GLenum target, GLuint index, const GLuint *params) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC>(wglGetProcAddress("glProgramLocalParameterI4uivNV"))(target, index, params);
}

inline void glProgramLocalParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint *params) 
{
	reinterpret_cast<PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC>(wglGetProcAddress("glProgramLocalParametersI4uivNV"))(target, index, count, params);
}

inline void glProgramEnvParameterI4iNV(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4INVPROC>(wglGetProcAddress("glProgramEnvParameterI4iNV"))(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4ivNV(GLenum target, GLuint index, const GLint *params) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4IVNVPROC>(wglGetProcAddress("glProgramEnvParameterI4ivNV"))(target, index, params);
}

inline void glProgramEnvParametersI4ivNV(GLenum target, GLuint index, GLsizei count, const GLint *params) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETERSI4IVNVPROC>(wglGetProcAddress("glProgramEnvParametersI4ivNV"))(target, index, count, params);
}

inline void glProgramEnvParameterI4uiNV(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4UINVPROC>(wglGetProcAddress("glProgramEnvParameterI4uiNV"))(target, index, x, y, z, w);
}

inline void glProgramEnvParameterI4uivNV(GLenum target, GLuint index, const GLuint *params) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETERI4UIVNVPROC>(wglGetProcAddress("glProgramEnvParameterI4uivNV"))(target, index, params);
}

inline void glProgramEnvParametersI4uivNV(GLenum target, GLuint index, GLsizei count, const GLuint *params) 
{
	reinterpret_cast<PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC>(wglGetProcAddress("glProgramEnvParametersI4uivNV"))(target, index, count, params);
}

inline void glGetProgramLocalParameterIivNV(GLenum target, GLuint index, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC>(wglGetProcAddress("glGetProgramLocalParameterIivNV"))(target, index, params);
}

inline void glGetProgramLocalParameterIuivNV(GLenum target, GLuint index, GLuint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC>(wglGetProcAddress("glGetProgramLocalParameterIuivNV"))(target, index, params);
}

inline void glGetProgramEnvParameterIivNV(GLenum target, GLuint index, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMENVPARAMETERIIVNVPROC>(wglGetProcAddress("glGetProgramEnvParameterIivNV"))(target, index, params);
}

inline void glGetProgramEnvParameterIuivNV(GLenum target, GLuint index, GLuint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC>(wglGetProcAddress("glGetProgramEnvParameterIuivNV"))(target, index, params);
}

inline void glProgramSubroutineParametersuivNV(GLenum target, GLsizei count, const GLuint *params) 
{
	reinterpret_cast<PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC>(wglGetProcAddress("glProgramSubroutineParametersuivNV"))(target, count, params);
}

inline void glGetProgramSubroutineParameteruivNV(GLenum target, GLuint index, GLuint *param) 
{
	reinterpret_cast<PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC>(wglGetProcAddress("glGetProgramSubroutineParameteruivNV"))(target, index, param);
}

inline void glVertex2hNV(GLhalfNV x, GLhalfNV y) 
{
	reinterpret_cast<PFNGLVERTEX2HNVPROC>(wglGetProcAddress("glVertex2hNV"))(x, y);
}

inline void glVertex2hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEX2HVNVPROC>(wglGetProcAddress("glVertex2hvNV"))(v);
}

inline void glVertex3hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z) 
{
	reinterpret_cast<PFNGLVERTEX3HNVPROC>(wglGetProcAddress("glVertex3hNV"))(x, y, z);
}

inline void glVertex3hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEX3HVNVPROC>(wglGetProcAddress("glVertex3hvNV"))(v);
}

inline void glVertex4hNV(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) 
{
	reinterpret_cast<PFNGLVERTEX4HNVPROC>(wglGetProcAddress("glVertex4hNV"))(x, y, z, w);
}

inline void glVertex4hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEX4HVNVPROC>(wglGetProcAddress("glVertex4hvNV"))(v);
}

inline void glNormal3hNV(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz) 
{
	reinterpret_cast<PFNGLNORMAL3HNVPROC>(wglGetProcAddress("glNormal3hNV"))(nx, ny, nz);
}

inline void glNormal3hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLNORMAL3HVNVPROC>(wglGetProcAddress("glNormal3hvNV"))(v);
}

inline void glColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue) 
{
	reinterpret_cast<PFNGLCOLOR3HNVPROC>(wglGetProcAddress("glColor3hNV"))(red, green, blue);
}

inline void glColor3hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLCOLOR3HVNVPROC>(wglGetProcAddress("glColor3hvNV"))(v);
}

inline void glColor4hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha) 
{
	reinterpret_cast<PFNGLCOLOR4HNVPROC>(wglGetProcAddress("glColor4hNV"))(red, green, blue, alpha);
}

inline void glColor4hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLCOLOR4HVNVPROC>(wglGetProcAddress("glColor4hvNV"))(v);
}

inline void glTexCoord1hNV(GLhalfNV s) 
{
	reinterpret_cast<PFNGLTEXCOORD1HNVPROC>(wglGetProcAddress("glTexCoord1hNV"))(s);
}

inline void glTexCoord1hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLTEXCOORD1HVNVPROC>(wglGetProcAddress("glTexCoord1hvNV"))(v);
}

inline void glTexCoord2hNV(GLhalfNV s, GLhalfNV t) 
{
	reinterpret_cast<PFNGLTEXCOORD2HNVPROC>(wglGetProcAddress("glTexCoord2hNV"))(s, t);
}

inline void glTexCoord2hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLTEXCOORD2HVNVPROC>(wglGetProcAddress("glTexCoord2hvNV"))(v);
}

inline void glTexCoord3hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r) 
{
	reinterpret_cast<PFNGLTEXCOORD3HNVPROC>(wglGetProcAddress("glTexCoord3hNV"))(s, t, r);
}

inline void glTexCoord3hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLTEXCOORD3HVNVPROC>(wglGetProcAddress("glTexCoord3hvNV"))(v);
}

inline void glTexCoord4hNV(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) 
{
	reinterpret_cast<PFNGLTEXCOORD4HNVPROC>(wglGetProcAddress("glTexCoord4hNV"))(s, t, r, q);
}

inline void glTexCoord4hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLTEXCOORD4HVNVPROC>(wglGetProcAddress("glTexCoord4hvNV"))(v);
}

inline void glMultiTexCoord1hNV(GLenum target, GLhalfNV s) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1HNVPROC>(wglGetProcAddress("glMultiTexCoord1hNV"))(target, s);
}

inline void glMultiTexCoord1hvNV(GLenum target, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD1HVNVPROC>(wglGetProcAddress("glMultiTexCoord1hvNV"))(target, v);
}

inline void glMultiTexCoord2hNV(GLenum target, GLhalfNV s, GLhalfNV t) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2HNVPROC>(wglGetProcAddress("glMultiTexCoord2hNV"))(target, s, t);
}

inline void glMultiTexCoord2hvNV(GLenum target, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD2HVNVPROC>(wglGetProcAddress("glMultiTexCoord2hvNV"))(target, v);
}

inline void glMultiTexCoord3hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3HNVPROC>(wglGetProcAddress("glMultiTexCoord3hNV"))(target, s, t, r);
}

inline void glMultiTexCoord3hvNV(GLenum target, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD3HVNVPROC>(wglGetProcAddress("glMultiTexCoord3hvNV"))(target, v);
}

inline void glMultiTexCoord4hNV(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4HNVPROC>(wglGetProcAddress("glMultiTexCoord4hNV"))(target, s, t, r, q);
}

inline void glMultiTexCoord4hvNV(GLenum target, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLMULTITEXCOORD4HVNVPROC>(wglGetProcAddress("glMultiTexCoord4hvNV"))(target, v);
}

inline void glFogCoordhNV(GLhalfNV fog) 
{
	reinterpret_cast<PFNGLFOGCOORDHNVPROC>(wglGetProcAddress("glFogCoordhNV"))(fog);
}

inline void glFogCoordhvNV(const GLhalfNV *fog) 
{
	reinterpret_cast<PFNGLFOGCOORDHVNVPROC>(wglGetProcAddress("glFogCoordhvNV"))(fog);
}

inline void glSecondaryColor3hNV(GLhalfNV red, GLhalfNV green, GLhalfNV blue) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3HNVPROC>(wglGetProcAddress("glSecondaryColor3hNV"))(red, green, blue);
}

inline void glSecondaryColor3hvNV(const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLSECONDARYCOLOR3HVNVPROC>(wglGetProcAddress("glSecondaryColor3hvNV"))(v);
}

inline void glVertexWeighthNV(GLhalfNV weight) 
{
	reinterpret_cast<PFNGLVERTEXWEIGHTHNVPROC>(wglGetProcAddress("glVertexWeighthNV"))(weight);
}

inline void glVertexWeighthvNV(const GLhalfNV *weight) 
{
	reinterpret_cast<PFNGLVERTEXWEIGHTHVNVPROC>(wglGetProcAddress("glVertexWeighthvNV"))(weight);
}

inline void glVertexAttrib1hNV(GLuint index, GLhalfNV x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1HNVPROC>(wglGetProcAddress("glVertexAttrib1hNV"))(index, x);
}

inline void glVertexAttrib1hvNV(GLuint index, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1HVNVPROC>(wglGetProcAddress("glVertexAttrib1hvNV"))(index, v);
}

inline void glVertexAttrib2hNV(GLuint index, GLhalfNV x, GLhalfNV y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2HNVPROC>(wglGetProcAddress("glVertexAttrib2hNV"))(index, x, y);
}

inline void glVertexAttrib2hvNV(GLuint index, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2HVNVPROC>(wglGetProcAddress("glVertexAttrib2hvNV"))(index, v);
}

inline void glVertexAttrib3hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3HNVPROC>(wglGetProcAddress("glVertexAttrib3hNV"))(index, x, y, z);
}

inline void glVertexAttrib3hvNV(GLuint index, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3HVNVPROC>(wglGetProcAddress("glVertexAttrib3hvNV"))(index, v);
}

inline void glVertexAttrib4hNV(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4HNVPROC>(wglGetProcAddress("glVertexAttrib4hNV"))(index, x, y, z, w);
}

inline void glVertexAttrib4hvNV(GLuint index, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4HVNVPROC>(wglGetProcAddress("glVertexAttrib4hvNV"))(index, v);
}

inline void glVertexAttribs1hvNV(GLuint index, GLsizei n, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS1HVNVPROC>(wglGetProcAddress("glVertexAttribs1hvNV"))(index, n, v);
}

inline void glVertexAttribs2hvNV(GLuint index, GLsizei n, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS2HVNVPROC>(wglGetProcAddress("glVertexAttribs2hvNV"))(index, n, v);
}

inline void glVertexAttribs3hvNV(GLuint index, GLsizei n, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS3HVNVPROC>(wglGetProcAddress("glVertexAttribs3hvNV"))(index, n, v);
}

inline void glVertexAttribs4hvNV(GLuint index, GLsizei n, const GLhalfNV *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS4HVNVPROC>(wglGetProcAddress("glVertexAttribs4hvNV"))(index, n, v);
}

inline void glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint *params) 
{
	reinterpret_cast<PFNGLGETINTERNALFORMATSAMPLEIVNVPROC>(wglGetProcAddress("glGetInternalformatSampleivNV"))(target, internalformat, samples, pname, bufSize, params);
}

inline void glGenOcclusionQueriesNV(GLsizei n, GLuint *ids) 
{
	reinterpret_cast<PFNGLGENOCCLUSIONQUERIESNVPROC>(wglGetProcAddress("glGenOcclusionQueriesNV"))(n, ids);
}

inline void glDeleteOcclusionQueriesNV(GLsizei n, const GLuint *ids) 
{
	reinterpret_cast<PFNGLDELETEOCCLUSIONQUERIESNVPROC>(wglGetProcAddress("glDeleteOcclusionQueriesNV"))(n, ids);
}

inline GLboolean glIsOcclusionQueryNV(GLuint id) 
{
	return reinterpret_cast<PFNGLISOCCLUSIONQUERYNVPROC>(wglGetProcAddress("glIsOcclusionQueryNV"))(id);
}

inline void glBeginOcclusionQueryNV(GLuint id) 
{
	reinterpret_cast<PFNGLBEGINOCCLUSIONQUERYNVPROC>(wglGetProcAddress("glBeginOcclusionQueryNV"))(id);
}

inline void glEndOcclusionQueryNV(void) 
{
	reinterpret_cast<PFNGLENDOCCLUSIONQUERYNVPROC>(wglGetProcAddress("glEndOcclusionQueryNV"))();
}

inline void glGetOcclusionQueryivNV(GLuint id, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETOCCLUSIONQUERYIVNVPROC>(wglGetProcAddress("glGetOcclusionQueryivNV"))(id, pname, params);
}

inline void glGetOcclusionQueryuivNV(GLuint id, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETOCCLUSIONQUERYUIVNVPROC>(wglGetProcAddress("glGetOcclusionQueryuivNV"))(id, pname, params);
}

inline void glProgramBufferParametersfvNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC>(wglGetProcAddress("glProgramBufferParametersfvNV"))(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersIivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint *params) 
{
	reinterpret_cast<PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC>(wglGetProcAddress("glProgramBufferParametersIivNV"))(target, bindingIndex, wordIndex, count, params);
}

inline void glProgramBufferParametersIuivNV(GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint *params) 
{
	reinterpret_cast<PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC>(wglGetProcAddress("glProgramBufferParametersIuivNV"))(target, bindingIndex, wordIndex, count, params);
}

inline GLuint glGenPathsNV(GLsizei range) 
{
	return reinterpret_cast<PFNGLGENPATHSNVPROC>(wglGetProcAddress("glGenPathsNV"))(range);
}

inline void glDeletePathsNV(GLuint path, GLsizei range) 
{
	reinterpret_cast<PFNGLDELETEPATHSNVPROC>(wglGetProcAddress("glDeletePathsNV"))(path, range);
}

inline GLboolean glIsPathNV(GLuint path) 
{
	return reinterpret_cast<PFNGLISPATHNVPROC>(wglGetProcAddress("glIsPathNV"))(path);
}

inline void glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) 
{
	reinterpret_cast<PFNGLPATHCOMMANDSNVPROC>(wglGetProcAddress("glPathCommandsNV"))(path, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void *coords) 
{
	reinterpret_cast<PFNGLPATHCOORDSNVPROC>(wglGetProcAddress("glPathCoordsNV"))(path, numCoords, coordType, coords);
}

inline void glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) 
{
	reinterpret_cast<PFNGLPATHSUBCOMMANDSNVPROC>(wglGetProcAddress("glPathSubCommandsNV"))(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}

inline void glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords) 
{
	reinterpret_cast<PFNGLPATHSUBCOORDSNVPROC>(wglGetProcAddress("glPathSubCoordsNV"))(path, coordStart, numCoords, coordType, coords);
}

inline void glPathStringNV(GLuint path, GLenum format, GLsizei length, const void *pathString) 
{
	reinterpret_cast<PFNGLPATHSTRINGNVPROC>(wglGetProcAddress("glPathStringNV"))(path, format, length, pathString);
}

inline void glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) 
{
	reinterpret_cast<PFNGLPATHGLYPHSNVPROC>(wglGetProcAddress("glPathGlyphsNV"))(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) 
{
	reinterpret_cast<PFNGLPATHGLYPHRANGENVPROC>(wglGetProcAddress("glPathGlyphRangeNV"))(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}

inline void glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights) 
{
	reinterpret_cast<PFNGLWEIGHTPATHSNVPROC>(wglGetProcAddress("glWeightPathsNV"))(resultPath, numPaths, paths, weights);
}

inline void glCopyPathNV(GLuint resultPath, GLuint srcPath) 
{
	reinterpret_cast<PFNGLCOPYPATHNVPROC>(wglGetProcAddress("glCopyPathNV"))(resultPath, srcPath);
}

inline void glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) 
{
	reinterpret_cast<PFNGLINTERPOLATEPATHSNVPROC>(wglGetProcAddress("glInterpolatePathsNV"))(resultPath, pathA, pathB, weight);
}

inline void glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues) 
{
	reinterpret_cast<PFNGLTRANSFORMPATHNVPROC>(wglGetProcAddress("glTransformPathNV"))(resultPath, srcPath, transformType, transformValues);
}

inline void glPathParameterivNV(GLuint path, GLenum pname, const GLint *value) 
{
	reinterpret_cast<PFNGLPATHPARAMETERIVNVPROC>(wglGetProcAddress("glPathParameterivNV"))(path, pname, value);
}

inline void glPathParameteriNV(GLuint path, GLenum pname, GLint value) 
{
	reinterpret_cast<PFNGLPATHPARAMETERINVPROC>(wglGetProcAddress("glPathParameteriNV"))(path, pname, value);
}

inline void glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat *value) 
{
	reinterpret_cast<PFNGLPATHPARAMETERFVNVPROC>(wglGetProcAddress("glPathParameterfvNV"))(path, pname, value);
}

inline void glPathParameterfNV(GLuint path, GLenum pname, GLfloat value) 
{
	reinterpret_cast<PFNGLPATHPARAMETERFNVPROC>(wglGetProcAddress("glPathParameterfNV"))(path, pname, value);
}

inline void glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat *dashArray) 
{
	reinterpret_cast<PFNGLPATHDASHARRAYNVPROC>(wglGetProcAddress("glPathDashArrayNV"))(path, dashCount, dashArray);
}

inline void glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask) 
{
	reinterpret_cast<PFNGLPATHSTENCILFUNCNVPROC>(wglGetProcAddress("glPathStencilFuncNV"))(func, ref, mask);
}

inline void glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units) 
{
	reinterpret_cast<PFNGLPATHSTENCILDEPTHOFFSETNVPROC>(wglGetProcAddress("glPathStencilDepthOffsetNV"))(factor, units);
}

inline void glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask) 
{
	reinterpret_cast<PFNGLSTENCILFILLPATHNVPROC>(wglGetProcAddress("glStencilFillPathNV"))(path, fillMode, mask);
}

inline void glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask) 
{
	reinterpret_cast<PFNGLSTENCILSTROKEPATHNVPROC>(wglGetProcAddress("glStencilStrokePathNV"))(path, reference, mask);
}

inline void glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues) 
{
	reinterpret_cast<PFNGLSTENCILFILLPATHINSTANCEDNVPROC>(wglGetProcAddress("glStencilFillPathInstancedNV"))(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}

inline void glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues) 
{
	reinterpret_cast<PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC>(wglGetProcAddress("glStencilStrokePathInstancedNV"))(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}

inline void glPathCoverDepthFuncNV(GLenum func) 
{
	reinterpret_cast<PFNGLPATHCOVERDEPTHFUNCNVPROC>(wglGetProcAddress("glPathCoverDepthFuncNV"))(func);
}

inline void glCoverFillPathNV(GLuint path, GLenum coverMode) 
{
	reinterpret_cast<PFNGLCOVERFILLPATHNVPROC>(wglGetProcAddress("glCoverFillPathNV"))(path, coverMode);
}

inline void glCoverStrokePathNV(GLuint path, GLenum coverMode) 
{
	reinterpret_cast<PFNGLCOVERSTROKEPATHNVPROC>(wglGetProcAddress("glCoverStrokePathNV"))(path, coverMode);
}

inline void glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) 
{
	reinterpret_cast<PFNGLCOVERFILLPATHINSTANCEDNVPROC>(wglGetProcAddress("glCoverFillPathInstancedNV"))(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) 
{
	reinterpret_cast<PFNGLCOVERSTROKEPATHINSTANCEDNVPROC>(wglGetProcAddress("glCoverStrokePathInstancedNV"))(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}

inline void glGetPathParameterivNV(GLuint path, GLenum pname, GLint *value) 
{
	reinterpret_cast<PFNGLGETPATHPARAMETERIVNVPROC>(wglGetProcAddress("glGetPathParameterivNV"))(path, pname, value);
}

inline void glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat *value) 
{
	reinterpret_cast<PFNGLGETPATHPARAMETERFVNVPROC>(wglGetProcAddress("glGetPathParameterfvNV"))(path, pname, value);
}

inline void glGetPathCommandsNV(GLuint path, GLubyte *commands) 
{
	reinterpret_cast<PFNGLGETPATHCOMMANDSNVPROC>(wglGetProcAddress("glGetPathCommandsNV"))(path, commands);
}

inline void glGetPathCoordsNV(GLuint path, GLfloat *coords) 
{
	reinterpret_cast<PFNGLGETPATHCOORDSNVPROC>(wglGetProcAddress("glGetPathCoordsNV"))(path, coords);
}

inline void glGetPathDashArrayNV(GLuint path, GLfloat *dashArray) 
{
	reinterpret_cast<PFNGLGETPATHDASHARRAYNVPROC>(wglGetProcAddress("glGetPathDashArrayNV"))(path, dashArray);
}

inline void glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics) 
{
	reinterpret_cast<PFNGLGETPATHMETRICSNVPROC>(wglGetProcAddress("glGetPathMetricsNV"))(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}

inline void glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics) 
{
	reinterpret_cast<PFNGLGETPATHMETRICRANGENVPROC>(wglGetProcAddress("glGetPathMetricRangeNV"))(metricQueryMask, firstPathName, numPaths, stride, metrics);
}

inline void glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing) 
{
	reinterpret_cast<PFNGLGETPATHSPACINGNVPROC>(wglGetProcAddress("glGetPathSpacingNV"))(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}

inline GLboolean glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y) 
{
	return reinterpret_cast<PFNGLISPOINTINFILLPATHNVPROC>(wglGetProcAddress("glIsPointInFillPathNV"))(path, mask, x, y);
}

inline GLboolean glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y) 
{
	return reinterpret_cast<PFNGLISPOINTINSTROKEPATHNVPROC>(wglGetProcAddress("glIsPointInStrokePathNV"))(path, x, y);
}

inline GLfloat glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments) 
{
	return reinterpret_cast<PFNGLGETPATHLENGTHNVPROC>(wglGetProcAddress("glGetPathLengthNV"))(path, startSegment, numSegments);
}

inline GLboolean glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY) 
{
	return reinterpret_cast<PFNGLPOINTALONGPATHNVPROC>(wglGetProcAddress("glPointAlongPathNV"))(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

inline void glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXLOAD3X2FNVPROC>(wglGetProcAddress("glMatrixLoad3x2fNV"))(matrixMode, m);
}

inline void glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXLOAD3X3FNVPROC>(wglGetProcAddress("glMatrixLoad3x3fNV"))(matrixMode, m);
}

inline void glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC>(wglGetProcAddress("glMatrixLoadTranspose3x3fNV"))(matrixMode, m);
}

inline void glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXMULT3X2FNVPROC>(wglGetProcAddress("glMatrixMult3x2fNV"))(matrixMode, m);
}

inline void glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXMULT3X3FNVPROC>(wglGetProcAddress("glMatrixMult3x3fNV"))(matrixMode, m);
}

inline void glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat *m) 
{
	reinterpret_cast<PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC>(wglGetProcAddress("glMatrixMultTranspose3x3fNV"))(matrixMode, m);
}

inline void glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode) 
{
	reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHNVPROC>(wglGetProcAddress("glStencilThenCoverFillPathNV"))(path, fillMode, mask, coverMode);
}

inline void glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode) 
{
	reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC>(wglGetProcAddress("glStencilThenCoverStrokePathNV"))(path, reference, mask, coverMode);
}

inline void glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) 
{
	reinterpret_cast<PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC>(wglGetProcAddress("glStencilThenCoverFillPathInstancedNV"))(numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode, transformType, transformValues);
}

inline void glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) 
{
	reinterpret_cast<PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC>(wglGetProcAddress("glStencilThenCoverStrokePathInstancedNV"))(numPaths, pathNameType, paths, pathBase, reference, mask, coverMode, transformType, transformValues);
}

inline GLenum glPathGlyphIndexRangeNV(GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]) 
{
	return reinterpret_cast<PFNGLPATHGLYPHINDEXRANGENVPROC>(wglGetProcAddress("glPathGlyphIndexRangeNV"))(fontTarget, fontName, fontStyle, pathParameterTemplate, emScale, baseAndCount);
}

inline GLenum glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) 
{
	return reinterpret_cast<PFNGLPATHGLYPHINDEXARRAYNVPROC>(wglGetProcAddress("glPathGlyphIndexArrayNV"))(firstPathName, fontTarget, fontName, fontStyle, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

inline GLenum glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) 
{
	return reinterpret_cast<PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC>(wglGetProcAddress("glPathMemoryGlyphIndexArrayNV"))(firstPathName, fontTarget, fontSize, fontData, faceIndex, firstGlyphIndex, numGlyphs, pathParameterTemplate, emScale);
}

inline void glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs) 
{
	reinterpret_cast<PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC>(wglGetProcAddress("glProgramPathFragmentInputGenNV"))(program, location, genMode, components, coeffs);
}

inline void glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMRESOURCEFVNVPROC>(wglGetProcAddress("glGetProgramResourcefvNV"))(program, programInterface, index, propCount, props, bufSize, length, params);
}

inline void glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat *coeffs) 
{
	reinterpret_cast<PFNGLPATHCOLORGENNVPROC>(wglGetProcAddress("glPathColorGenNV"))(color, genMode, colorFormat, coeffs);
}

inline void glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat *coeffs) 
{
	reinterpret_cast<PFNGLPATHTEXGENNVPROC>(wglGetProcAddress("glPathTexGenNV"))(texCoordSet, genMode, components, coeffs);
}

inline void glPathFogGenNV(GLenum genMode) 
{
	reinterpret_cast<PFNGLPATHFOGGENNVPROC>(wglGetProcAddress("glPathFogGenNV"))(genMode);
}

inline void glGetPathColorGenivNV(GLenum color, GLenum pname, GLint *value) 
{
	reinterpret_cast<PFNGLGETPATHCOLORGENIVNVPROC>(wglGetProcAddress("glGetPathColorGenivNV"))(color, pname, value);
}

inline void glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat *value) 
{
	reinterpret_cast<PFNGLGETPATHCOLORGENFVNVPROC>(wglGetProcAddress("glGetPathColorGenfvNV"))(color, pname, value);
}

inline void glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint *value) 
{
	reinterpret_cast<PFNGLGETPATHTEXGENIVNVPROC>(wglGetProcAddress("glGetPathTexGenivNV"))(texCoordSet, pname, value);
}

inline void glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat *value) 
{
	reinterpret_cast<PFNGLGETPATHTEXGENFVNVPROC>(wglGetProcAddress("glGetPathTexGenfvNV"))(texCoordSet, pname, value);
}

inline void glPixelDataRangeNV(GLenum target, GLsizei length, const void *pointer) 
{
	reinterpret_cast<PFNGLPIXELDATARANGENVPROC>(wglGetProcAddress("glPixelDataRangeNV"))(target, length, pointer);
}

inline void glFlushPixelDataRangeNV(GLenum target) 
{
	reinterpret_cast<PFNGLFLUSHPIXELDATARANGENVPROC>(wglGetProcAddress("glFlushPixelDataRangeNV"))(target);
}

inline void glPointParameteriNV(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERINVPROC>(wglGetProcAddress("glPointParameteriNV"))(pname, param);
}

inline void glPointParameterivNV(GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERIVNVPROC>(wglGetProcAddress("glPointParameterivNV"))(pname, params);
}

inline void glPresentFrameKeyedNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1) 
{
	reinterpret_cast<PFNGLPRESENTFRAMEKEYEDNVPROC>(wglGetProcAddress("glPresentFrameKeyedNV"))(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, key0, target1, fill1, key1);
}

inline void glPresentFrameDualFillNV(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3) 
{
	reinterpret_cast<PFNGLPRESENTFRAMEDUALFILLNVPROC>(wglGetProcAddress("glPresentFrameDualFillNV"))(video_slot, minPresentTime, beginPresentTimeId, presentDurationId, type, target0, fill0, target1, fill1, target2, fill2, target3, fill3);
}

inline void glGetVideoivNV(GLuint video_slot, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVIDEOIVNVPROC>(wglGetProcAddress("glGetVideoivNV"))(video_slot, pname, params);
}

inline void glGetVideouivNV(GLuint video_slot, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETVIDEOUIVNVPROC>(wglGetProcAddress("glGetVideouivNV"))(video_slot, pname, params);
}

inline void glGetVideoi64vNV(GLuint video_slot, GLenum pname, GLint64EXT *params) 
{
	reinterpret_cast<PFNGLGETVIDEOI64VNVPROC>(wglGetProcAddress("glGetVideoi64vNV"))(video_slot, pname, params);
}

inline void glGetVideoui64vNV(GLuint video_slot, GLenum pname, GLuint64EXT *params) 
{
	reinterpret_cast<PFNGLGETVIDEOUI64VNVPROC>(wglGetProcAddress("glGetVideoui64vNV"))(video_slot, pname, params);
}

inline void glPrimitiveRestartNV(void) 
{
	reinterpret_cast<PFNGLPRIMITIVERESTARTNVPROC>(wglGetProcAddress("glPrimitiveRestartNV"))();
}

inline void glPrimitiveRestartIndexNV(GLuint index) 
{
	reinterpret_cast<PFNGLPRIMITIVERESTARTINDEXNVPROC>(wglGetProcAddress("glPrimitiveRestartIndexNV"))(index);
}

inline void glCombinerParameterfvNV(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLCOMBINERPARAMETERFVNVPROC>(wglGetProcAddress("glCombinerParameterfvNV"))(pname, params);
}

inline void glCombinerParameterfNV(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLCOMBINERPARAMETERFNVPROC>(wglGetProcAddress("glCombinerParameterfNV"))(pname, param);
}

inline void glCombinerParameterivNV(GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLCOMBINERPARAMETERIVNVPROC>(wglGetProcAddress("glCombinerParameterivNV"))(pname, params);
}

inline void glCombinerParameteriNV(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLCOMBINERPARAMETERINVPROC>(wglGetProcAddress("glCombinerParameteriNV"))(pname, param);
}

inline void glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) 
{
	reinterpret_cast<PFNGLCOMBINERINPUTNVPROC>(wglGetProcAddress("glCombinerInputNV"))(stage, portion, variable, input, mapping, componentUsage);
}

inline void glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum) 
{
	reinterpret_cast<PFNGLCOMBINEROUTPUTNVPROC>(wglGetProcAddress("glCombinerOutputNV"))(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

inline void glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) 
{
	reinterpret_cast<PFNGLFINALCOMBINERINPUTNVPROC>(wglGetProcAddress("glFinalCombinerInputNV"))(variable, input, mapping, componentUsage);
}

inline void glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC>(wglGetProcAddress("glGetCombinerInputParameterfvNV"))(stage, portion, variable, pname, params);
}

inline void glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC>(wglGetProcAddress("glGetCombinerInputParameterivNV"))(stage, portion, variable, pname, params);
}

inline void glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC>(wglGetProcAddress("glGetCombinerOutputParameterfvNV"))(stage, portion, pname, params);
}

inline void glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC>(wglGetProcAddress("glGetCombinerOutputParameterivNV"))(stage, portion, pname, params);
}

inline void glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC>(wglGetProcAddress("glGetFinalCombinerInputParameterfvNV"))(variable, pname, params);
}

inline void glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC>(wglGetProcAddress("glGetFinalCombinerInputParameterivNV"))(variable, pname, params);
}

inline void glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLCOMBINERSTAGEPARAMETERFVNVPROC>(wglGetProcAddress("glCombinerStageParameterfvNV"))(stage, pname, params);
}

inline void glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC>(wglGetProcAddress("glGetCombinerStageParameterfvNV"))(stage, pname, params);
}

inline void glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(wglGetProcAddress("glFramebufferSampleLocationsfvNV"))(target, start, count, v);
}

inline void glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC>(wglGetProcAddress("glNamedFramebufferSampleLocationsfvNV"))(framebuffer, start, count, v);
}

inline void glResolveDepthValuesNV(void) 
{
	reinterpret_cast<PFNGLRESOLVEDEPTHVALUESNVPROC>(wglGetProcAddress("glResolveDepthValuesNV"))();
}

inline void glMakeBufferResidentNV(GLenum target, GLenum access) 
{
	reinterpret_cast<PFNGLMAKEBUFFERRESIDENTNVPROC>(wglGetProcAddress("glMakeBufferResidentNV"))(target, access);
}

inline void glMakeBufferNonResidentNV(GLenum target) 
{
	reinterpret_cast<PFNGLMAKEBUFFERNONRESIDENTNVPROC>(wglGetProcAddress("glMakeBufferNonResidentNV"))(target);
}

inline GLboolean glIsBufferResidentNV(GLenum target) 
{
	return reinterpret_cast<PFNGLISBUFFERRESIDENTNVPROC>(wglGetProcAddress("glIsBufferResidentNV"))(target);
}

inline void glMakeNamedBufferResidentNV(GLuint buffer, GLenum access) 
{
	reinterpret_cast<PFNGLMAKENAMEDBUFFERRESIDENTNVPROC>(wglGetProcAddress("glMakeNamedBufferResidentNV"))(buffer, access);
}

inline void glMakeNamedBufferNonResidentNV(GLuint buffer) 
{
	reinterpret_cast<PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC>(wglGetProcAddress("glMakeNamedBufferNonResidentNV"))(buffer);
}

inline GLboolean glIsNamedBufferResidentNV(GLuint buffer) 
{
	return reinterpret_cast<PFNGLISNAMEDBUFFERRESIDENTNVPROC>(wglGetProcAddress("glIsNamedBufferResidentNV"))(buffer);
}

inline void glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT *params) 
{
	reinterpret_cast<PFNGLGETBUFFERPARAMETERUI64VNVPROC>(wglGetProcAddress("glGetBufferParameterui64vNV"))(target, pname, params);
}

inline void glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT *params) 
{
	reinterpret_cast<PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC>(wglGetProcAddress("glGetNamedBufferParameterui64vNV"))(buffer, pname, params);
}

inline void glGetIntegerui64vNV(GLenum value, GLuint64EXT *result) 
{
	reinterpret_cast<PFNGLGETINTEGERUI64VNVPROC>(wglGetProcAddress("glGetIntegerui64vNV"))(value, result);
}

inline void glUniformui64NV(GLint location, GLuint64EXT value) 
{
	reinterpret_cast<PFNGLUNIFORMUI64NVPROC>(wglGetProcAddress("glUniformui64NV"))(location, value);
}

inline void glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLUNIFORMUI64VNVPROC>(wglGetProcAddress("glUniformui64vNV"))(location, count, value);
}

inline void glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMUI64NVPROC>(wglGetProcAddress("glProgramUniformui64NV"))(program, location, value);
}

inline void glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) 
{
	reinterpret_cast<PFNGLPROGRAMUNIFORMUI64VNVPROC>(wglGetProcAddress("glProgramUniformui64vNV"))(program, location, count, value);
}

inline void glTextureBarrierNV(void) 
{
	reinterpret_cast<PFNGLTEXTUREBARRIERNVPROC>(wglGetProcAddress("glTextureBarrierNV"))();
}

inline void glTexImage2DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) 
{
	reinterpret_cast<PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC>(wglGetProcAddress("glTexImage2DMultisampleCoverageNV"))(target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTexImage3DMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) 
{
	reinterpret_cast<PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC>(wglGetProcAddress("glTexImage3DMultisampleCoverageNV"))(target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureImage2DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) 
{
	reinterpret_cast<PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC>(wglGetProcAddress("glTextureImage2DMultisampleNV"))(texture, target, samples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage3DMultisampleNV(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) 
{
	reinterpret_cast<PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC>(wglGetProcAddress("glTextureImage3DMultisampleNV"))(texture, target, samples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glTextureImage2DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) 
{
	reinterpret_cast<PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC>(wglGetProcAddress("glTextureImage2DMultisampleCoverageNV"))(texture, target, coverageSamples, colorSamples, internalFormat, width, height, fixedSampleLocations);
}

inline void glTextureImage3DMultisampleCoverageNV(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) 
{
	reinterpret_cast<PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC>(wglGetProcAddress("glTextureImage3DMultisampleCoverageNV"))(texture, target, coverageSamples, colorSamples, internalFormat, width, height, depth, fixedSampleLocations);
}

inline void glBeginTransformFeedbackNV(GLenum primitiveMode) 
{
	reinterpret_cast<PFNGLBEGINTRANSFORMFEEDBACKNVPROC>(wglGetProcAddress("glBeginTransformFeedbackNV"))(primitiveMode);
}

inline void glEndTransformFeedbackNV(void) 
{
	reinterpret_cast<PFNGLENDTRANSFORMFEEDBACKNVPROC>(wglGetProcAddress("glEndTransformFeedbackNV"))();
}

inline void glTransformFeedbackAttribsNV(GLsizei count, const GLint *attribs, GLenum bufferMode) 
{
	reinterpret_cast<PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC>(wglGetProcAddress("glTransformFeedbackAttribsNV"))(count, attribs, bufferMode);
}

inline void glBindBufferRangeNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) 
{
	reinterpret_cast<PFNGLBINDBUFFERRANGENVPROC>(wglGetProcAddress("glBindBufferRangeNV"))(target, index, buffer, offset, size);
}

inline void glBindBufferOffsetNV(GLenum target, GLuint index, GLuint buffer, GLintptr offset) 
{
	reinterpret_cast<PFNGLBINDBUFFEROFFSETNVPROC>(wglGetProcAddress("glBindBufferOffsetNV"))(target, index, buffer, offset);
}

inline void glBindBufferBaseNV(GLenum target, GLuint index, GLuint buffer) 
{
	reinterpret_cast<PFNGLBINDBUFFERBASENVPROC>(wglGetProcAddress("glBindBufferBaseNV"))(target, index, buffer);
}

inline void glTransformFeedbackVaryingsNV(GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode) 
{
	reinterpret_cast<PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC>(wglGetProcAddress("glTransformFeedbackVaryingsNV"))(program, count, locations, bufferMode);
}

inline void glActiveVaryingNV(GLuint program, const GLchar *name) 
{
	reinterpret_cast<PFNGLACTIVEVARYINGNVPROC>(wglGetProcAddress("glActiveVaryingNV"))(program, name);
}

inline GLint glGetVaryingLocationNV(GLuint program, const GLchar *name) 
{
	return reinterpret_cast<PFNGLGETVARYINGLOCATIONNVPROC>(wglGetProcAddress("glGetVaryingLocationNV"))(program, name);
}

inline void glGetActiveVaryingNV(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) 
{
	reinterpret_cast<PFNGLGETACTIVEVARYINGNVPROC>(wglGetProcAddress("glGetActiveVaryingNV"))(program, index, bufSize, length, size, type, name);
}

inline void glGetTransformFeedbackVaryingNV(GLuint program, GLuint index, GLint *location) 
{
	reinterpret_cast<PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC>(wglGetProcAddress("glGetTransformFeedbackVaryingNV"))(program, index, location);
}

inline void glTransformFeedbackStreamAttribsNV(GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode) 
{
	reinterpret_cast<PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC>(wglGetProcAddress("glTransformFeedbackStreamAttribsNV"))(count, attribs, nbuffers, bufstreams, bufferMode);
}

inline void glBindTransformFeedbackNV(GLenum target, GLuint id) 
{
	reinterpret_cast<PFNGLBINDTRANSFORMFEEDBACKNVPROC>(wglGetProcAddress("glBindTransformFeedbackNV"))(target, id);
}

inline void glDeleteTransformFeedbacksNV(GLsizei n, const GLuint *ids) 
{
	reinterpret_cast<PFNGLDELETETRANSFORMFEEDBACKSNVPROC>(wglGetProcAddress("glDeleteTransformFeedbacksNV"))(n, ids);
}

inline void glGenTransformFeedbacksNV(GLsizei n, GLuint *ids) 
{
	reinterpret_cast<PFNGLGENTRANSFORMFEEDBACKSNVPROC>(wglGetProcAddress("glGenTransformFeedbacksNV"))(n, ids);
}

inline GLboolean glIsTransformFeedbackNV(GLuint id) 
{
	return reinterpret_cast<PFNGLISTRANSFORMFEEDBACKNVPROC>(wglGetProcAddress("glIsTransformFeedbackNV"))(id);
}

inline void glPauseTransformFeedbackNV(void) 
{
	reinterpret_cast<PFNGLPAUSETRANSFORMFEEDBACKNVPROC>(wglGetProcAddress("glPauseTransformFeedbackNV"))();
}

inline void glResumeTransformFeedbackNV(void) 
{
	reinterpret_cast<PFNGLRESUMETRANSFORMFEEDBACKNVPROC>(wglGetProcAddress("glResumeTransformFeedbackNV"))();
}

inline void glDrawTransformFeedbackNV(GLenum mode, GLuint id) 
{
	reinterpret_cast<PFNGLDRAWTRANSFORMFEEDBACKNVPROC>(wglGetProcAddress("glDrawTransformFeedbackNV"))(mode, id);
}

inline void glVDPAUInitNV(const void *vdpDevice, const void *getProcAddress) 
{
	reinterpret_cast<PFNGLVDPAUINITNVPROC>(wglGetProcAddress("glVDPAUInitNV"))(vdpDevice, getProcAddress);
}

inline void glVDPAUFiniNV(void) 
{
	reinterpret_cast<PFNGLVDPAUFININVPROC>(wglGetProcAddress("glVDPAUFiniNV"))();
}

inline GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) 
{
	return reinterpret_cast<PFNGLVDPAUREGISTERVIDEOSURFACENVPROC>(wglGetProcAddress("glVDPAURegisterVideoSurfaceNV"))(vdpSurface, target, numTextureNames, textureNames);
}

inline GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) 
{
	return reinterpret_cast<PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC>(wglGetProcAddress("glVDPAURegisterOutputSurfaceNV"))(vdpSurface, target, numTextureNames, textureNames);
}

inline GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV surface) 
{
	return reinterpret_cast<PFNGLVDPAUISSURFACENVPROC>(wglGetProcAddress("glVDPAUIsSurfaceNV"))(surface);
}

inline void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV surface) 
{
	reinterpret_cast<PFNGLVDPAUUNREGISTERSURFACENVPROC>(wglGetProcAddress("glVDPAUUnregisterSurfaceNV"))(surface);
}

inline void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) 
{
	reinterpret_cast<PFNGLVDPAUGETSURFACEIVNVPROC>(wglGetProcAddress("glVDPAUGetSurfaceivNV"))(surface, pname, bufSize, length, values);
}

inline void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV surface, GLenum access) 
{
	reinterpret_cast<PFNGLVDPAUSURFACEACCESSNVPROC>(wglGetProcAddress("glVDPAUSurfaceAccessNV"))(surface, access);
}

inline void glVDPAUMapSurfacesNV(GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces) 
{
	reinterpret_cast<PFNGLVDPAUMAPSURFACESNVPROC>(wglGetProcAddress("glVDPAUMapSurfacesNV"))(numSurfaces, surfaces);
}

inline void glVDPAUUnmapSurfacesNV(GLsizei numSurface, const GLvdpauSurfaceNV *surfaces) 
{
	reinterpret_cast<PFNGLVDPAUUNMAPSURFACESNVPROC>(wglGetProcAddress("glVDPAUUnmapSurfacesNV"))(numSurface, surfaces);
}

inline void glFlushVertexArrayRangeNV(void) 
{
	reinterpret_cast<PFNGLFLUSHVERTEXARRAYRANGENVPROC>(wglGetProcAddress("glFlushVertexArrayRangeNV"))();
}

inline void glVertexArrayRangeNV(GLsizei length, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXARRAYRANGENVPROC>(wglGetProcAddress("glVertexArrayRangeNV"))(length, pointer);
}

inline void glVertexAttribL1i64NV(GLuint index, GLint64EXT x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1I64NVPROC>(wglGetProcAddress("glVertexAttribL1i64NV"))(index, x);
}

inline void glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2I64NVPROC>(wglGetProcAddress("glVertexAttribL2i64NV"))(index, x, y);
}

inline void glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3I64NVPROC>(wglGetProcAddress("glVertexAttribL3i64NV"))(index, x, y, z);
}

inline void glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4I64NVPROC>(wglGetProcAddress("glVertexAttribL4i64NV"))(index, x, y, z, w);
}

inline void glVertexAttribL1i64vNV(GLuint index, const GLint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1I64VNVPROC>(wglGetProcAddress("glVertexAttribL1i64vNV"))(index, v);
}

inline void glVertexAttribL2i64vNV(GLuint index, const GLint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2I64VNVPROC>(wglGetProcAddress("glVertexAttribL2i64vNV"))(index, v);
}

inline void glVertexAttribL3i64vNV(GLuint index, const GLint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3I64VNVPROC>(wglGetProcAddress("glVertexAttribL3i64vNV"))(index, v);
}

inline void glVertexAttribL4i64vNV(GLuint index, const GLint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4I64VNVPROC>(wglGetProcAddress("glVertexAttribL4i64vNV"))(index, v);
}

inline void glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1UI64NVPROC>(wglGetProcAddress("glVertexAttribL1ui64NV"))(index, x);
}

inline void glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2UI64NVPROC>(wglGetProcAddress("glVertexAttribL2ui64NV"))(index, x, y);
}

inline void glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3UI64NVPROC>(wglGetProcAddress("glVertexAttribL3ui64NV"))(index, x, y, z);
}

inline void glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4UI64NVPROC>(wglGetProcAddress("glVertexAttribL4ui64NV"))(index, x, y, z, w);
}

inline void glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL1UI64VNVPROC>(wglGetProcAddress("glVertexAttribL1ui64vNV"))(index, v);
}

inline void glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL2UI64VNVPROC>(wglGetProcAddress("glVertexAttribL2ui64vNV"))(index, v);
}

inline void glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL3UI64VNVPROC>(wglGetProcAddress("glVertexAttribL3ui64vNV"))(index, v);
}

inline void glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBL4UI64VNVPROC>(wglGetProcAddress("glVertexAttribL4ui64vNV"))(index, v);
}

inline void glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBLI64VNVPROC>(wglGetProcAddress("glGetVertexAttribLi64vNV"))(index, pname, params);
}

inline void glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBLUI64VNVPROC>(wglGetProcAddress("glGetVertexAttribLui64vNV"))(index, pname, params);
}

inline void glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBLFORMATNVPROC>(wglGetProcAddress("glVertexAttribLFormatNV"))(index, size, type, stride);
}

inline void glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length) 
{
	reinterpret_cast<PFNGLBUFFERADDRESSRANGENVPROC>(wglGetProcAddress("glBufferAddressRangeNV"))(pname, index, address, length);
}

inline void glVertexFormatNV(GLint size, GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLVERTEXFORMATNVPROC>(wglGetProcAddress("glVertexFormatNV"))(size, type, stride);
}

inline void glNormalFormatNV(GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLNORMALFORMATNVPROC>(wglGetProcAddress("glNormalFormatNV"))(type, stride);
}

inline void glColorFormatNV(GLint size, GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLCOLORFORMATNVPROC>(wglGetProcAddress("glColorFormatNV"))(size, type, stride);
}

inline void glIndexFormatNV(GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLINDEXFORMATNVPROC>(wglGetProcAddress("glIndexFormatNV"))(type, stride);
}

inline void glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLTEXCOORDFORMATNVPROC>(wglGetProcAddress("glTexCoordFormatNV"))(size, type, stride);
}

inline void glEdgeFlagFormatNV(GLsizei stride) 
{
	reinterpret_cast<PFNGLEDGEFLAGFORMATNVPROC>(wglGetProcAddress("glEdgeFlagFormatNV"))(stride);
}

inline void glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLSECONDARYCOLORFORMATNVPROC>(wglGetProcAddress("glSecondaryColorFormatNV"))(size, type, stride);
}

inline void glFogCoordFormatNV(GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLFOGCOORDFORMATNVPROC>(wglGetProcAddress("glFogCoordFormatNV"))(type, stride);
}

inline void glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBFORMATNVPROC>(wglGetProcAddress("glVertexAttribFormatNV"))(index, size, type, normalized, stride);
}

inline void glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBIFORMATNVPROC>(wglGetProcAddress("glVertexAttribIFormatNV"))(index, size, type, stride);
}

inline void glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT *result) 
{
	reinterpret_cast<PFNGLGETINTEGERUI64I_VNVPROC>(wglGetProcAddress("glGetIntegerui64i_vNV"))(value, index, result);
}

inline GLboolean glAreProgramsResidentNV(GLsizei n, const GLuint *programs, GLboolean *residences) 
{
	return reinterpret_cast<PFNGLAREPROGRAMSRESIDENTNVPROC>(wglGetProcAddress("glAreProgramsResidentNV"))(n, programs, residences);
}

inline void glBindProgramNV(GLenum target, GLuint id) 
{
	reinterpret_cast<PFNGLBINDPROGRAMNVPROC>(wglGetProcAddress("glBindProgramNV"))(target, id);
}

inline void glDeleteProgramsNV(GLsizei n, const GLuint *programs) 
{
	reinterpret_cast<PFNGLDELETEPROGRAMSNVPROC>(wglGetProcAddress("glDeleteProgramsNV"))(n, programs);
}

inline void glExecuteProgramNV(GLenum target, GLuint id, const GLfloat *params) 
{
	reinterpret_cast<PFNGLEXECUTEPROGRAMNVPROC>(wglGetProcAddress("glExecuteProgramNV"))(target, id, params);
}

inline void glGenProgramsNV(GLsizei n, GLuint *programs) 
{
	reinterpret_cast<PFNGLGENPROGRAMSNVPROC>(wglGetProcAddress("glGenProgramsNV"))(n, programs);
}

inline void glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMPARAMETERDVNVPROC>(wglGetProcAddress("glGetProgramParameterdvNV"))(target, index, pname, params);
}

inline void glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMPARAMETERFVNVPROC>(wglGetProcAddress("glGetProgramParameterfvNV"))(target, index, pname, params);
}

inline void glGetProgramivNV(GLuint id, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETPROGRAMIVNVPROC>(wglGetProcAddress("glGetProgramivNV"))(id, pname, params);
}

inline void glGetProgramStringNV(GLuint id, GLenum pname, GLubyte *program) 
{
	reinterpret_cast<PFNGLGETPROGRAMSTRINGNVPROC>(wglGetProcAddress("glGetProgramStringNV"))(id, pname, program);
}

inline void glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETTRACKMATRIXIVNVPROC>(wglGetProcAddress("glGetTrackMatrixivNV"))(target, address, pname, params);
}

inline void glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBDVNVPROC>(wglGetProcAddress("glGetVertexAttribdvNV"))(index, pname, params);
}

inline void glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBFVNVPROC>(wglGetProcAddress("glGetVertexAttribfvNV"))(index, pname, params);
}

inline void glGetVertexAttribivNV(GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBIVNVPROC>(wglGetProcAddress("glGetVertexAttribivNV"))(index, pname, params);
}

inline void glGetVertexAttribPointervNV(GLuint index, GLenum pname, void **pointer) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBPOINTERVNVPROC>(wglGetProcAddress("glGetVertexAttribPointervNV"))(index, pname, pointer);
}

inline GLboolean glIsProgramNV(GLuint id) 
{
	return reinterpret_cast<PFNGLISPROGRAMNVPROC>(wglGetProcAddress("glIsProgramNV"))(id);
}

inline void glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte *program) 
{
	reinterpret_cast<PFNGLLOADPROGRAMNVPROC>(wglGetProcAddress("glLoadProgramNV"))(target, id, len, program);
}

inline void glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETER4DNVPROC>(wglGetProcAddress("glProgramParameter4dNV"))(target, index, x, y, z, w);
}

inline void glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETER4DVNVPROC>(wglGetProcAddress("glProgramParameter4dvNV"))(target, index, v);
}

inline void glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETER4FNVPROC>(wglGetProcAddress("glProgramParameter4fNV"))(target, index, x, y, z, w);
}

inline void glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETER4FVNVPROC>(wglGetProcAddress("glProgramParameter4fvNV"))(target, index, v);
}

inline void glProgramParameters4dvNV(GLenum target, GLuint index, GLsizei count, const GLdouble *v) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETERS4DVNVPROC>(wglGetProcAddress("glProgramParameters4dvNV"))(target, index, count, v);
}

inline void glProgramParameters4fvNV(GLenum target, GLuint index, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLPROGRAMPARAMETERS4FVNVPROC>(wglGetProcAddress("glProgramParameters4fvNV"))(target, index, count, v);
}

inline void glRequestResidentProgramsNV(GLsizei n, const GLuint *programs) 
{
	reinterpret_cast<PFNGLREQUESTRESIDENTPROGRAMSNVPROC>(wglGetProcAddress("glRequestResidentProgramsNV"))(n, programs);
}

inline void glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform) 
{
	reinterpret_cast<PFNGLTRACKMATRIXNVPROC>(wglGetProcAddress("glTrackMatrixNV"))(target, address, matrix, transform);
}

inline void glVertexAttribPointerNV(GLuint index, GLint fsize, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBPOINTERNVPROC>(wglGetProcAddress("glVertexAttribPointerNV"))(index, fsize, type, stride, pointer);
}

inline void glVertexAttrib1dNV(GLuint index, GLdouble x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1DNVPROC>(wglGetProcAddress("glVertexAttrib1dNV"))(index, x);
}

inline void glVertexAttrib1dvNV(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1DVNVPROC>(wglGetProcAddress("glVertexAttrib1dvNV"))(index, v);
}

inline void glVertexAttrib1fNV(GLuint index, GLfloat x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1FNVPROC>(wglGetProcAddress("glVertexAttrib1fNV"))(index, x);
}

inline void glVertexAttrib1fvNV(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1FVNVPROC>(wglGetProcAddress("glVertexAttrib1fvNV"))(index, v);
}

inline void glVertexAttrib1sNV(GLuint index, GLshort x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1SNVPROC>(wglGetProcAddress("glVertexAttrib1sNV"))(index, x);
}

inline void glVertexAttrib1svNV(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB1SVNVPROC>(wglGetProcAddress("glVertexAttrib1svNV"))(index, v);
}

inline void glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2DNVPROC>(wglGetProcAddress("glVertexAttrib2dNV"))(index, x, y);
}

inline void glVertexAttrib2dvNV(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2DVNVPROC>(wglGetProcAddress("glVertexAttrib2dvNV"))(index, v);
}

inline void glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2FNVPROC>(wglGetProcAddress("glVertexAttrib2fNV"))(index, x, y);
}

inline void glVertexAttrib2fvNV(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2FVNVPROC>(wglGetProcAddress("glVertexAttrib2fvNV"))(index, v);
}

inline void glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2SNVPROC>(wglGetProcAddress("glVertexAttrib2sNV"))(index, x, y);
}

inline void glVertexAttrib2svNV(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB2SVNVPROC>(wglGetProcAddress("glVertexAttrib2svNV"))(index, v);
}

inline void glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3DNVPROC>(wglGetProcAddress("glVertexAttrib3dNV"))(index, x, y, z);
}

inline void glVertexAttrib3dvNV(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3DVNVPROC>(wglGetProcAddress("glVertexAttrib3dvNV"))(index, v);
}

inline void glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3FNVPROC>(wglGetProcAddress("glVertexAttrib3fNV"))(index, x, y, z);
}

inline void glVertexAttrib3fvNV(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3FVNVPROC>(wglGetProcAddress("glVertexAttrib3fvNV"))(index, v);
}

inline void glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3SNVPROC>(wglGetProcAddress("glVertexAttrib3sNV"))(index, x, y, z);
}

inline void glVertexAttrib3svNV(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB3SVNVPROC>(wglGetProcAddress("glVertexAttrib3svNV"))(index, v);
}

inline void glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4DNVPROC>(wglGetProcAddress("glVertexAttrib4dNV"))(index, x, y, z, w);
}

inline void glVertexAttrib4dvNV(GLuint index, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4DVNVPROC>(wglGetProcAddress("glVertexAttrib4dvNV"))(index, v);
}

inline void glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4FNVPROC>(wglGetProcAddress("glVertexAttrib4fNV"))(index, x, y, z, w);
}

inline void glVertexAttrib4fvNV(GLuint index, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4FVNVPROC>(wglGetProcAddress("glVertexAttrib4fvNV"))(index, v);
}

inline void glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4SNVPROC>(wglGetProcAddress("glVertexAttrib4sNV"))(index, x, y, z, w);
}

inline void glVertexAttrib4svNV(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4SVNVPROC>(wglGetProcAddress("glVertexAttrib4svNV"))(index, v);
}

inline void glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4UBNVPROC>(wglGetProcAddress("glVertexAttrib4ubNV"))(index, x, y, z, w);
}

inline void glVertexAttrib4ubvNV(GLuint index, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIB4UBVNVPROC>(wglGetProcAddress("glVertexAttrib4ubvNV"))(index, v);
}

inline void glVertexAttribs1dvNV(GLuint index, GLsizei count, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS1DVNVPROC>(wglGetProcAddress("glVertexAttribs1dvNV"))(index, count, v);
}

inline void glVertexAttribs1fvNV(GLuint index, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS1FVNVPROC>(wglGetProcAddress("glVertexAttribs1fvNV"))(index, count, v);
}

inline void glVertexAttribs1svNV(GLuint index, GLsizei count, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS1SVNVPROC>(wglGetProcAddress("glVertexAttribs1svNV"))(index, count, v);
}

inline void glVertexAttribs2dvNV(GLuint index, GLsizei count, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS2DVNVPROC>(wglGetProcAddress("glVertexAttribs2dvNV"))(index, count, v);
}

inline void glVertexAttribs2fvNV(GLuint index, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS2FVNVPROC>(wglGetProcAddress("glVertexAttribs2fvNV"))(index, count, v);
}

inline void glVertexAttribs2svNV(GLuint index, GLsizei count, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS2SVNVPROC>(wglGetProcAddress("glVertexAttribs2svNV"))(index, count, v);
}

inline void glVertexAttribs3dvNV(GLuint index, GLsizei count, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS3DVNVPROC>(wglGetProcAddress("glVertexAttribs3dvNV"))(index, count, v);
}

inline void glVertexAttribs3fvNV(GLuint index, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS3FVNVPROC>(wglGetProcAddress("glVertexAttribs3fvNV"))(index, count, v);
}

inline void glVertexAttribs3svNV(GLuint index, GLsizei count, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS3SVNVPROC>(wglGetProcAddress("glVertexAttribs3svNV"))(index, count, v);
}

inline void glVertexAttribs4dvNV(GLuint index, GLsizei count, const GLdouble *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS4DVNVPROC>(wglGetProcAddress("glVertexAttribs4dvNV"))(index, count, v);
}

inline void glVertexAttribs4fvNV(GLuint index, GLsizei count, const GLfloat *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS4FVNVPROC>(wglGetProcAddress("glVertexAttribs4fvNV"))(index, count, v);
}

inline void glVertexAttribs4svNV(GLuint index, GLsizei count, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS4SVNVPROC>(wglGetProcAddress("glVertexAttribs4svNV"))(index, count, v);
}

inline void glVertexAttribs4ubvNV(GLuint index, GLsizei count, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBS4UBVNVPROC>(wglGetProcAddress("glVertexAttribs4ubvNV"))(index, count, v);
}

inline void glVertexAttribI1iEXT(GLuint index, GLint x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1IEXTPROC>(wglGetProcAddress("glVertexAttribI1iEXT"))(index, x);
}

inline void glVertexAttribI2iEXT(GLuint index, GLint x, GLint y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2IEXTPROC>(wglGetProcAddress("glVertexAttribI2iEXT"))(index, x, y);
}

inline void glVertexAttribI3iEXT(GLuint index, GLint x, GLint y, GLint z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3IEXTPROC>(wglGetProcAddress("glVertexAttribI3iEXT"))(index, x, y, z);
}

inline void glVertexAttribI4iEXT(GLuint index, GLint x, GLint y, GLint z, GLint w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4IEXTPROC>(wglGetProcAddress("glVertexAttribI4iEXT"))(index, x, y, z, w);
}

inline void glVertexAttribI1uiEXT(GLuint index, GLuint x) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1UIEXTPROC>(wglGetProcAddress("glVertexAttribI1uiEXT"))(index, x);
}

inline void glVertexAttribI2uiEXT(GLuint index, GLuint x, GLuint y) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2UIEXTPROC>(wglGetProcAddress("glVertexAttribI2uiEXT"))(index, x, y);
}

inline void glVertexAttribI3uiEXT(GLuint index, GLuint x, GLuint y, GLuint z) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3UIEXTPROC>(wglGetProcAddress("glVertexAttribI3uiEXT"))(index, x, y, z);
}

inline void glVertexAttribI4uiEXT(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4UIEXTPROC>(wglGetProcAddress("glVertexAttribI4uiEXT"))(index, x, y, z, w);
}

inline void glVertexAttribI1ivEXT(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1IVEXTPROC>(wglGetProcAddress("glVertexAttribI1ivEXT"))(index, v);
}

inline void glVertexAttribI2ivEXT(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2IVEXTPROC>(wglGetProcAddress("glVertexAttribI2ivEXT"))(index, v);
}

inline void glVertexAttribI3ivEXT(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3IVEXTPROC>(wglGetProcAddress("glVertexAttribI3ivEXT"))(index, v);
}

inline void glVertexAttribI4ivEXT(GLuint index, const GLint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4IVEXTPROC>(wglGetProcAddress("glVertexAttribI4ivEXT"))(index, v);
}

inline void glVertexAttribI1uivEXT(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI1UIVEXTPROC>(wglGetProcAddress("glVertexAttribI1uivEXT"))(index, v);
}

inline void glVertexAttribI2uivEXT(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI2UIVEXTPROC>(wglGetProcAddress("glVertexAttribI2uivEXT"))(index, v);
}

inline void glVertexAttribI3uivEXT(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI3UIVEXTPROC>(wglGetProcAddress("glVertexAttribI3uivEXT"))(index, v);
}

inline void glVertexAttribI4uivEXT(GLuint index, const GLuint *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4UIVEXTPROC>(wglGetProcAddress("glVertexAttribI4uivEXT"))(index, v);
}

inline void glVertexAttribI4bvEXT(GLuint index, const GLbyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4BVEXTPROC>(wglGetProcAddress("glVertexAttribI4bvEXT"))(index, v);
}

inline void glVertexAttribI4svEXT(GLuint index, const GLshort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4SVEXTPROC>(wglGetProcAddress("glVertexAttribI4svEXT"))(index, v);
}

inline void glVertexAttribI4ubvEXT(GLuint index, const GLubyte *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4UBVEXTPROC>(wglGetProcAddress("glVertexAttribI4ubvEXT"))(index, v);
}

inline void glVertexAttribI4usvEXT(GLuint index, const GLushort *v) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBI4USVEXTPROC>(wglGetProcAddress("glVertexAttribI4usvEXT"))(index, v);
}

inline void glVertexAttribIPointerEXT(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) 
{
	reinterpret_cast<PFNGLVERTEXATTRIBIPOINTEREXTPROC>(wglGetProcAddress("glVertexAttribIPointerEXT"))(index, size, type, stride, pointer);
}

inline void glGetVertexAttribIivEXT(GLuint index, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBIIVEXTPROC>(wglGetProcAddress("glGetVertexAttribIivEXT"))(index, pname, params);
}

inline void glGetVertexAttribIuivEXT(GLuint index, GLenum pname, GLuint *params) 
{
	reinterpret_cast<PFNGLGETVERTEXATTRIBIUIVEXTPROC>(wglGetProcAddress("glGetVertexAttribIuivEXT"))(index, pname, params);
}

inline void glBeginVideoCaptureNV(GLuint video_capture_slot) 
{
	reinterpret_cast<PFNGLBEGINVIDEOCAPTURENVPROC>(wglGetProcAddress("glBeginVideoCaptureNV"))(video_capture_slot);
}

inline void glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset) 
{
	reinterpret_cast<PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC>(wglGetProcAddress("glBindVideoCaptureStreamBufferNV"))(video_capture_slot, stream, frame_region, offset);
}

inline void glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture) 
{
	reinterpret_cast<PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC>(wglGetProcAddress("glBindVideoCaptureStreamTextureNV"))(video_capture_slot, stream, frame_region, target, texture);
}

inline void glEndVideoCaptureNV(GLuint video_capture_slot) 
{
	reinterpret_cast<PFNGLENDVIDEOCAPTURENVPROC>(wglGetProcAddress("glEndVideoCaptureNV"))(video_capture_slot);
}

inline void glGetVideoCaptureivNV(GLuint video_capture_slot, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVIDEOCAPTUREIVNVPROC>(wglGetProcAddress("glGetVideoCaptureivNV"))(video_capture_slot, pname, params);
}

inline void glGetVideoCaptureStreamivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETVIDEOCAPTURESTREAMIVNVPROC>(wglGetProcAddress("glGetVideoCaptureStreamivNV"))(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETVIDEOCAPTURESTREAMFVNVPROC>(wglGetProcAddress("glGetVideoCaptureStreamfvNV"))(video_capture_slot, stream, pname, params);
}

inline void glGetVideoCaptureStreamdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params) 
{
	reinterpret_cast<PFNGLGETVIDEOCAPTURESTREAMDVNVPROC>(wglGetProcAddress("glGetVideoCaptureStreamdvNV"))(video_capture_slot, stream, pname, params);
}

inline GLenum glVideoCaptureNV(GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time) 
{
	return reinterpret_cast<PFNGLVIDEOCAPTURENVPROC>(wglGetProcAddress("glVideoCaptureNV"))(video_capture_slot, sequence_num, capture_time);
}

inline void glVideoCaptureStreamParameterivNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC>(wglGetProcAddress("glVideoCaptureStreamParameterivNV"))(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC>(wglGetProcAddress("glVideoCaptureStreamParameterfvNV"))(video_capture_slot, stream, pname, params);
}

inline void glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params) 
{
	reinterpret_cast<PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC>(wglGetProcAddress("glVideoCaptureStreamParameterdvNV"))(video_capture_slot, stream, pname, params);
}

inline void glViewportSwizzleNV(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew) 
{
	reinterpret_cast<PFNGLVIEWPORTSWIZZLENVPROC>(wglGetProcAddress("glViewportSwizzleNV"))(index, swizzlex, swizzley, swizzlez, swizzlew);
}

inline void glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) 
{
	reinterpret_cast<PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC>(wglGetProcAddress("glFramebufferTextureMultiviewOVR"))(target, attachment, texture, level, baseViewIndex, numViews);
}

inline void glHintPGI(GLenum target, GLint mode) 
{
	reinterpret_cast<PFNGLHINTPGIPROC>(wglGetProcAddress("glHintPGI"))(target, mode);
}

inline void glDetailTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points) 
{
	reinterpret_cast<PFNGLDETAILTEXFUNCSGISPROC>(wglGetProcAddress("glDetailTexFuncSGIS"))(target, n, points);
}

inline void glGetDetailTexFuncSGIS(GLenum target, GLfloat *points) 
{
	reinterpret_cast<PFNGLGETDETAILTEXFUNCSGISPROC>(wglGetProcAddress("glGetDetailTexFuncSGIS"))(target, points);
}

inline void glFogFuncSGIS(GLsizei n, const GLfloat *points) 
{
	reinterpret_cast<PFNGLFOGFUNCSGISPROC>(wglGetProcAddress("glFogFuncSGIS"))(n, points);
}

inline void glGetFogFuncSGIS(GLfloat *points) 
{
	reinterpret_cast<PFNGLGETFOGFUNCSGISPROC>(wglGetProcAddress("glGetFogFuncSGIS"))(points);
}

inline void glSampleMaskSGIS(GLclampf value, GLboolean invert) 
{
	reinterpret_cast<PFNGLSAMPLEMASKSGISPROC>(wglGetProcAddress("glSampleMaskSGIS"))(value, invert);
}

inline void glSamplePatternSGIS(GLenum pattern) 
{
	reinterpret_cast<PFNGLSAMPLEPATTERNSGISPROC>(wglGetProcAddress("glSamplePatternSGIS"))(pattern);
}

inline void glPixelTexGenParameteriSGIS(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLPIXELTEXGENPARAMETERISGISPROC>(wglGetProcAddress("glPixelTexGenParameteriSGIS"))(pname, param);
}

inline void glPixelTexGenParameterivSGIS(GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLPIXELTEXGENPARAMETERIVSGISPROC>(wglGetProcAddress("glPixelTexGenParameterivSGIS"))(pname, params);
}

inline void glPixelTexGenParameterfSGIS(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLPIXELTEXGENPARAMETERFSGISPROC>(wglGetProcAddress("glPixelTexGenParameterfSGIS"))(pname, param);
}

inline void glPixelTexGenParameterfvSGIS(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPIXELTEXGENPARAMETERFVSGISPROC>(wglGetProcAddress("glPixelTexGenParameterfvSGIS"))(pname, params);
}

inline void glGetPixelTexGenParameterivSGIS(GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC>(wglGetProcAddress("glGetPixelTexGenParameterivSGIS"))(pname, params);
}

inline void glGetPixelTexGenParameterfvSGIS(GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC>(wglGetProcAddress("glGetPixelTexGenParameterfvSGIS"))(pname, params);
}

inline void glPointParameterfSGIS(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFSGISPROC>(wglGetProcAddress("glPointParameterfSGIS"))(pname, param);
}

inline void glPointParameterfvSGIS(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLPOINTPARAMETERFVSGISPROC>(wglGetProcAddress("glPointParameterfvSGIS"))(pname, params);
}

inline void glSharpenTexFuncSGIS(GLenum target, GLsizei n, const GLfloat *points) 
{
	reinterpret_cast<PFNGLSHARPENTEXFUNCSGISPROC>(wglGetProcAddress("glSharpenTexFuncSGIS"))(target, n, points);
}

inline void glGetSharpenTexFuncSGIS(GLenum target, GLfloat *points) 
{
	reinterpret_cast<PFNGLGETSHARPENTEXFUNCSGISPROC>(wglGetProcAddress("glGetSharpenTexFuncSGIS"))(target, points);
}

inline void glTexImage4DSGIS(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXIMAGE4DSGISPROC>(wglGetProcAddress("glTexImage4DSGIS"))(target, level, internalformat, width, height, depth, size4d, border, format, type, pixels);
}

inline void glTexSubImage4DSGIS(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void *pixels) 
{
	reinterpret_cast<PFNGLTEXSUBIMAGE4DSGISPROC>(wglGetProcAddress("glTexSubImage4DSGIS"))(target, level, xoffset, yoffset, zoffset, woffset, width, height, depth, size4d, format, type, pixels);
}

inline void glTextureColorMaskSGIS(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) 
{
	reinterpret_cast<PFNGLTEXTURECOLORMASKSGISPROC>(wglGetProcAddress("glTextureColorMaskSGIS"))(red, green, blue, alpha);
}

inline void glGetTexFilterFuncSGIS(GLenum target, GLenum filter, GLfloat *weights) 
{
	reinterpret_cast<PFNGLGETTEXFILTERFUNCSGISPROC>(wglGetProcAddress("glGetTexFilterFuncSGIS"))(target, filter, weights);
}

inline void glTexFilterFuncSGIS(GLenum target, GLenum filter, GLsizei n, const GLfloat *weights) 
{
	reinterpret_cast<PFNGLTEXFILTERFUNCSGISPROC>(wglGetProcAddress("glTexFilterFuncSGIS"))(target, filter, n, weights);
}

inline void glAsyncMarkerSGIX(GLuint marker) 
{
	reinterpret_cast<PFNGLASYNCMARKERSGIXPROC>(wglGetProcAddress("glAsyncMarkerSGIX"))(marker);
}

inline GLint glFinishAsyncSGIX(GLuint *markerp) 
{
	return reinterpret_cast<PFNGLFINISHASYNCSGIXPROC>(wglGetProcAddress("glFinishAsyncSGIX"))(markerp);
}

inline GLint glPollAsyncSGIX(GLuint *markerp) 
{
	return reinterpret_cast<PFNGLPOLLASYNCSGIXPROC>(wglGetProcAddress("glPollAsyncSGIX"))(markerp);
}

inline GLuint glGenAsyncMarkersSGIX(GLsizei range) 
{
	return reinterpret_cast<PFNGLGENASYNCMARKERSSGIXPROC>(wglGetProcAddress("glGenAsyncMarkersSGIX"))(range);
}

inline void glDeleteAsyncMarkersSGIX(GLuint marker, GLsizei range) 
{
	reinterpret_cast<PFNGLDELETEASYNCMARKERSSGIXPROC>(wglGetProcAddress("glDeleteAsyncMarkersSGIX"))(marker, range);
}

inline GLboolean glIsAsyncMarkerSGIX(GLuint marker) 
{
	return reinterpret_cast<PFNGLISASYNCMARKERSGIXPROC>(wglGetProcAddress("glIsAsyncMarkerSGIX"))(marker);
}

inline void glFlushRasterSGIX(void) 
{
	reinterpret_cast<PFNGLFLUSHRASTERSGIXPROC>(wglGetProcAddress("glFlushRasterSGIX"))();
}

inline void glFragmentColorMaterialSGIX(GLenum face, GLenum mode) 
{
	reinterpret_cast<PFNGLFRAGMENTCOLORMATERIALSGIXPROC>(wglGetProcAddress("glFragmentColorMaterialSGIX"))(face, mode);
}

inline void glFragmentLightfSGIX(GLenum light, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTFSGIXPROC>(wglGetProcAddress("glFragmentLightfSGIX"))(light, pname, param);
}

inline void glFragmentLightfvSGIX(GLenum light, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTFVSGIXPROC>(wglGetProcAddress("glFragmentLightfvSGIX"))(light, pname, params);
}

inline void glFragmentLightiSGIX(GLenum light, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTISGIXPROC>(wglGetProcAddress("glFragmentLightiSGIX"))(light, pname, param);
}

inline void glFragmentLightivSGIX(GLenum light, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTIVSGIXPROC>(wglGetProcAddress("glFragmentLightivSGIX"))(light, pname, params);
}

inline void glFragmentLightModelfSGIX(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTMODELFSGIXPROC>(wglGetProcAddress("glFragmentLightModelfSGIX"))(pname, param);
}

inline void glFragmentLightModelfvSGIX(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTMODELFVSGIXPROC>(wglGetProcAddress("glFragmentLightModelfvSGIX"))(pname, params);
}

inline void glFragmentLightModeliSGIX(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTMODELISGIXPROC>(wglGetProcAddress("glFragmentLightModeliSGIX"))(pname, param);
}

inline void glFragmentLightModelivSGIX(GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLFRAGMENTLIGHTMODELIVSGIXPROC>(wglGetProcAddress("glFragmentLightModelivSGIX"))(pname, params);
}

inline void glFragmentMaterialfSGIX(GLenum face, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLFRAGMENTMATERIALFSGIXPROC>(wglGetProcAddress("glFragmentMaterialfSGIX"))(face, pname, param);
}

inline void glFragmentMaterialfvSGIX(GLenum face, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLFRAGMENTMATERIALFVSGIXPROC>(wglGetProcAddress("glFragmentMaterialfvSGIX"))(face, pname, params);
}

inline void glFragmentMaterialiSGIX(GLenum face, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLFRAGMENTMATERIALISGIXPROC>(wglGetProcAddress("glFragmentMaterialiSGIX"))(face, pname, param);
}

inline void glFragmentMaterialivSGIX(GLenum face, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLFRAGMENTMATERIALIVSGIXPROC>(wglGetProcAddress("glFragmentMaterialivSGIX"))(face, pname, params);
}

inline void glGetFragmentLightfvSGIX(GLenum light, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETFRAGMENTLIGHTFVSGIXPROC>(wglGetProcAddress("glGetFragmentLightfvSGIX"))(light, pname, params);
}

inline void glGetFragmentLightivSGIX(GLenum light, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFRAGMENTLIGHTIVSGIXPROC>(wglGetProcAddress("glGetFragmentLightivSGIX"))(light, pname, params);
}

inline void glGetFragmentMaterialfvSGIX(GLenum face, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETFRAGMENTMATERIALFVSGIXPROC>(wglGetProcAddress("glGetFragmentMaterialfvSGIX"))(face, pname, params);
}

inline void glGetFragmentMaterialivSGIX(GLenum face, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETFRAGMENTMATERIALIVSGIXPROC>(wglGetProcAddress("glGetFragmentMaterialivSGIX"))(face, pname, params);
}

inline void glLightEnviSGIX(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLLIGHTENVISGIXPROC>(wglGetProcAddress("glLightEnviSGIX"))(pname, param);
}

inline void glFrameZoomSGIX(GLint factor) 
{
	reinterpret_cast<PFNGLFRAMEZOOMSGIXPROC>(wglGetProcAddress("glFrameZoomSGIX"))(factor);
}

inline void glIglooInterfaceSGIX(GLenum pname, const void *params) 
{
	reinterpret_cast<PFNGLIGLOOINTERFACESGIXPROC>(wglGetProcAddress("glIglooInterfaceSGIX"))(pname, params);
}

inline GLint glGetInstrumentsSGIX(void) 
{
	return reinterpret_cast<PFNGLGETINSTRUMENTSSGIXPROC>(wglGetProcAddress("glGetInstrumentsSGIX"))();
}

inline void glInstrumentsBufferSGIX(GLsizei size, GLint *buffer) 
{
	reinterpret_cast<PFNGLINSTRUMENTSBUFFERSGIXPROC>(wglGetProcAddress("glInstrumentsBufferSGIX"))(size, buffer);
}

inline GLint glPollInstrumentsSGIX(GLint *marker_p) 
{
	return reinterpret_cast<PFNGLPOLLINSTRUMENTSSGIXPROC>(wglGetProcAddress("glPollInstrumentsSGIX"))(marker_p);
}

inline void glReadInstrumentsSGIX(GLint marker) 
{
	reinterpret_cast<PFNGLREADINSTRUMENTSSGIXPROC>(wglGetProcAddress("glReadInstrumentsSGIX"))(marker);
}

inline void glStartInstrumentsSGIX(void) 
{
	reinterpret_cast<PFNGLSTARTINSTRUMENTSSGIXPROC>(wglGetProcAddress("glStartInstrumentsSGIX"))();
}

inline void glStopInstrumentsSGIX(GLint marker) 
{
	reinterpret_cast<PFNGLSTOPINSTRUMENTSSGIXPROC>(wglGetProcAddress("glStopInstrumentsSGIX"))(marker);
}

inline void glGetListParameterfvSGIX(GLuint list, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETLISTPARAMETERFVSGIXPROC>(wglGetProcAddress("glGetListParameterfvSGIX"))(list, pname, params);
}

inline void glGetListParameterivSGIX(GLuint list, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETLISTPARAMETERIVSGIXPROC>(wglGetProcAddress("glGetListParameterivSGIX"))(list, pname, params);
}

inline void glListParameterfSGIX(GLuint list, GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLLISTPARAMETERFSGIXPROC>(wglGetProcAddress("glListParameterfSGIX"))(list, pname, param);
}

inline void glListParameterfvSGIX(GLuint list, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLLISTPARAMETERFVSGIXPROC>(wglGetProcAddress("glListParameterfvSGIX"))(list, pname, params);
}

inline void glListParameteriSGIX(GLuint list, GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLLISTPARAMETERISGIXPROC>(wglGetProcAddress("glListParameteriSGIX"))(list, pname, param);
}

inline void glListParameterivSGIX(GLuint list, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLLISTPARAMETERIVSGIXPROC>(wglGetProcAddress("glListParameterivSGIX"))(list, pname, params);
}

inline void glPixelTexGenSGIX(GLenum mode) 
{
	reinterpret_cast<PFNGLPIXELTEXGENSGIXPROC>(wglGetProcAddress("glPixelTexGenSGIX"))(mode);
}

inline void glDeformationMap3dSGIX(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points) 
{
	reinterpret_cast<PFNGLDEFORMATIONMAP3DSGIXPROC>(wglGetProcAddress("glDeformationMap3dSGIX"))(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeformationMap3fSGIX(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points) 
{
	reinterpret_cast<PFNGLDEFORMATIONMAP3FSGIXPROC>(wglGetProcAddress("glDeformationMap3fSGIX"))(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, w1, w2, wstride, worder, points);
}

inline void glDeformSGIX(GLbitfield mask) 
{
	reinterpret_cast<PFNGLDEFORMSGIXPROC>(wglGetProcAddress("glDeformSGIX"))(mask);
}

inline void glLoadIdentityDeformationMapSGIX(GLbitfield mask) 
{
	reinterpret_cast<PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC>(wglGetProcAddress("glLoadIdentityDeformationMapSGIX"))(mask);
}

inline void glReferencePlaneSGIX(const GLdouble *equation) 
{
	reinterpret_cast<PFNGLREFERENCEPLANESGIXPROC>(wglGetProcAddress("glReferencePlaneSGIX"))(equation);
}

inline void glSpriteParameterfSGIX(GLenum pname, GLfloat param) 
{
	reinterpret_cast<PFNGLSPRITEPARAMETERFSGIXPROC>(wglGetProcAddress("glSpriteParameterfSGIX"))(pname, param);
}

inline void glSpriteParameterfvSGIX(GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLSPRITEPARAMETERFVSGIXPROC>(wglGetProcAddress("glSpriteParameterfvSGIX"))(pname, params);
}

inline void glSpriteParameteriSGIX(GLenum pname, GLint param) 
{
	reinterpret_cast<PFNGLSPRITEPARAMETERISGIXPROC>(wglGetProcAddress("glSpriteParameteriSGIX"))(pname, param);
}

inline void glSpriteParameterivSGIX(GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLSPRITEPARAMETERIVSGIXPROC>(wglGetProcAddress("glSpriteParameterivSGIX"))(pname, params);
}

inline void glTagSampleBufferSGIX(void) 
{
	reinterpret_cast<PFNGLTAGSAMPLEBUFFERSGIXPROC>(wglGetProcAddress("glTagSampleBufferSGIX"))();
}

inline void glColorTableSGI(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table) 
{
	reinterpret_cast<PFNGLCOLORTABLESGIPROC>(wglGetProcAddress("glColorTableSGI"))(target, internalformat, width, format, type, table);
}

inline void glColorTableParameterfvSGI(GLenum target, GLenum pname, const GLfloat *params) 
{
	reinterpret_cast<PFNGLCOLORTABLEPARAMETERFVSGIPROC>(wglGetProcAddress("glColorTableParameterfvSGI"))(target, pname, params);
}

inline void glColorTableParameterivSGI(GLenum target, GLenum pname, const GLint *params) 
{
	reinterpret_cast<PFNGLCOLORTABLEPARAMETERIVSGIPROC>(wglGetProcAddress("glColorTableParameterivSGI"))(target, pname, params);
}

inline void glCopyColorTableSGI(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) 
{
	reinterpret_cast<PFNGLCOPYCOLORTABLESGIPROC>(wglGetProcAddress("glCopyColorTableSGI"))(target, internalformat, x, y, width);
}

inline void glGetColorTableSGI(GLenum target, GLenum format, GLenum type, void *table) 
{
	reinterpret_cast<PFNGLGETCOLORTABLESGIPROC>(wglGetProcAddress("glGetColorTableSGI"))(target, format, type, table);
}

inline void glGetColorTableParameterfvSGI(GLenum target, GLenum pname, GLfloat *params) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERFVSGIPROC>(wglGetProcAddress("glGetColorTableParameterfvSGI"))(target, pname, params);
}

inline void glGetColorTableParameterivSGI(GLenum target, GLenum pname, GLint *params) 
{
	reinterpret_cast<PFNGLGETCOLORTABLEPARAMETERIVSGIPROC>(wglGetProcAddress("glGetColorTableParameterivSGI"))(target, pname, params);
}

inline void glFinishTextureSUNX(void) 
{
	reinterpret_cast<PFNGLFINISHTEXTURESUNXPROC>(wglGetProcAddress("glFinishTextureSUNX"))();
}

inline void glGlobalAlphaFactorbSUN(GLbyte factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORBSUNPROC>(wglGetProcAddress("glGlobalAlphaFactorbSUN"))(factor);
}

inline void glGlobalAlphaFactorsSUN(GLshort factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORSSUNPROC>(wglGetProcAddress("glGlobalAlphaFactorsSUN"))(factor);
}

inline void glGlobalAlphaFactoriSUN(GLint factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORISUNPROC>(wglGetProcAddress("glGlobalAlphaFactoriSUN"))(factor);
}

inline void glGlobalAlphaFactorfSUN(GLfloat factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORFSUNPROC>(wglGetProcAddress("glGlobalAlphaFactorfSUN"))(factor);
}

inline void glGlobalAlphaFactordSUN(GLdouble factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORDSUNPROC>(wglGetProcAddress("glGlobalAlphaFactordSUN"))(factor);
}

inline void glGlobalAlphaFactorubSUN(GLubyte factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORUBSUNPROC>(wglGetProcAddress("glGlobalAlphaFactorubSUN"))(factor);
}

inline void glGlobalAlphaFactorusSUN(GLushort factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORUSSUNPROC>(wglGetProcAddress("glGlobalAlphaFactorusSUN"))(factor);
}

inline void glGlobalAlphaFactoruiSUN(GLuint factor) 
{
	reinterpret_cast<PFNGLGLOBALALPHAFACTORUISUNPROC>(wglGetProcAddress("glGlobalAlphaFactoruiSUN"))(factor);
}

inline void glDrawMeshArraysSUN(GLenum mode, GLint first, GLsizei count, GLsizei width) 
{
	reinterpret_cast<PFNGLDRAWMESHARRAYSSUNPROC>(wglGetProcAddress("glDrawMeshArraysSUN"))(mode, first, count, width);
}

inline void glReplacementCodeuiSUN(GLuint code) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUISUNPROC>(wglGetProcAddress("glReplacementCodeuiSUN"))(code);
}

inline void glReplacementCodeusSUN(GLushort code) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUSSUNPROC>(wglGetProcAddress("glReplacementCodeusSUN"))(code);
}

inline void glReplacementCodeubSUN(GLubyte code) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUBSUNPROC>(wglGetProcAddress("glReplacementCodeubSUN"))(code);
}

inline void glReplacementCodeuivSUN(const GLuint *code) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUIVSUNPROC>(wglGetProcAddress("glReplacementCodeuivSUN"))(code);
}

inline void glReplacementCodeusvSUN(const GLushort *code) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUSVSUNPROC>(wglGetProcAddress("glReplacementCodeusvSUN"))(code);
}

inline void glReplacementCodeubvSUN(const GLubyte *code) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUBVSUNPROC>(wglGetProcAddress("glReplacementCodeubvSUN"))(code);
}

inline void glReplacementCodePointerSUN(GLenum type, GLsizei stride, const void **pointer) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEPOINTERSUNPROC>(wglGetProcAddress("glReplacementCodePointerSUN"))(type, stride, pointer);
}

inline void glColor4ubVertex2fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y) 
{
	reinterpret_cast<PFNGLCOLOR4UBVERTEX2FSUNPROC>(wglGetProcAddress("glColor4ubVertex2fSUN"))(r, g, b, a, x, y);
}

inline void glColor4ubVertex2fvSUN(const GLubyte *c, const GLfloat *v) 
{
	reinterpret_cast<PFNGLCOLOR4UBVERTEX2FVSUNPROC>(wglGetProcAddress("glColor4ubVertex2fvSUN"))(c, v);
}

inline void glColor4ubVertex3fSUN(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLCOLOR4UBVERTEX3FSUNPROC>(wglGetProcAddress("glColor4ubVertex3fSUN"))(r, g, b, a, x, y, z);
}

inline void glColor4ubVertex3fvSUN(const GLubyte *c, const GLfloat *v) 
{
	reinterpret_cast<PFNGLCOLOR4UBVERTEX3FVSUNPROC>(wglGetProcAddress("glColor4ubVertex3fvSUN"))(c, v);
}

inline void glColor3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLCOLOR3FVERTEX3FSUNPROC>(wglGetProcAddress("glColor3fVertex3fSUN"))(r, g, b, x, y, z);
}

inline void glColor3fVertex3fvSUN(const GLfloat *c, const GLfloat *v) 
{
	reinterpret_cast<PFNGLCOLOR3FVERTEX3FVSUNPROC>(wglGetProcAddress("glColor3fVertex3fvSUN"))(c, v);
}

inline void glNormal3fVertex3fSUN(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLNORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glNormal3fVertex3fSUN"))(nx, ny, nz, x, y, z);
}

inline void glNormal3fVertex3fvSUN(const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLNORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glNormal3fVertex3fvSUN"))(n, v);
}

inline void glColor4fNormal3fVertex3fSUN(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glColor4fNormal3fVertex3fSUN"))(r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glColor4fNormal3fVertex3fvSUN(const GLfloat *c, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glColor4fNormal3fVertex3fvSUN"))(c, n, v);
}

inline void glTexCoord2fVertex3fSUN(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLTEXCOORD2FVERTEX3FSUNPROC>(wglGetProcAddress("glTexCoord2fVertex3fSUN"))(s, t, x, y, z);
}

inline void glTexCoord2fVertex3fvSUN(const GLfloat *tc, const GLfloat *v) 
{
	reinterpret_cast<PFNGLTEXCOORD2FVERTEX3FVSUNPROC>(wglGetProcAddress("glTexCoord2fVertex3fvSUN"))(tc, v);
}

inline void glTexCoord4fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLTEXCOORD4FVERTEX4FSUNPROC>(wglGetProcAddress("glTexCoord4fVertex4fSUN"))(s, t, p, q, x, y, z, w);
}

inline void glTexCoord4fVertex4fvSUN(const GLfloat *tc, const GLfloat *v) 
{
	reinterpret_cast<PFNGLTEXCOORD4FVERTEX4FVSUNPROC>(wglGetProcAddress("glTexCoord4fVertex4fvSUN"))(tc, v);
}

inline void glTexCoord2fColor4ubVertex3fSUN(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC>(wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN"))(s, t, r, g, b, a, x, y, z);
}

inline void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat *tc, const GLubyte *c, const GLfloat *v) 
{
	reinterpret_cast<PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC>(wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN"))(tc, c, v);
}

inline void glTexCoord2fColor3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC>(wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN"))(s, t, r, g, b, x, y, z);
}

inline void glTexCoord2fColor3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *v) 
{
	reinterpret_cast<PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC>(wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN"))(tc, c, v);
}

inline void glTexCoord2fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN"))(s, t, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN"))(tc, n, v);
}

inline void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN"))(s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN"))(tc, c, n, v);
}

inline void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w) 
{
	reinterpret_cast<PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC>(wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN"))(s, t, p, q, r, g, b, a, nx, ny, nz, x, y, z, w);
}

inline void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC>(wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN"))(tc, c, n, v);
}

inline void glReplacementCodeuiVertex3fSUN(GLuint rc, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiVertex3fSUN"))(rc, x, y, z);
}

inline void glReplacementCodeuiVertex3fvSUN(const GLuint *rc, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiVertex3fvSUN"))(rc, v);
}

inline void glReplacementCodeuiColor4ubVertex3fSUN(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN"))(rc, r, g, b, a, x, y, z);
}

inline void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint *rc, const GLubyte *c, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN"))(rc, c, v);
}

inline void glReplacementCodeuiColor3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiColor3fVertex3fSUN"))(rc, r, g, b, x, y, z);
}

inline void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN"))(rc, c, v);
}

inline void glReplacementCodeuiNormal3fVertex3fSUN(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN"))(rc, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN"))(rc, n, v);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN"))(rc, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN"))(rc, c, n, v);
}

inline void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN"))(rc, s, t, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN"))(rc, tc, v);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN"))(rc, s, t, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN"))(rc, tc, n, v);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC>(wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN"))(rc, s, t, r, g, b, a, nx, ny, nz, x, y, z);
}

inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) 
{
	reinterpret_cast<PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC>(wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN"))(rc, tc, c, n, v);
}

