/* IL2CPP: Dino.BusSand.App.QaPilot.Runner.<Shot>d__24$$MoveNext
bool Dino_BusSand_App_QaPilot_Runner__Shot_d__24__MoveNext (Dino_BusSand_App_QaPilot_Runner__Shot_d__24_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0225d4c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner.<Shot>d__24$$MoveNext
   bool Dino_BusSand_App_QaPilot_Runner__Shot_d__24__MoveNext
   (Dino_BusSand_App_QaPilot_Runner__Shot_d__24_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_QaPilot_Runner__Shot_d__24__MoveNext_215d2b4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam0000000004f9b803 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caa228);
    FUN_02132f7c(PTR_DAT_04cabe98);
                    /* try { // try from 0225d2fc to 0235d313 has its CatchHandler @ 0225d2fc
                       catch() { ... } // from try @ 0225d2fc with catch @ 0225d2fc
                       catch() { ... } // from try @ 0225d320 with catch @ 0225d2fc
                       catch() { ... } // from try @ 0225d398 with catch @ 0225d2fc
                       catch() { ... } // from try @ 0225d3d8 with catch @ 0225d2fc */
    FUN_02132f7c(PTR_DAT_04cabea0);
    FUN_02132f7c(PTR_DAT_04caa488);
                    /* try { // try from 0225d314 to 0235d31f has its CatchHandler @ 0225d418 */
    FUN_02132f7c(PTR_DAT_04caba18);
                    /* try { // try from 0225d320 to 0235d38b has its CatchHandler @ 0225d2fc */
    FUN_02132f7c(PTR_DAT_04cabea8);
    bRam0000000004f9b803 = 1;
  }
  puVar2 = PTR_DAT_04cabe98;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForEndOfFrame___ctor_43ca4dc(uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar9 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture_445a39c(0);
    uVar4 = Dino_BusSand_App_QaPilot__get_Dir_215673c();
    if (*(int *)(*(long *)PTR_DAT_04caa228 + 0xe4) == 0) {
                    /* try { // try from 0225d38c to 0235d397 has its CatchHandler @ 0225d414 */
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 0225d398 to 0235d3cb has its CatchHandler @ 0225d2fc */
    uVar4 = System_IO_Path__Combine_4806e38(uVar4,*(undefined8 *)PTR_DAT_04caba18,0);
    System_IO_Directory__CreateDirectory_47f7a70(uVar4,0);
    lVar8 = *(long *)(param_1 + 0x20);
    uVar5 = System_IO_Path__GetInvalidFileNameChars_4809268(0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar5,uVar5);
    }
                    /* try { // try from 0225d3cc to 0235d3d7 has its CatchHandler @ 0225d410 */
    uVar5 = System_String__Split_46d5488(lVar8,uVar5,0);
                    /* try { // try from 0225d3d8 to 0235d42b has its CatchHandler @ 0225d2fc */
    uVar5 = System_String__Join_46d390c(*(undefined8 *)PTR_DAT_04caa488,uVar5,0);
    puVar2 = PTR_DAT_04cabea0;
    uVar6 = System_String__Concat_46c82e0(uVar5,*(undefined8 *)PTR_DAT_04cabea0,0);
                    /* catch() { ... } // from try @ 0225d3cc with catch @ 0225d410 */
    uVar4 = System_IO_Path__Combine_4806e38(uVar4,uVar6,0);
                    /* catch() { ... } // from try @ 0225d38c with catch @ 0225d414 */
                    /* catch() { ... } // from try @ 0225d314 with catch @ 0225d418 */
    uVar6 = UnityEngine_ImageConversion__EncodeToJPG_4426de0(uVar3,0x50,0);
    System_IO_File__WriteAllBytes_47f9a38(uVar4,uVar6,0);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = System_String__Concat_46d2b84
                      (*(undefined8 *)PTR_DAT_04cabea8,uVar5,*(undefined8 *)puVar2,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_QaPilot_Runner__Reply_2157ac4(uVar4,uVar6,1,uVar4);
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Object__Destroy_43c8114(uVar3,0);
    }
  }
  return iVar1 == 0;
}

