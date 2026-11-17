/* IL2CPP: Dino.BusSand.RenderQuality$$Initialize
void Dino_BusSand_RenderQuality__Initialize (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.RenderQuality$$Initialize
   void Dino_BusSand_RenderQuality__Initialize (const MethodInfo* method); */

void Dino_BusSand_RenderQuality__Initialize_238a2f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c892 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb27f8);
    bRam0000000004f9c892 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar8 = *(long *)(lVar4 + 0xb8);
  if (*(char *)(lVar8 + 0x10) != '\0') {
    return;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  *(undefined1 *)(lVar8 + 0x10) = 1;
  Dino_BusSand_RenderQuality__Detect_238a384();
  Dino_BusSand_RenderQuality__Apply_238a3e4();
  puVar1 = PTR_DAT_04cb27f8;
  if ((bRam0000000004f9c893 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbd38);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb19d0);
    FUN_02132f7c(PTR_DAT_04cbbd40);
    FUN_02132f7c(PTR_DAT_04cbbd48);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbbd50);
    bRam0000000004f9c893 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar8 = *(long *)(lVar4 + 0xb8);
  if (*(char *)(lVar8 + 0x11) != '\0') {
    return;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  puVar1 = PTR_DAT_04cbbd50;
  *(undefined1 *)(lVar8 + 0x11) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Rendering_Universal_UniversalRenderPipeline__get_asset_423e5ac(0);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = UnityEngine_Rendering_Universal_UniversalRenderPipeline__get_asset_423e5ac(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)(lVar4 + 100) = 1;
  }
  puVar1 = PTR_DAT_04cbbd38;
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbbd38);
  System_Action_ScriptableRenderContext__object____ctor_35f82d0
            (uVar5,0,*(undefined8 *)PTR_DAT_04cbbd40,0);
  if (*(int *)(*(long *)PTR_DAT_04cb19d0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  UnityEngine_Rendering_RenderPipelineManager__add_beginCameraRendering_43ed8c8(uVar5,0);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action_ScriptableRenderContext__object____ctor_35f82d0
            (uVar5,0,*(undefined8 *)PTR_DAT_04cbbd48,0);
  puVar1 = PTR_DAT_04cb19d0;
  if ((bRam0000000004fa927a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbd38,0);
    FUN_02132f7c(PTR_DAT_04cb19d0);
    bRam0000000004fa927a = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cbbd38;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  do {
    lVar8 = System_Delegate__Combine_4872324(lVar4,uVar5,0);
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar2;
      lVar7 = thunk_FUN_0216e7a0(lVar8,uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar8,uVar9);
      }
    }
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar1;
    }
    lVar8 = FUN_0216aff4(*(long *)(lVar8 + 0xb8) + 0x38,lVar7,lVar4);
    bVar3 = lVar8 != lVar4;
    lVar4 = lVar8;
  } while (bVar3);
  return;
}

