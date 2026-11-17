/* IL2CPP: Dino.BusSand.RenderQuality$$Detect
int32_t Dino_BusSand_RenderQuality__Detect (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$Detect
   int32_t Dino_BusSand_RenderQuality__Detect (const MethodInfo* method); */

undefined4 Dino_BusSand_RenderQuality__Detect_238a384(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = UnityEngine_SystemInfo__get_graphicsShaderLevel_43cc810(0);
  if ((iVar1 < 0x23) ||
     (iVar1 = UnityEngine_SystemInfo__get_systemMemorySize_43cc2d0(0), iVar1 < 3000)) {
    uVar2 = 0;
  }
  else {
    iVar1 = UnityEngine_SystemInfo__get_systemMemorySize_43cc2d0(0);
    uVar2 = 1;
    if (0x157b < iVar1) {
      iVar1 = UnityEngine_SystemInfo__get_processorCount_43cc280(0);
      uVar2 = 1;
      if (5 < iVar1) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}

