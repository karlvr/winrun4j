/*******************************************************************************
* This program and the accompanying materials
* are made available under the terms of the Common Public License v1.0
* which accompanies this distribution, and is available at 
* http://www.eclipse.org/legal/cpl-v10.html
* 
* Contributors:
*     Peter Smith
*******************************************************************************/

#ifdef JNI_UTILS_H

static BYTE g_classLoaderCode[] = {
    0xca, 0xfe, 0xba, 0xbe, 0x00, 0x00, 0x00, 0x2e, 0x00, 0xc6, 
    0x07, 0x00, 0x02, 0x01, 0x00, 0x32, 0x6f, 0x72, 0x67, 0x2f, 
    0x62, 0x6f, 0x72, 0x69, 0x73, 0x2f, 0x77, 0x69, 0x6e, 0x72, 
    0x75, 0x6e, 0x34, 0x6a, 0x2f, 0x63, 0x6c, 0x61, 0x73, 0x73, 
    0x6c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x2f, 0x45, 0x6d, 0x62, 
    0x65, 0x64, 0x64, 0x65, 0x64, 0x43, 0x6c, 0x61, 0x73, 0x73, 
    0x4c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x07, 0x00, 0x04, 0x01, 
    0x00, 0x17, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 0x65, 0x74, 
    0x2f, 0x55, 0x52, 0x4c, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x4c, 
    0x6f, 0x61, 0x64, 0x65, 0x72, 0x01, 0x00, 0x04, 0x6a, 0x61, 
    0x72, 0x73, 0x01, 0x00, 0x13, 0x5b, 0x4c, 0x6a, 0x61, 0x76, 
    0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 
    0x69, 0x6e, 0x67, 0x3b, 0x01, 0x00, 0x07, 0x62, 0x75, 0x66, 
    0x66, 0x65, 0x72, 0x73, 0x01, 0x00, 0x16, 0x5b, 0x4c, 0x6a, 
    0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 0x6f, 0x2f, 0x42, 0x79, 
    0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x3b, 0x01, 
    0x00, 0x06, 0x3c, 0x69, 0x6e, 0x69, 0x74, 0x3e, 0x01, 0x00, 
    0x03, 0x28, 0x29, 0x56, 0x01, 0x00, 0x04, 0x43, 0x6f, 0x64, 
    0x65, 0x0a, 0x00, 0x01, 0x00, 0x0d, 0x0c, 0x00, 0x0e, 0x00, 
    0x0f, 0x01, 0x00, 0x08, 0x6d, 0x61, 0x6b, 0x65, 0x55, 0x72, 
    0x6c, 0x73, 0x01, 0x00, 0x11, 0x28, 0x29, 0x5b, 0x4c, 0x6a, 
    0x61, 0x76, 0x61, 0x2f, 0x6e, 0x65, 0x74, 0x2f, 0x55, 0x52, 
    0x4c, 0x3b, 0x0a, 0x00, 0x11, 0x00, 0x13, 0x07, 0x00, 0x12, 
    0x01, 0x00, 0x15, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 
    0x6e, 0x67, 0x2f, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x4c, 0x6f, 
    0x61, 0x64, 0x65, 0x72, 0x0c, 0x00, 0x14, 0x00, 0x15, 0x01, 
    0x00, 0x14, 0x67, 0x65, 0x74, 0x53, 0x79, 0x73, 0x74, 0x65, 
    0x6d, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x4c, 0x6f, 0x61, 0x64, 
    0x65, 0x72, 0x01, 0x00, 0x19, 0x28, 0x29, 0x4c, 0x6a, 0x61, 
    0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x43, 0x6c, 
    0x61, 0x73, 0x73, 0x4c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x3b, 
    0x0a, 0x00, 0x03, 0x00, 0x17, 0x0c, 0x00, 0x09, 0x00, 0x18, 
    0x01, 0x00, 0x29, 0x28, 0x5b, 0x4c, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x6e, 0x65, 0x74, 0x2f, 0x55, 0x52, 0x4c, 0x3b, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 
    0x43, 0x6c, 0x61, 0x73, 0x73, 0x4c, 0x6f, 0x61, 0x64, 0x65, 
    0x72, 0x3b, 0x29, 0x56, 0x0a, 0x00, 0x01, 0x00, 0x1a, 0x0c, 
    0x00, 0x1b, 0x00, 0x1c, 0x01, 0x00, 0x08, 0x6c, 0x69, 0x73, 
    0x74, 0x4a, 0x61, 0x72, 0x73, 0x01, 0x00, 0x27, 0x28, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 
    0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x29, 0x5b, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 
    0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x09, 0x00, 0x01, 
    0x00, 0x1e, 0x0c, 0x00, 0x05, 0x00, 0x06, 0x07, 0x00, 0x20, 
    0x01, 0x00, 0x13, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 
    0x6f, 0x2f, 0x42, 0x79, 0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 
    0x65, 0x72, 0x09, 0x00, 0x01, 0x00, 0x22, 0x0c, 0x00, 0x07, 
    0x00, 0x08, 0x0a, 0x00, 0x01, 0x00, 0x24, 0x0c, 0x00, 0x25, 
    0x00, 0x26, 0x01, 0x00, 0x06, 0x67, 0x65, 0x74, 0x4a, 0x61, 
    0x72, 0x01, 0x00, 0x3b, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 
    0x6e, 0x67, 0x3b, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 
    0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 
    0x3b, 0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 
    0x6f, 0x2f, 0x42, 0x79, 0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 
    0x65, 0x72, 0x3b, 0x01, 0x00, 0x0f, 0x4c, 0x69, 0x6e, 0x65, 
    0x4e, 0x75, 0x6d, 0x62, 0x65, 0x72, 0x54, 0x61, 0x62, 0x6c, 
    0x65, 0x01, 0x00, 0x12, 0x4c, 0x6f, 0x63, 0x61, 0x6c, 0x56, 
    0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x54, 0x61, 0x62, 
    0x6c, 0x65, 0x01, 0x00, 0x04, 0x74, 0x68, 0x69, 0x73, 0x01, 
    0x00, 0x34, 0x4c, 0x6f, 0x72, 0x67, 0x2f, 0x62, 0x6f, 0x72, 
    0x69, 0x73, 0x2f, 0x77, 0x69, 0x6e, 0x72, 0x75, 0x6e, 0x34, 
    0x6a, 0x2f, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x6c, 0x6f, 0x61, 
    0x64, 0x65, 0x72, 0x2f, 0x45, 0x6d, 0x62, 0x65, 0x64, 0x64, 
    0x65, 0x64, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x4c, 0x6f, 0x61, 
    0x64, 0x65, 0x72, 0x3b, 0x01, 0x00, 0x01, 0x69, 0x01, 0x00, 
    0x01, 0x49, 0x08, 0x00, 0x2e, 0x01, 0x00, 0x0f, 0x6a, 0x61, 
    0x76, 0x61, 0x2e, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x2e, 0x70, 
    0x61, 0x74, 0x68, 0x0a, 0x00, 0x30, 0x00, 0x32, 0x07, 0x00, 
    0x31, 0x01, 0x00, 0x10, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 
    0x61, 0x6e, 0x67, 0x2f, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 
    0x0c, 0x00, 0x33, 0x00, 0x34, 0x01, 0x00, 0x0b, 0x67, 0x65, 
    0x74, 0x50, 0x72, 0x6f, 0x70, 0x65, 0x72, 0x74, 0x79, 0x01, 
    0x00, 0x26, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 
    0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 
    0x3b, 0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 
    0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 
    0x07, 0x00, 0x36, 0x01, 0x00, 0x0c, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x6e, 0x65, 0x74, 0x2f, 0x55, 0x52, 0x4c, 0x07, 0x00, 
    0x38, 0x01, 0x00, 0x19, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x75, 
    0x74, 0x69, 0x6c, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 
    0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x69, 0x7a, 0x65, 0x72, 0x08, 
    0x00, 0x3a, 0x01, 0x00, 0x01, 0x3b, 0x0a, 0x00, 0x37, 0x00, 
    0x3c, 0x0c, 0x00, 0x09, 0x00, 0x3d, 0x01, 0x00, 0x27, 0x28, 
    0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 
    0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x4c, 0x6a, 
    0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 
    0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x29, 0x56, 0x07, 0x00, 
    0x3f, 0x01, 0x00, 0x13, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x75, 
    0x74, 0x69, 0x6c, 0x2f, 0x41, 0x72, 0x72, 0x61, 0x79, 0x4c, 
    0x69, 0x73, 0x74, 0x0a, 0x00, 0x3e, 0x00, 0x41, 0x0c, 0x00, 
    0x09, 0x00, 0x0a, 0x0a, 0x00, 0x37, 0x00, 0x43, 0x0c, 0x00, 
    0x44, 0x00, 0x45, 0x01, 0x00, 0x09, 0x6e, 0x65, 0x78, 0x74, 
    0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x01, 0x00, 0x14, 0x28, 0x29, 
    0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 
    0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x0a, 0x00, 
    0x35, 0x00, 0x47, 0x0c, 0x00, 0x09, 0x00, 0x48, 0x01, 0x00, 
    0x15, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 
    0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 
    0x29, 0x56, 0x0a, 0x00, 0x3e, 0x00, 0x4a, 0x0c, 0x00, 0x4b, 
    0x00, 0x4c, 0x01, 0x00, 0x03, 0x61, 0x64, 0x64, 0x01, 0x00, 
    0x15, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 
    0x6e, 0x67, 0x2f, 0x4f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x3b, 
    0x29, 0x5a, 0x0a, 0x00, 0x37, 0x00, 0x4e, 0x0c, 0x00, 0x4f, 
    0x00, 0x50, 0x01, 0x00, 0x0d, 0x68, 0x61, 0x73, 0x4d, 0x6f, 
    0x72, 0x65, 0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x73, 0x01, 0x00, 
    0x03, 0x28, 0x29, 0x5a, 0x0a, 0x00, 0x3e, 0x00, 0x52, 0x0c, 
    0x00, 0x53, 0x00, 0x54, 0x01, 0x00, 0x07, 0x74, 0x6f, 0x41, 
    0x72, 0x72, 0x61, 0x79, 0x01, 0x00, 0x28, 0x28, 0x5b, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 
    0x4f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x3b, 0x29, 0x5b, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 
    0x4f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x3b, 0x07, 0x00, 0x56, 
    0x01, 0x00, 0x0f, 0x5b, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 
    0x6e, 0x65, 0x74, 0x2f, 0x55, 0x52, 0x4c, 0x3b, 0x07, 0x00, 
    0x58, 0x01, 0x00, 0x1e, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 
    0x65, 0x74, 0x2f, 0x4d, 0x61, 0x6c, 0x66, 0x6f, 0x72, 0x6d, 
    0x65, 0x64, 0x55, 0x52, 0x4c, 0x45, 0x78, 0x63, 0x65, 0x70, 
    0x74, 0x69, 0x6f, 0x6e, 0x01, 0x00, 0x01, 0x70, 0x01, 0x00, 
    0x12, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 
    0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x01, 
    0x00, 0x02, 0x73, 0x74, 0x01, 0x00, 0x1b, 0x4c, 0x6a, 0x61, 
    0x76, 0x61, 0x2f, 0x75, 0x74, 0x69, 0x6c, 0x2f, 0x53, 0x74, 
    0x72, 0x69, 0x6e, 0x67, 0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x69, 
    0x7a, 0x65, 0x72, 0x3b, 0x01, 0x00, 0x04, 0x75, 0x72, 0x6c, 
    0x73, 0x01, 0x00, 0x15, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 
    0x75, 0x74, 0x69, 0x6c, 0x2f, 0x41, 0x72, 0x72, 0x61, 0x79, 
    0x4c, 0x69, 0x73, 0x74, 0x3b, 0x01, 0x00, 0x0c, 0x66, 0x69, 
    0x6e, 0x64, 0x52, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 
    0x01, 0x00, 0x22, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 
    0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 
    0x67, 0x3b, 0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 
    0x65, 0x74, 0x2f, 0x55, 0x52, 0x4c, 0x3b, 0x07, 0x00, 0x62, 
    0x01, 0x00, 0x16, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 
    0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x42, 
    0x75, 0x66, 0x66, 0x65, 0x72, 0x08, 0x00, 0x64, 0x01, 0x00, 
    0x07, 0x72, 0x65, 0x73, 0x3a, 0x2f, 0x2f, 0x2f, 0x0a, 0x00, 
    0x61, 0x00, 0x47, 0x0a, 0x00, 0x61, 0x00, 0x67, 0x0c, 0x00, 
    0x68, 0x00, 0x69, 0x01, 0x00, 0x06, 0x61, 0x70, 0x70, 0x65, 
    0x6e, 0x64, 0x01, 0x00, 0x2c, 0x28, 0x4c, 0x6a, 0x61, 0x76, 
    0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 
    0x69, 0x6e, 0x67, 0x3b, 0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 
    0x6e, 0x67, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x3b, 0x0a, 
    0x00, 0x61, 0x00, 0x6b, 0x0c, 0x00, 0x6c, 0x00, 0x45, 0x01, 
    0x00, 0x08, 0x74, 0x6f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 
    0x01, 0x00, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x01, 0x00, 0x01, 
    0x65, 0x01, 0x00, 0x20, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 
    0x6e, 0x65, 0x74, 0x2f, 0x4d, 0x61, 0x6c, 0x66, 0x6f, 0x72, 
    0x6d, 0x65, 0x64, 0x55, 0x52, 0x4c, 0x45, 0x78, 0x63, 0x65, 
    0x70, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x01, 0x00, 0x13, 0x67, 
    0x65, 0x74, 0x52, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 
    0x41, 0x73, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x01, 0x00, 
    0x29, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 
    0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 
    0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x69, 0x6f, 0x2f, 
    0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 
    0x6d, 0x3b, 0x0a, 0x00, 0x1f, 0x00, 0x73, 0x0c, 0x00, 0x74, 
    0x00, 0x75, 0x01, 0x00, 0x08, 0x70, 0x6f, 0x73, 0x69, 0x74, 
    0x69, 0x6f, 0x6e, 0x01, 0x00, 0x14, 0x28, 0x49, 0x29, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 0x6f, 0x2f, 0x42, 
    0x75, 0x66, 0x66, 0x65, 0x72, 0x3b, 0x07, 0x00, 0x77, 0x01, 
    0x00, 0x1c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x75, 0x74, 0x69, 
    0x6c, 0x2f, 0x7a, 0x69, 0x70, 0x2f, 0x5a, 0x69, 0x70, 0x49, 
    0x6e, 0x70, 0x75, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 
    0x07, 0x00, 0x79, 0x01, 0x00, 0x34, 0x6f, 0x72, 0x67, 0x2f, 
    0x62, 0x6f, 0x72, 0x69, 0x73, 0x2f, 0x77, 0x69, 0x6e, 0x72, 
    0x75, 0x6e, 0x34, 0x6a, 0x2f, 0x63, 0x6c, 0x61, 0x73, 0x73, 
    0x6c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x2f, 0x42, 0x79, 0x74, 
    0x65, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x49, 0x6e, 0x70, 
    0x75, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x0a, 0x00, 
    0x78, 0x00, 0x7b, 0x0c, 0x00, 0x09, 0x00, 0x7c, 0x01, 0x00, 
    0x18, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 
    0x6f, 0x2f, 0x42, 0x79, 0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 
    0x65, 0x72, 0x3b, 0x29, 0x56, 0x0a, 0x00, 0x76, 0x00, 0x7e, 
    0x0c, 0x00, 0x09, 0x00, 0x7f, 0x01, 0x00, 0x18, 0x28, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x69, 0x6f, 0x2f, 0x49, 0x6e, 
    0x70, 0x75, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x3b, 
    0x29, 0x56, 0x0a, 0x00, 0x81, 0x00, 0x83, 0x07, 0x00, 0x82, 
    0x01, 0x00, 0x16, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x75, 0x74, 
    0x69, 0x6c, 0x2f, 0x7a, 0x69, 0x70, 0x2f, 0x5a, 0x69, 0x70, 
    0x45, 0x6e, 0x74, 0x72, 0x79, 0x0c, 0x00, 0x84, 0x00, 0x45, 
    0x01, 0x00, 0x07, 0x67, 0x65, 0x74, 0x4e, 0x61, 0x6d, 0x65, 
    0x0a, 0x00, 0x86, 0x00, 0x88, 0x07, 0x00, 0x87, 0x01, 0x00, 
    0x10, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 
    0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x0c, 0x00, 0x89, 
    0x00, 0x4c, 0x01, 0x00, 0x06, 0x65, 0x71, 0x75, 0x61, 0x6c, 
    0x73, 0x0a, 0x00, 0x76, 0x00, 0x8b, 0x0c, 0x00, 0x8c, 0x00, 
    0x8d, 0x01, 0x00, 0x0c, 0x67, 0x65, 0x74, 0x4e, 0x65, 0x78, 
    0x74, 0x45, 0x6e, 0x74, 0x72, 0x79, 0x01, 0x00, 0x1a, 0x28, 
    0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x75, 0x74, 0x69, 
    0x6c, 0x2f, 0x7a, 0x69, 0x70, 0x2f, 0x5a, 0x69, 0x70, 0x45, 
    0x6e, 0x74, 0x72, 0x79, 0x3b, 0x07, 0x00, 0x8f, 0x01, 0x00, 
    0x13, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x69, 0x6f, 0x2f, 0x49, 
    0x4f, 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69, 0x6f, 0x6e, 
    0x01, 0x00, 0x02, 0x62, 0x62, 0x01, 0x00, 0x15, 0x4c, 0x6a, 
    0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 0x6f, 0x2f, 0x42, 0x79, 
    0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x3b, 0x01, 
    0x00, 0x03, 0x7a, 0x69, 0x73, 0x01, 0x00, 0x1e, 0x4c, 0x6a, 
    0x61, 0x76, 0x61, 0x2f, 0x75, 0x74, 0x69, 0x6c, 0x2f, 0x7a, 
    0x69, 0x70, 0x2f, 0x5a, 0x69, 0x70, 0x49, 0x6e, 0x70, 0x75, 
    0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x3b, 0x01, 0x00, 
    0x02, 0x7a, 0x65, 0x01, 0x00, 0x18, 0x4c, 0x6a, 0x61, 0x76, 
    0x61, 0x2f, 0x75, 0x74, 0x69, 0x6c, 0x2f, 0x7a, 0x69, 0x70, 
    0x2f, 0x5a, 0x69, 0x70, 0x45, 0x6e, 0x74, 0x72, 0x79, 0x3b, 
    0x01, 0x00, 0x15, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x69, 
    0x6f, 0x2f, 0x49, 0x4f, 0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 
    0x69, 0x6f, 0x6e, 0x3b, 0x01, 0x00, 0x09, 0x66, 0x69, 0x6e, 
    0x64, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x01, 0x00, 0x25, 0x28, 
    0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 
    0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x29, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 
    0x43, 0x6c, 0x61, 0x73, 0x73, 0x3b, 0x01, 0x00, 0x0a, 0x45, 
    0x78, 0x63, 0x65, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x07, 
    0x00, 0x9b, 0x01, 0x00, 0x20, 0x6a, 0x61, 0x76, 0x61, 0x2f, 
    0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x43, 0x6c, 0x61, 0x73, 0x73, 
    0x4e, 0x6f, 0x74, 0x46, 0x6f, 0x75, 0x6e, 0x64, 0x45, 0x78, 
    0x63, 0x65, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x00, 0x86, 
    0x00, 0x9d, 0x0c, 0x00, 0x9e, 0x00, 0x9f, 0x01, 0x00, 0x07, 
    0x72, 0x65, 0x70, 0x6c, 0x61, 0x63, 0x65, 0x01, 0x00, 0x16, 
    0x28, 0x43, 0x43, 0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 
    0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 0x6e, 
    0x67, 0x3b, 0x08, 0x00, 0xa1, 0x01, 0x00, 0x06, 0x2e, 0x63, 
    0x6c, 0x61, 0x73, 0x73, 0x0a, 0x00, 0x86, 0x00, 0xa3, 0x0c, 
    0x00, 0xa4, 0x00, 0x34, 0x01, 0x00, 0x06, 0x63, 0x6f, 0x6e, 
    0x63, 0x61, 0x74, 0x07, 0x00, 0xa6, 0x01, 0x00, 0x1d, 0x6a, 
    0x61, 0x76, 0x61, 0x2f, 0x69, 0x6f, 0x2f, 0x42, 0x79, 0x74, 
    0x65, 0x41, 0x72, 0x72, 0x61, 0x79, 0x4f, 0x75, 0x74, 0x70, 
    0x75, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x0a, 0x00, 
    0xa5, 0x00, 0x41, 0x0a, 0x00, 0xa5, 0x00, 0xa9, 0x0c, 0x00, 
    0xaa, 0x00, 0xab, 0x01, 0x00, 0x05, 0x77, 0x72, 0x69, 0x74, 
    0x65, 0x01, 0x00, 0x07, 0x28, 0x5b, 0x42, 0x49, 0x49, 0x29, 
    0x56, 0x0a, 0x00, 0x76, 0x00, 0xad, 0x0c, 0x00, 0xae, 0x00, 
    0xaf, 0x01, 0x00, 0x04, 0x72, 0x65, 0x61, 0x64, 0x01, 0x00, 
    0x05, 0x28, 0x5b, 0x42, 0x29, 0x49, 0x0a, 0x00, 0xa5, 0x00, 
    0xb1, 0x0c, 0x00, 0xb2, 0x00, 0xb3, 0x01, 0x00, 0x0b, 0x74, 
    0x6f, 0x42, 0x79, 0x74, 0x65, 0x41, 0x72, 0x72, 0x61, 0x79, 
    0x01, 0x00, 0x04, 0x28, 0x29, 0x5b, 0x42, 0x0a, 0x00, 0x01, 
    0x00, 0xb5, 0x0c, 0x00, 0xb6, 0x00, 0xb7, 0x01, 0x00, 0x0b, 
    0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x43, 0x6c, 0x61, 0x73, 
    0x73, 0x01, 0x00, 0x29, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x53, 0x74, 0x72, 0x69, 
    0x6e, 0x67, 0x3b, 0x5b, 0x42, 0x49, 0x49, 0x29, 0x4c, 0x6a, 
    0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x43, 
    0x6c, 0x61, 0x73, 0x73, 0x3b, 0x0a, 0x00, 0x9a, 0x00, 0xb9, 
    0x0c, 0x00, 0x09, 0x00, 0xba, 0x01, 0x00, 0x2a, 0x28, 0x4c, 
    0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 
    0x53, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x3b, 0x4c, 0x6a, 0x61, 
    0x76, 0x61, 0x2f, 0x6c, 0x61, 0x6e, 0x67, 0x2f, 0x54, 0x68, 
    0x72, 0x6f, 0x77, 0x61, 0x62, 0x6c, 0x65, 0x3b, 0x29, 0x56, 
    0x0a, 0x00, 0x9a, 0x00, 0x47, 0x01, 0x00, 0x05, 0x63, 0x6e, 
    0x61, 0x6d, 0x65, 0x01, 0x00, 0x01, 0x73, 0x01, 0x00, 0x03, 
    0x62, 0x6f, 0x73, 0x01, 0x00, 0x1f, 0x4c, 0x6a, 0x61, 0x76, 
    0x61, 0x2f, 0x69, 0x6f, 0x2f, 0x42, 0x79, 0x74, 0x65, 0x41, 
    0x72, 0x72, 0x61, 0x79, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 
    0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x3b, 0x01, 0x00, 0x03, 
    0x62, 0x75, 0x66, 0x01, 0x00, 0x02, 0x5b, 0x42, 0x01, 0x00, 
    0x03, 0x6c, 0x65, 0x6e, 0x01, 0x00, 0x02, 0x63, 0x62, 0x01, 
    0x00, 0x0a, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x46, 0x69, 
    0x6c, 0x65, 0x01, 0x00, 0x18, 0x45, 0x6d, 0x62, 0x65, 0x64, 
    0x64, 0x65, 0x64, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x4c, 0x6f, 
    0x61, 0x64, 0x65, 0x72, 0x2e, 0x6a, 0x61, 0x76, 0x61, 0x00, 
    0x21, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 
    0x02, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 
    0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x01, 0x00, 
    0x09, 0x00, 0x0a, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x00, 0x00, 
    0x8c, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x40, 0x2a, 
    0xb8, 0x00, 0x0c, 0xb8, 0x00, 0x10, 0xb7, 0x00, 0x16, 0x2a, 
    0x01, 0xb8, 0x00, 0x19, 0xb5, 0x00, 0x1d, 0x2a, 0x2a, 0xb4, 
    0x00, 0x1d, 0xbe, 0xbd, 0x00, 0x1f, 0xb5, 0x00, 0x21, 0x03, 
    0x3c, 0xa7, 0x00, 0x16, 0x2a, 0xb4, 0x00, 0x21, 0x1b, 0x01, 
    0x2a, 0xb4, 0x00, 0x1d, 0x1b, 0x32, 0xb8, 0x00, 0x23, 0x53, 
    0x84, 0x01, 0x01, 0x1b, 0x2a, 0xb4, 0x00, 0x21, 0xbe, 0xa1, 
    0xff, 0xe7, 0xb1, 0x00, 0x00, 0x00, 0x02, 0x00, 0x27, 0x00, 
    0x00, 0x00, 0x1e, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1e, 0x00, 
    0x0a, 0x00, 0x1f, 0x00, 0x12, 0x00, 0x20, 0x00, 0x1e, 0x00, 
    0x21, 0x00, 0x23, 0x00, 0x22, 0x00, 0x33, 0x00, 0x21, 0x00, 
    0x3f, 0x00, 0x24, 0x00, 0x28, 0x00, 0x00, 0x00, 0x16, 0x00, 
    0x02, 0x00, 0x00, 0x00, 0x40, 0x00, 0x29, 0x00, 0x2a, 0x00, 
    0x00, 0x00, 0x20, 0x00, 0x1f, 0x00, 0x2b, 0x00, 0x2c, 0x00, 
    0x01, 0x00, 0x0a, 0x00, 0x0e, 0x00, 0x0f, 0x00, 0x01, 0x00, 
    0x0b, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x04, 0x00, 0x04, 0x00, 
    0x00, 0x00, 0x4c, 0x12, 0x2d, 0xb8, 0x00, 0x2f, 0x4b, 0x2a, 
    0xc7, 0x00, 0x08, 0x03, 0xbd, 0x00, 0x35, 0xb0, 0xbb, 0x00, 
    0x37, 0x59, 0x2a, 0x12, 0x39, 0xb7, 0x00, 0x3b, 0x4c, 0xbb, 
    0x00, 0x3e, 0x59, 0xb7, 0x00, 0x40, 0x4d, 0xa7, 0x00, 0x17, 
    0x2c, 0xbb, 0x00, 0x35, 0x59, 0x2b, 0xb6, 0x00, 0x42, 0xb7, 
    0x00, 0x46, 0xb6, 0x00, 0x49, 0x57, 0xa7, 0x00, 0x04, 0x4e, 
    0x2b, 0xb6, 0x00, 0x4d, 0x9a, 0xff, 0xe8, 0x2c, 0x03, 0xbd, 
    0x00, 0x35, 0xb6, 0x00, 0x51, 0xc0, 0x00, 0x55, 0xb0, 0x00, 
    0x01, 0x00, 0x25, 0x00, 0x35, 0x00, 0x38, 0x00, 0x57, 0x00, 
    0x02, 0x00, 0x27, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x0a, 0x00, 
    0x00, 0x00, 0x27, 0x00, 0x06, 0x00, 0x28, 0x00, 0x0a, 0x00, 
    0x29, 0x00, 0x0f, 0x00, 0x2a, 0x00, 0x1a, 0x00, 0x2b, 0x00, 
    0x22, 0x00, 0x2c, 0x00, 0x25, 0x00, 0x2e, 0x00, 0x38, 0x00, 
    0x2f, 0x00, 0x39, 0x00, 0x2c, 0x00, 0x40, 0x00, 0x32, 0x00, 
    0x28, 0x00, 0x00, 0x00, 0x20, 0x00, 0x03, 0x00, 0x06, 0x00, 
    0x46, 0x00, 0x59, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x1a, 0x00, 
    0x32, 0x00, 0x5b, 0x00, 0x5c, 0x00, 0x01, 0x00, 0x22, 0x00, 
    0x2a, 0x00, 0x5d, 0x00, 0x5e, 0x00, 0x02, 0x00, 0x01, 0x00, 
    0x5f, 0x00, 0x60, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x00, 0x00, 
    0x69, 0x00, 0x05, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1b, 0xbb, 
    0x00, 0x35, 0x59, 0xbb, 0x00, 0x61, 0x59, 0x12, 0x63, 0xb7, 
    0x00, 0x65, 0x2b, 0xb6, 0x00, 0x66, 0xb6, 0x00, 0x6a, 0xb7, 
    0x00, 0x46, 0xb0, 0x4d, 0x01, 0xb0, 0x00, 0x01, 0x00, 0x00, 
    0x00, 0x17, 0x00, 0x18, 0x00, 0x57, 0x00, 0x02, 0x00, 0x27, 
    0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x37, 
    0x00, 0x18, 0x00, 0x38, 0x00, 0x19, 0x00, 0x39, 0x00, 0x28, 
    0x00, 0x00, 0x00, 0x20, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1b, 
    0x00, 0x29, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 
    0x00, 0x6d, 0x00, 0x5a, 0x00, 0x01, 0x00, 0x19, 0x00, 0x02, 
    0x00, 0x6e, 0x00, 0x6f, 0x00, 0x02, 0x00, 0x01, 0x00, 0x70, 
    0x00, 0x71, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xfe, 
    0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x58, 0x03, 0x3d, 
    0xa7, 0x00, 0x4b, 0x2a, 0xb4, 0x00, 0x21, 0x1c, 0x32, 0x4e, 
    0x2d, 0x03, 0xb6, 0x00, 0x72, 0x57, 0xbb, 0x00, 0x76, 0x59, 
    0xbb, 0x00, 0x78, 0x59, 0x2d, 0xb7, 0x00, 0x7a, 0xb7, 0x00, 
    0x7d, 0x3a, 0x04, 0x01, 0x3a, 0x05, 0xa7, 0x00, 0x12, 0x2b, 
    0x19, 0x05, 0xb6, 0x00, 0x80, 0xb6, 0x00, 0x85, 0x99, 0x00, 
    0x06, 0x19, 0x04, 0xb0, 0x19, 0x04, 0xb6, 0x00, 0x8a, 0x59, 
    0x3a, 0x05, 0xc7, 0xff, 0xe9, 0xa7, 0x00, 0x07, 0x3a, 0x06, 
    0x01, 0xb0, 0x84, 0x02, 0x01, 0x1c, 0x2a, 0xb4, 0x00, 0x21, 
    0xbe, 0xa1, 0xff, 0xb2, 0x01, 0xb0, 0x00, 0x02, 0x00, 0x26, 
    0x00, 0x37, 0x00, 0x46, 0x00, 0x8e, 0x00, 0x38, 0x00, 0x43, 
    0x00, 0x46, 0x00, 0x8e, 0x00, 0x02, 0x00, 0x27, 0x00, 0x00, 
    0x00, 0x36, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x05, 
    0x00, 0x3f, 0x00, 0x0c, 0x00, 0x40, 0x00, 0x12, 0x00, 0x41, 
    0x00, 0x23, 0x00, 0x42, 0x00, 0x26, 0x00, 0x44, 0x00, 0x29, 
    0x00, 0x45, 0x00, 0x35, 0x00, 0x46, 0x00, 0x38, 0x00, 0x44, 
    0x00, 0x46, 0x00, 0x49, 0x00, 0x48, 0x00, 0x4a, 0x00, 0x4a, 
    0x00, 0x3e, 0x00, 0x56, 0x00, 0x4d, 0x00, 0x28, 0x00, 0x00, 
    0x00, 0x48, 0x00, 0x07, 0x00, 0x00, 0x00, 0x58, 0x00, 0x29, 
    0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x6d, 
    0x00, 0x5a, 0x00, 0x01, 0x00, 0x02, 0x00, 0x54, 0x00, 0x2b, 
    0x00, 0x2c, 0x00, 0x02, 0x00, 0x0c, 0x00, 0x3e, 0x00, 0x90, 
    0x00, 0x91, 0x00, 0x03, 0x00, 0x23, 0x00, 0x27, 0x00, 0x92, 
    0x00, 0x93, 0x00, 0x04, 0x00, 0x26, 0x00, 0x24, 0x00, 0x94, 
    0x00, 0x95, 0x00, 0x05, 0x00, 0x48, 0x00, 0x02, 0x00, 0x6e, 
    0x00, 0x96, 0x00, 0x06, 0x00, 0x04, 0x00, 0x97, 0x00, 0x98, 
    0x00, 0x02, 0x00, 0x99, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 
    0x00, 0x9a, 0x00, 0x0b, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x05, 
    0x00, 0x0c, 0x00, 0x00, 0x00, 0xba, 0x2b, 0x10, 0x2e, 0x10, 
    0x2f, 0xb6, 0x00, 0x9c, 0x12, 0xa0, 0xb6, 0x00, 0xa2, 0x4d, 
    0x03, 0x3e, 0xa7, 0x00, 0x98, 0x2a, 0xb4, 0x00, 0x21, 0x1d, 
    0x32, 0x3a, 0x04, 0x19, 0x04, 0x03, 0xb6, 0x00, 0x72, 0x57, 
    0xbb, 0x00, 0x76, 0x59, 0xbb, 0x00, 0x78, 0x59, 0x19, 0x04, 
    0xb7, 0x00, 0x7a, 0xb7, 0x00, 0x7d, 0x3a, 0x05, 0x01, 0x3a, 
    0x06, 0xa7, 0x00, 0x53, 0x19, 0x06, 0xb6, 0x00, 0x80, 0x3a, 
    0x07, 0x2c, 0x19, 0x07, 0xb6, 0x00, 0x85, 0x99, 0x00, 0x43, 
    0xbb, 0x00, 0xa5, 0x59, 0xb7, 0x00, 0xa7, 0x3a, 0x08, 0x11, 
    0x10, 0x00, 0xbc, 0x08, 0x3a, 0x09, 0x03, 0x36, 0x0a, 0xa7, 
    0x00, 0x0d, 0x19, 0x08, 0x19, 0x09, 0x03, 0x15, 0x0a, 0xb6, 
    0x00, 0xa8, 0x19, 0x05, 0x19, 0x09, 0xb6, 0x00, 0xac, 0x59, 
    0x36, 0x0a, 0x9d, 0xff, 0xec, 0x19, 0x08, 0xb6, 0x00, 0xb0, 
    0x3a, 0x0b, 0x2a, 0x2b, 0x19, 0x0b, 0x03, 0x19, 0x0b, 0xbe, 
    0xb6, 0x00, 0xb4, 0xb0, 0x19, 0x05, 0xb6, 0x00, 0x8a, 0x59, 
    0x3a, 0x06, 0xc7, 0xff, 0xa8, 0xa7, 0x00, 0x10, 0x3a, 0x07, 
    0xbb, 0x00, 0x9a, 0x59, 0x2b, 0x19, 0x07, 0xb7, 0x00, 0xb8, 
    0xbf, 0x84, 0x03, 0x01, 0x1d, 0x2a, 0xb4, 0x00, 0x21, 0xbe, 
    0xa1, 0xff, 0x65, 0xbb, 0x00, 0x9a, 0x59, 0x2b, 0xb7, 0x00, 
    0xbb, 0xbf, 0x00, 0x02, 0x00, 0x37, 0x00, 0x89, 0x00, 0x98, 
    0x00, 0x8e, 0x00, 0x8a, 0x00, 0x95, 0x00, 0x98, 0x00, 0x8e, 
    0x00, 0x02, 0x00, 0x27, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x16, 
    0x00, 0x00, 0x00, 0x51, 0x00, 0x0e, 0x00, 0x52, 0x00, 0x13, 
    0x00, 0x53, 0x00, 0x1b, 0x00, 0x54, 0x00, 0x22, 0x00, 0x55, 
    0x00, 0x34, 0x00, 0x56, 0x00, 0x37, 0x00, 0x58, 0x00, 0x3a, 
    0x00, 0x59, 0x00, 0x41, 0x00, 0x5a, 0x00, 0x4a, 0x00, 0x5b, 
    0x00, 0x53, 0x00, 0x5c, 0x00, 0x5a, 0x00, 0x5d, 0x00, 0x5d, 
    0x00, 0x5e, 0x00, 0x60, 0x00, 0x5f, 0x00, 0x6a, 0x00, 0x5e, 
    0x00, 0x77, 0x00, 0x61, 0x00, 0x7e, 0x00, 0x62, 0x00, 0x8a, 
    0x00, 0x58, 0x00, 0x98, 0x00, 0x65, 0x00, 0x9a, 0x00, 0x66, 
    0x00, 0xa5, 0x00, 0x52, 0x00, 0xb1, 0x00, 0x6a, 0x00, 0x28, 
    0x00, 0x00, 0x00, 0x84, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xba, 
    0x00, 0x29, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0xba, 
    0x00, 0x6d, 0x00, 0x5a, 0x00, 0x01, 0x00, 0x0e, 0x00, 0xac, 
    0x00, 0xbc, 0x00, 0x5a, 0x00, 0x02, 0x00, 0x10, 0x00, 0xa1, 
    0x00, 0x2b, 0x00, 0x2c, 0x00, 0x03, 0x00, 0x1b, 0x00, 0x8a, 
    0x00, 0x90, 0x00, 0x91, 0x00, 0x04, 0x00, 0x34, 0x00, 0x71, 
    0x00, 0x92, 0x00, 0x93, 0x00, 0x05, 0x00, 0x37, 0x00, 0x6e, 
    0x00, 0x94, 0x00, 0x95, 0x00, 0x06, 0x00, 0x41, 0x00, 0x49, 
    0x00, 0xbd, 0x00, 0x5a, 0x00, 0x07, 0x00, 0x53, 0x00, 0x37, 
    0x00, 0xbe, 0x00, 0xbf, 0x00, 0x08, 0x00, 0x5a, 0x00, 0x30, 
    0x00, 0xc0, 0x00, 0xc1, 0x00, 0x09, 0x00, 0x5d, 0x00, 0x2d, 
    0x00, 0xc2, 0x00, 0x2c, 0x00, 0x0a, 0x00, 0x7e, 0x00, 0x0c, 
    0x00, 0xc3, 0x00, 0xc1, 0x00, 0x0b, 0x00, 0x9a, 0x00, 0x0b, 
    0x00, 0x6e, 0x00, 0x96, 0x00, 0x07, 0x01, 0x09, 0x00, 0x25, 
    0x00, 0x26, 0x00, 0x00, 0x01, 0x09, 0x00, 0x1b, 0x00, 0x1c, 
    0x00, 0x00, 0x00, 0x01, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x02, 
    0x00, 0xc5
};

static BYTE g_byteBufferISCode[] = {
    0xca, 0xfe, 0xba, 0xbe, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x3f, 
    0x07, 0x00, 0x02, 0x01, 0x00, 0x34, 0x6f, 0x72, 0x67, 0x2f, 
    0x62, 0x6f, 0x72, 0x69, 0x73, 0x2f, 0x77, 0x69, 0x6e, 0x72, 
    0x75, 0x6e, 0x34, 0x6a, 0x2f, 0x63, 0x6c, 0x61, 0x73, 0x73, 
    0x6c, 0x6f, 0x61, 0x64, 0x65, 0x72, 0x2f, 0x42, 0x79, 0x74, 
    0x65, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x49, 0x6e, 0x70, 
    0x75, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 0x07, 0x00, 
    0x04, 0x01, 0x00, 0x13, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x69, 
    0x6f, 0x2f, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x74, 0x72, 
    0x65, 0x61, 0x6d, 0x01, 0x00, 0x02, 0x62, 0x62, 0x01, 0x00, 
    0x15, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 0x6f, 
    0x2f, 0x42, 0x79, 0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 0x65, 
    0x72, 0x3b, 0x01, 0x00, 0x06, 0x3c, 0x69, 0x6e, 0x69, 0x74, 
    0x3e, 0x01, 0x00, 0x18, 0x28, 0x4c, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x6e, 0x69, 0x6f, 0x2f, 0x42, 0x79, 0x74, 0x65, 0x42, 
    0x75, 0x66, 0x66, 0x65, 0x72, 0x3b, 0x29, 0x56, 0x01, 0x00, 
    0x04, 0x43, 0x6f, 0x64, 0x65, 0x0a, 0x00, 0x03, 0x00, 0x0b, 
    0x0c, 0x00, 0x07, 0x00, 0x0c, 0x01, 0x00, 0x03, 0x28, 0x29, 
    0x56, 0x09, 0x00, 0x01, 0x00, 0x0e, 0x0c, 0x00, 0x05, 0x00, 
    0x06, 0x01, 0x00, 0x0f, 0x4c, 0x69, 0x6e, 0x65, 0x4e, 0x75, 
    0x6d, 0x62, 0x65, 0x72, 0x54, 0x61, 0x62, 0x6c, 0x65, 0x01, 
    0x00, 0x12, 0x4c, 0x6f, 0x63, 0x61, 0x6c, 0x56, 0x61, 0x72, 
    0x69, 0x61, 0x62, 0x6c, 0x65, 0x54, 0x61, 0x62, 0x6c, 0x65, 
    0x01, 0x00, 0x04, 0x74, 0x68, 0x69, 0x73, 0x01, 0x00, 0x36, 
    0x4c, 0x6f, 0x72, 0x67, 0x2f, 0x62, 0x6f, 0x72, 0x69, 0x73, 
    0x2f, 0x77, 0x69, 0x6e, 0x72, 0x75, 0x6e, 0x34, 0x6a, 0x2f, 
    0x63, 0x6c, 0x61, 0x73, 0x73, 0x6c, 0x6f, 0x61, 0x64, 0x65, 
    0x72, 0x2f, 0x42, 0x79, 0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 
    0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x74, 0x72, 
    0x65, 0x61, 0x6d, 0x3b, 0x01, 0x00, 0x04, 0x72, 0x65, 0x61, 
    0x64, 0x01, 0x00, 0x03, 0x28, 0x29, 0x49, 0x01, 0x00, 0x0a, 
    0x45, 0x78, 0x63, 0x65, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73, 
    0x07, 0x00, 0x17, 0x01, 0x00, 0x13, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x69, 0x6f, 0x2f, 0x49, 0x4f, 0x45, 0x78, 0x63, 0x65, 
    0x70, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x00, 0x19, 0x00, 0x1b, 
    0x07, 0x00, 0x1a, 0x01, 0x00, 0x13, 0x6a, 0x61, 0x76, 0x61, 
    0x2f, 0x6e, 0x69, 0x6f, 0x2f, 0x42, 0x79, 0x74, 0x65, 0x42, 
    0x75, 0x66, 0x66, 0x65, 0x72, 0x0c, 0x00, 0x1c, 0x00, 0x1d, 
    0x01, 0x00, 0x03, 0x67, 0x65, 0x74, 0x01, 0x00, 0x03, 0x28, 
    0x29, 0x42, 0x03, 0x7f, 0xff, 0xff, 0xff, 0x07, 0x00, 0x20, 
    0x01, 0x00, 0x21, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 0x69, 
    0x6f, 0x2f, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x55, 0x6e, 
    0x64, 0x65, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x45, 0x78, 0x63, 
    0x65, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x01, 0x00, 0x01, 0x65, 
    0x01, 0x00, 0x23, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 0x6e, 
    0x69, 0x6f, 0x2f, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x55, 
    0x6e, 0x64, 0x65, 0x72, 0x66, 0x6c, 0x6f, 0x77, 0x45, 0x78, 
    0x63, 0x65, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x01, 0x00, 
    0x05, 0x28, 0x5b, 0x42, 0x29, 0x49, 0x0a, 0x00, 0x19, 0x00, 
    0x25, 0x0c, 0x00, 0x26, 0x00, 0x14, 0x01, 0x00, 0x09, 0x72, 
    0x65, 0x6d, 0x61, 0x69, 0x6e, 0x69, 0x6e, 0x67, 0x0a, 0x00, 
    0x19, 0x00, 0x28, 0x0c, 0x00, 0x1c, 0x00, 0x29, 0x01, 0x00, 
    0x1b, 0x28, 0x5b, 0x42, 0x49, 0x49, 0x29, 0x4c, 0x6a, 0x61, 
    0x76, 0x61, 0x2f, 0x6e, 0x69, 0x6f, 0x2f, 0x42, 0x79, 0x74, 
    0x65, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x3b, 0x01, 0x00, 
    0x01, 0x62, 0x01, 0x00, 0x02, 0x5b, 0x42, 0x01, 0x00, 0x03, 
    0x6c, 0x65, 0x6e, 0x01, 0x00, 0x01, 0x49, 0x01, 0x00, 0x07, 
    0x28, 0x5b, 0x42, 0x49, 0x49, 0x29, 0x49, 0x01, 0x00, 0x03, 
    0x6f, 0x66, 0x66, 0x01, 0x00, 0x04, 0x73, 0x6b, 0x69, 0x70, 
    0x01, 0x00, 0x04, 0x28, 0x4a, 0x29, 0x4a, 0x0a, 0x00, 0x19, 
    0x00, 0x33, 0x0c, 0x00, 0x34, 0x00, 0x14, 0x01, 0x00, 0x08, 
    0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x00, 
    0x19, 0x00, 0x36, 0x0c, 0x00, 0x34, 0x00, 0x37, 0x01, 0x00, 
    0x14, 0x28, 0x49, 0x29, 0x4c, 0x6a, 0x61, 0x76, 0x61, 0x2f, 
    0x6e, 0x69, 0x6f, 0x2f, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 
    0x3b, 0x01, 0x00, 0x01, 0x6e, 0x01, 0x00, 0x01, 0x4a, 0x01, 
    0x00, 0x09, 0x61, 0x76, 0x61, 0x69, 0x6c, 0x61, 0x62, 0x6c, 
    0x65, 0x01, 0x00, 0x0d, 0x6d, 0x61, 0x72, 0x6b, 0x53, 0x75, 
    0x70, 0x70, 0x6f, 0x72, 0x74, 0x65, 0x64, 0x01, 0x00, 0x03, 
    0x28, 0x29, 0x5a, 0x01, 0x00, 0x0a, 0x53, 0x6f, 0x75, 0x72, 
    0x63, 0x65, 0x46, 0x69, 0x6c, 0x65, 0x01, 0x00, 0x1a, 0x42, 
    0x79, 0x74, 0x65, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x49, 
    0x6e, 0x70, 0x75, 0x74, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6d, 
    0x2e, 0x6a, 0x61, 0x76, 0x61, 0x00, 0x21, 0x00, 0x01, 0x00, 
    0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x05, 0x00, 
    0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x01, 0x00, 0x07, 0x00, 
    0x08, 0x00, 0x01, 0x00, 0x09, 0x00, 0x00, 0x00, 0x46, 0x00, 
    0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x2a, 0xb7, 0x00, 
    0x0a, 0x2a, 0x2b, 0xb5, 0x00, 0x0d, 0xb1, 0x00, 0x00, 0x00, 
    0x02, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 
    0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x16, 0x00, 0x09, 0x00, 
    0x17, 0x00, 0x10, 0x00, 0x00, 0x00, 0x16, 0x00, 0x02, 0x00, 
    0x00, 0x00, 0x0a, 0x00, 0x11, 0x00, 0x12, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x0a, 0x00, 0x05, 0x00, 0x06, 0x00, 0x01, 0x00, 
    0x01, 0x00, 0x13, 0x00, 0x14, 0x00, 0x02, 0x00, 0x15, 0x00, 
    0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x16, 0x00, 0x09, 0x00, 
    0x00, 0x00, 0x52, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 
    0x0e, 0x2a, 0xb4, 0x00, 0x0d, 0xb6, 0x00, 0x18, 0x12, 0x1e, 
    0x7e, 0xac, 0x4c, 0x02, 0xac, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x0a, 0x00, 0x0b, 0x00, 0x1f, 0x00, 0x02, 0x00, 0x0f, 0x00, 
    0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1b, 0x00, 
    0x0b, 0x00, 0x1c, 0x00, 0x0c, 0x00, 0x1d, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x16, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0e, 0x00, 
    0x11, 0x00, 0x12, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x02, 0x00, 
    0x21, 0x00, 0x22, 0x00, 0x01, 0x00, 0x01, 0x00, 0x13, 0x00, 
    0x23, 0x00, 0x02, 0x00, 0x15, 0x00, 0x00, 0x00, 0x04, 0x00, 
    0x01, 0x00, 0x16, 0x00, 0x09, 0x00, 0x00, 0x00, 0x71, 0x00, 
    0x04, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x2b, 0xbe, 0x3d, 
    0x1c, 0x2a, 0xb4, 0x00, 0x0d, 0xb6, 0x00, 0x24, 0xa4, 0x00, 
    0x0b, 0x2a, 0xb4, 0x00, 0x0d, 0xb6, 0x00, 0x24, 0x3d, 0x2a, 
    0xb4, 0x00, 0x0d, 0x2b, 0x03, 0x1c, 0xb6, 0x00, 0x27, 0x57, 
    0x1c, 0xac, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0f, 0x00, 0x00, 
    0x00, 0x16, 0x00, 0x05, 0x00, 0x00, 0x00, 0x22, 0x00, 0x03, 
    0x00, 0x23, 0x00, 0x0e, 0x00, 0x24, 0x00, 0x16, 0x00, 0x27, 
    0x00, 0x21, 0x00, 0x28, 0x00, 0x10, 0x00, 0x00, 0x00, 0x20, 
    0x00, 0x03, 0x00, 0x00, 0x00, 0x23, 0x00, 0x11, 0x00, 0x12, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x2a, 0x00, 0x2b, 
    0x00, 0x01, 0x00, 0x03, 0x00, 0x20, 0x00, 0x2c, 0x00, 0x2d, 
    0x00, 0x02, 0x00, 0x01, 0x00, 0x13, 0x00, 0x2e, 0x00, 0x02, 
    0x00, 0x15, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x16, 
    0x00, 0x09, 0x00, 0x00, 0x00, 0x74, 0x00, 0x04, 0x00, 0x04, 
    0x00, 0x00, 0x00, 0x20, 0x1d, 0x2a, 0xb4, 0x00, 0x0d, 0xb6, 
    0x00, 0x24, 0xa4, 0x00, 0x0b, 0x2a, 0xb4, 0x00, 0x0d, 0xb6, 
    0x00, 0x24, 0x3e, 0x2a, 0xb4, 0x00, 0x0d, 0x2b, 0x1c, 0x1d, 
    0xb6, 0x00, 0x27, 0x57, 0x1d, 0xac, 0x00, 0x00, 0x00, 0x02, 
    0x00, 0x0f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x04, 0x00, 0x00, 
    0x00, 0x2c, 0x00, 0x0b, 0x00, 0x2d, 0x00, 0x13, 0x00, 0x30, 
    0x00, 0x1e, 0x00, 0x31, 0x00, 0x10, 0x00, 0x00, 0x00, 0x2a, 
    0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x11, 0x00, 0x12, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x2a, 0x00, 0x2b, 
    0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x2f, 0x00, 0x2d, 
    0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x2c, 0x00, 0x2d, 
    0x00, 0x03, 0x00, 0x01, 0x00, 0x30, 0x00, 0x31, 0x00, 0x02, 
    0x00, 0x15, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 0x16, 
    0x00, 0x09, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x05, 0x00, 0x03, 
    0x00, 0x00, 0x00, 0x2b, 0x1f, 0x2a, 0xb4, 0x00, 0x0d, 0xb6, 
    0x00, 0x24, 0x85, 0x94, 0x9e, 0x00, 0x0c, 0x2a, 0xb4, 0x00, 
    0x0d, 0xb6, 0x00, 0x24, 0x85, 0x40, 0x2a, 0xb4, 0x00, 0x0d, 
    0x2a, 0xb4, 0x00, 0x0d, 0xb6, 0x00, 0x32, 0x85, 0x1f, 0x61, 
    0x88, 0xb6, 0x00, 0x35, 0x57, 0x1f, 0xad, 0x00, 0x00, 0x00, 
    0x02, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x04, 0x00, 
    0x00, 0x00, 0x35, 0x00, 0x0d, 0x00, 0x36, 0x00, 0x16, 0x00, 
    0x38, 0x00, 0x29, 0x00, 0x39, 0x00, 0x10, 0x00, 0x00, 0x00, 
    0x16, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x11, 0x00, 
    0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x38, 0x00, 
    0x39, 0x00, 0x01, 0x00, 0x01, 0x00, 0x3a, 0x00, 0x14, 0x00, 
    0x02, 0x00, 0x15, 0x00, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00, 
    0x16, 0x00, 0x09, 0x00, 0x00, 0x00, 0x32, 0x00, 0x01, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x08, 0x2a, 0xb4, 0x00, 0x0d, 0xb6, 
    0x00, 0x24, 0xac, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0f, 0x00, 
    0x00, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3d, 0x00, 
    0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 
    0x08, 0x00, 0x11, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 
    0x3b, 0x00, 0x3c, 0x00, 0x01, 0x00, 0x09, 0x00, 0x00, 0x00, 
    0x2c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x03, 
    0xac, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0f, 0x00, 0x00, 0x00, 
    0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x41, 0x00, 0x10, 0x00, 
    0x00, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 
    0x11, 0x00, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3d, 0x00, 
    0x00, 0x00, 0x02, 0x00, 0x3e
};

#endif
