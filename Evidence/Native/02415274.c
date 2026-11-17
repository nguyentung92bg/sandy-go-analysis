/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<CountUp>d__34$$MoveNext
bool Dino_BusSand_App_UI_WinPanel__CountUp_d__34__MoveNext (Dino_BusSand_App_UI_WinPanel__CountUp_d__34_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<CountUp>d__34$$MoveNext
   bool Dino_BusSand_App_UI_WinPanel__CountUp_d__34__MoveNext
   (Dino_BusSand_App_UI_WinPanel__CountUp_d__34_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_WinPanel__CountUp_d__34__MoveNext_2315274(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9c569 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb83e0);
    FUN_02132f7c(PTR_DAT_04cb8288);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9c569 = 1;
  }
  puVar4 = PTR_DAT_04cad4c0;
  lVar10 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar14 = *(float *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar13 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar14 = fVar14 + fVar13;
                    /* try { // try from 024154d4 to 02515517 has its CatchHandler @ 024154d4
                       catch() { ... } // from try @ 024154d4 with catch @ 024154d4
                       catch() { ... } // from try @ 02415534 with catch @ 024154d4
                       catch() { ... } // from try @ 02415570 with catch @ 024154d4
                       catch() { ... } // from try @ 024155cc with catch @ 024154d4 */
    bVar6 = fVar14 < _UNK_00e20ae0;
    *(float *)(param_1 + 0x30) = fVar14;
    if (bVar6) {
LAB_024154e8:
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
                    /* try { // try from 02415534 to 02515557 has its CatchHandler @ 024154d4 */
      return 1;
    }
    if (lVar10 != 0) {
      if (*(char *)(lVar10 + 0x2c) != '\0') {
        return 0;
      }
                    /* try { // try from 02415518 to 02515533 has its CatchHandler @ 02415540 */
      Dino_BusSand_App_UI_WinPanel__FlyAndContinue_231390c(lVar10,*(undefined4 *)(param_1 + 0x2c));
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0x58);
      if (*plVar11 != 0) {
        Dino_BusSand_App_Tween__Kill_2160f04(*plVar11,1,0);
        *plVar11 = 0;
        thunk_FUN_02134474(plVar11,0);
      }
      puVar4 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar4;
      }
      if (**(long **)(lVar7 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar7 + 0xb8),0);
      }
      if (*(long *)(lVar10 + 0x88) != 0) {
        uVar8 = TMPro_TMP_Text__get_transform_42cd604(*(long *)(lVar10 + 0x88),0);
        puVar4 = PTR_DAT_04cad4c0;
        if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
        }
        uVar3 = _UNK_00e20994;
        Dino_BusSand_App_UI_UiMotion__Punch_2283d78(_UNK_00e20aec,_UNK_00e20994,uVar8,0,0,0);
        puVar5 = PTR_DAT_04cb8288;
        uVar8 = *(undefined8 *)(lVar10 + 0x88);
        iVar1 = *(int *)(param_1 + 0x28);
        iVar2 = *(int *)(param_1 + 0x2c);
        lVar10 = *(long *)PTR_DAT_04cb8288;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = *(long *)puVar5;
        }
        puVar9 = *(undefined8 **)(lVar10 + 0xb8);
        lVar7 = puVar9[3];
        if (lVar7 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            puVar9 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
          }
          uVar12 = *puVar9;
          lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
          System_Action_float____ctor_35f1448(lVar7,uVar12,*(undefined8 *)PTR_DAT_04cb83e0,0);
          plVar11 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
          *plVar11 = lVar7;
          thunk_FUN_02134474(plVar11,lVar7);
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiMotion__Count_2285af8(uVar3,0,uVar8,(long)iVar1,(long)iVar2,0,lVar7,0)
        ;
        *(undefined4 *)(param_1 + 0x30) = 0;
        goto LAB_024154e8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

