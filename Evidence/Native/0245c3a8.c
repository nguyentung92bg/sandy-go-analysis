/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Update
void Dino_BusSand_Cheat_CheatHint__Update (Dino_BusSand_Cheat_CheatHint_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Update
   void Dino_BusSand_Cheat_CheatHint__Update (Dino_BusSand_Cheat_CheatHint_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatHint__Update_235c3a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9c72d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba440);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c72d = 1;
  }
  uVar3 = Dino_BusSand_Cheat_CheatHint__get_Visible_235bbbc(param_1);
  puVar1 = PTR_DAT_04cac868;
  if ((uVar3 & 1) == 0) {
    return;
  }
                    /* try { // try from 0245c408 to 0255c40b has its CatchHandler @ 0245c4b8 */
                    /* try { // try from 0245c40c to 0255c49b has its CatchHandler @ 0245c144 */
  if (*(int *)(*(long *)PTR_DAT_04cac868 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcf9 == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9bcf9 = '\x01';
  }
  puVar2 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  lVar6 = *(long *)puVar2;
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
Dino_BusSand_Cheat_CheatHint__Hide_235c314:
    puVar1 = PTR_DAT_04ca9ae8;
    if ((bRam0000000004f9c72c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      bRam0000000004f9c72c = 1;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0),
         lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    return;
  }
  if (lVar4 != 0) {
                    /* try { // try from 0245c49c to 0255c49f has its CatchHandler @ 0245c4c8 */
                    /* try { // try from 0245c4a0 to 0255c4a3 has its CatchHandler @ 0245c4b0 */
                    /* try { // try from 0245c4a4 to 0255c4e3 has its CatchHandler @ 0245c144 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245c4a0 with catch @ 0245c4b0
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245c394 with catch @ 0245c4b4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245c408 with catch @ 0245c4b8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245c39c with catch @ 0245c4bc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245c368 with catch @ 0245c4c0
                        */
    if ((((*(int *)(lVar4 + 0x20) != 2) || (*(int *)(lVar4 + 0x28) != *(int *)(param_1 + 0x3c))) ||
        (fVar7 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0),
        *(float *)(param_1 + 0x40) < fVar7)) ||
       (uVar3 = UnityEngine_Input__GetMouseButtonDown_443005c(0,0), (uVar3 & 1) != 0))
    goto Dino_BusSand_Cheat_CheatHint__Hide_235c314;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245c304 with catch @ 0245c4c4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0245c49c with catch @ 0245c4c8
                        */
    if (*(long *)(lVar4 + 0x38) != 0) {
      uVar5 = Dino_BusSand_View_GameView__VehicleOf_23ab408
                        (*(long *)(lVar4 + 0x38),*(undefined4 *)(param_1 + 0x38),0);
      lVar4 = *(long *)puVar2;
                    /* try { // try from 0245c4e4 to 0255c4e7 has its CatchHandler @ 0245c4f0 */
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar4);
      }
                    /* catch() { ... } // from try @ 0245c4e4 with catch @ 0245c4f0 */
                    /* try { // try from 0245c4f4 to 0255c4fb has its CatchHandler @ 0245c504 */
                    /* try { // try from 0245c4fc to 0255c507 has its CatchHandler @ 0245c144 */
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if ((uVar3 & 1) != 0) goto Dino_BusSand_Cheat_CheatHint__Hide_235c314;
      Dino_BusSand_Cheat_CheatHint__Place_235c030(param_1);
      fVar8 = *(float *)(param_1 + 0x44);
      fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar8 = fVar8 + fVar7;
      fVar9 = 1.0;
      *(float *)(param_1 + 0x44) = fVar8;
      fVar8 = fVar8 - (float)(int)fVar8;
      fVar7 = fVar9;
      if (fVar8 <= 1.0) {
        fVar7 = fVar8;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar8) {
        fVar10 = fVar7;
      }
      if (_UNK_00e207cc <= fVar10) {
        if ((_UNK_00e2094c <= fVar10) && (fVar9 = 0.0, fVar10 < 0.75)) {
          if (*(int *)(*(long *)PTR_DAT_04cba440 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar7 = (fVar10 + _UNK_00e2044c) / _UNK_00e20864 + 1.0;
          fVar9 = fVar7 * fVar7 + -1.0 + 1.0;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04cba440 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar7 = fVar10 / _UNK_00e20864 + 1.0;
        fVar9 = 1.0 - fVar7 * fVar7;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
                  (fVar9 * -14.0,*(long *)(param_1 + 0x30),0);
        lVar4 = *(long *)(param_1 + 0x30);
        FUN_022996dc(0);
        if (lVar4 != 0) {
          if ((bRam0000000004fa8b3e & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b3e = 1;
          }
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar4 + 0x10);
            if (lVar4 != 0) {
              if (pcRam0000000004fa8bf0 == (code *)0x0) {
                pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
              }
              (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
              return;
            }
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

