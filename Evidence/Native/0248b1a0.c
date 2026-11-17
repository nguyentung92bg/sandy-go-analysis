/* IL2CPP: Dino.BusSand.RenderQuality$$SetupLight
void Dino_BusSand_RenderQuality__SetupLight (UnityEngine_Light_o* light, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.RenderQuality$$SetupLight
   void Dino_BusSand_RenderQuality__SetupLight (UnityEngine_Light_o* light, const MethodInfo*
   method); */

void Dino_BusSand_RenderQuality__SetupLight_238b1a0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000004f9c89b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c89b = 1;
  }
  puVar1 = PTR_DAT_04cb27f8;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Light__set_type_4384e4c(param_1,1,0);
  UnityEngine_Light__set_color_4385308(_UNK_00e205c4,_UNK_00e201b0,0x3f800000,0x3f800000,param_1,0);
  UnityEngine_Light__set_intensity_4385790(0x3f800000,param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_RenderQuality__get_RealShadows_238a174();
  uVar3 = 2;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  UnityEngine_Light__set_shadows_4387930(param_1,uVar3,0);
  UnityEngine_Light__set_shadowStrength_4387aa8(_UNK_00e2038c,param_1,0);
  if ((bRam0000000004fa712e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf69e0,1,0);
    bRam0000000004fa712e = 1;
  }
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    if (pcRam0000000004fa7370 == (code *)0x0) {
      pcRam0000000004fa7370 = (code *)FUN_02132f40(&UNK_00e2f68d);
    }
                    /* WARNING: Could not recover jumptable at 0x04488460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa7370)(lVar4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

