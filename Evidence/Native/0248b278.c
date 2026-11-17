/* IL2CPP: Dino.BusSand.RenderQuality$$Shadows
void Dino_BusSand_RenderQuality__Shadows (UnityEngine_Renderer_o* r, bool cast, bool receive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$Shadows
   void Dino_BusSand_RenderQuality__Shadows (UnityEngine_Renderer_o* r, bool cast, bool receive,
   const MethodInfo* method); */

void Dino_BusSand_RenderQuality__Shadows_238b278(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = param_1;
  if ((bRam0000000004f9c89c & 1) == 0) {
    lVar3 = FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c89c = 1;
  }
  puVar1 = PTR_DAT_04cb27f8;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cb27f8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar3 = Dino_BusSand_RenderQuality__get_RealShadows_238a174();
    uVar2 = (uint)lVar3 & 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224(lVar3,uVar2);
  }
  UnityEngine_Renderer__set_shadowCastingMode_4373c54(param_1,uVar2,0);
  if ((param_3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_RenderQuality__get_RealShadows_238a174();
  }
  if ((bRam0000000004fa68c8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf67a0,uVar2 & 1,0);
    bRam0000000004fa68c8 = 1;
  }
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    if (pcRam0000000004fa6950 == (code *)0x0) {
      pcRam0000000004fa6950 = (code *)FUN_02132f40(&UNK_00e26033);
    }
                    /* WARNING: Could not recover jumptable at 0x04473e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa6950)(lVar3,uVar2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

