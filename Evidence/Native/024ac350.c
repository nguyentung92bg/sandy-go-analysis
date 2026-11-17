/* IL2CPP: Dino.BusSand.View.GameView.<Finale>d__223$$MoveNext
bool Dino_BusSand_View_GameView__Finale_d__223__MoveNext (Dino_BusSand_View_GameView__Finale_d__223_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView.<Finale>d__223$$MoveNext
   bool Dino_BusSand_View_GameView__Finale_d__223__MoveNext
   (Dino_BusSand_View_GameView__Finale_d__223_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_View_GameView__Finale_d__223__MoveNext_23ac350(long param_1)

{
  int iVar1;
  char cVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float extraout_s0;
  undefined4 uVar13;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar14;
  float extraout_s0_02;
  float fVar15;
  
  if ((bRam0000000004f9c961 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cbbf70);
                    /* try { // try from 024ac394 to 025ac3a7 has its CatchHandler @ 024ac3b8 */
    FUN_02132f7c(PTR_DAT_04cbc378);
                    /* try { // try from 024ac3a8 to 025ac3e3 has its CatchHandler @ 024ac2d0 */
    FUN_02132f7c(PTR_DAT_04cbbf98);
    FUN_02132f7c(PTR_DAT_04cbbfb0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024ac394 with catch @ 024ac3b8
                        */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc670);
    FUN_02132f7c(PTR_DAT_04caaa78);
    bRam0000000004f9c961 = 1;
  }
  fVar15 = _UNK_00e20094;
                    /* try { // try from 024ac3e4 to 025ac3e7 has its CatchHandler @ 024ac418 */
  iVar1 = *(int *)(param_1 + 0x10);
                    /* try { // try from 024ac3e8 to 025ac407 has its CatchHandler @ 024ac2d0 */
  lVar10 = *(long *)(param_1 + 0x20);
  lVar5 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar10 != 0) {
        uVar6 = *(undefined8 *)(lVar10 + 0x208);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        fVar15 = _UNK_00e207cc;
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)(lVar10 + 0x208);
          lVar5 = 0;
          if (lVar8 == 0) goto LAB_024acac4;
          if (*(char *)(lVar8 + 0x70) != '\0') {
            fVar14 = (float)Dino_BusSand_View_PaintingLayer__get_BloomLeft_23d9f18(lVar8,0);
            fVar15 = _UNK_00e207cc;
            fVar12 = _UNK_00e20170;
            fVar14 = fVar14 * _UNK_00e20180;
            *(undefined1 *)(lVar10 + 0x264) = 1;
            *(undefined1 *)(param_1 + 0x28) = 1;
            if (fVar14 <= fVar12) {
              fVar12 = fVar14;
            }
            if (fVar15 <= fVar14) {
              fVar15 = fVar12;
            }
            uVar6 = Dino_BusSand_View_GameView__Spotlight_23a9c98(lVar10,0);
            UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar10,uVar6,0);
          }
        }
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caaa78);
        UnityEngine_WaitForSeconds___ctor_43ca4f4(fVar15,uVar6,0);
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_024acac4;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar10 == 0) goto LAB_024acac4;
      uVar6 = *(undefined8 *)(lVar10 + 0xa8);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
      if (((uVar7 & 1) != 0) || (*(long *)(lVar10 + 0x228) == 0)) {
        return 0;
      }
      lVar5 = Dino_BusSand_View_GameView__NextPictureGrid_23a97e0(lVar10,0);
      puVar4 = PTR_DAT_04cbc670;
      if (lVar5 == 0) {
        uVar6 = *(undefined8 *)(lVar10 + 0x228);
        lVar5 = *(long *)PTR_DAT_04cbc670;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar4;
        }
        lVar5 = Dino_BusSand_Core_BoardBuilder__Build_240c530
                          (uVar6,**(undefined8 **)(lVar5 + 0xb8),0);
      }
      plVar11 = (long *)(param_1 + 0x30);
      *plVar11 = lVar5;
      lVar5 = thunk_FUN_02134474(plVar11);
      lVar8 = *(long *)(lVar10 + 0x30);
      if (lVar8 == 0) goto LAB_024acac4;
      lVar5 = 0;
      if (*(long *)(lVar10 + 0xa8) == 0) goto LAB_024acac4;
      lVar5 = Dino_BusSand_View_SandBoardView__Bind_23e5274
                        (*(undefined4 *)(lVar8 + 0x5c),*(undefined4 *)(lVar8 + 0x70),
                         *(long *)(lVar10 + 0xa8),*plVar11,0);
      if (*(long *)(lVar10 + 0x228) == 0) goto LAB_024acac4;
      lVar5 = 0;
      if (*(long *)(lVar10 + 0xa8) == 0) goto LAB_024acac4;
      Dino_BusSand_View_SandBoardView__BeginPour_23e66bc
                (_UNK_00e2038c,*(long *)(lVar10 + 0xa8),
                 *(int *)(*(long *)(lVar10 + 0x228) + 0x14) + 0x11,0);
      puVar4 = PTR_DAT_04cad568;
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar4;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__FinalePicture_23842cc(**(long **)(lVar5 + 0xb8),0);
      }
      cVar2 = *(char *)(param_1 + 0x28);
      *(undefined1 *)(lVar10 + 0x264) = 1;
      if (cVar2 == '\0') {
        uVar6 = Dino_BusSand_View_GameView__Spotlight_23a9c98(lVar10,0);
        UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar10,uVar6,0);
      }
      fVar15 = 0.0;
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
                    /* try { // try from 024ac408 to 025ac417 has its CatchHandler @ 024ac418 */
      if (iVar1 != 2) {
        return 0;
      }
      fVar15 = *(float *)(param_1 + 0x38);
                    /* catch() { ... } // from try @ 024ac3e4 with catch @ 024ac418
                       catch() { ... } // from try @ 024ac408 with catch @ 024ac418 */
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      puVar4 = PTR_DAT_04cad568;
                    /* try { // try from 024ac41c to 025ac41f has its CatchHandler @ 024ac428 */
                    /* try { // try from 024ac420 to 025ac42b has its CatchHandler @ 024ac2d0 */
      if (1.0 <= fVar15) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024ac41c with catch @ 024ac428
                        */
        if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar5 = *(long *)puVar4;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar4;
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Fanfare_238433c(**(long **)(lVar5 + 0xb8),0);
        }
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(2,0);
        lVar5 = 0;
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_024acac4;
        uVar6 = Dino_BusSand_Core_SandGrid__PresentColors_241767c(*(long *)(param_1 + 0x30),0);
        lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbbfb0);
        System_Collections_Generic_List_byte____ctor_39fa3d8
                  (lVar5,uVar6,*(undefined8 *)PTR_DAT_04cbc378);
        plVar11 = (long *)(param_1 + 0x40);
        *plVar11 = lVar5;
        thunk_FUN_02134474(plVar11,lVar5);
        lVar5 = *plVar11;
        if (lVar5 == 0) goto LAB_024acac4;
        if (*(int *)(lVar5 + 0x18) == 0) {
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)PTR_DAT_04cbbf70;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_024acac4;
          if (*(int *)(lVar8 + 0x18) == 0) {
            System_Collections_Generic_List_byte___AddWithResize_39fab2c
                      (lVar5,1,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          else {
            *(undefined4 *)(lVar5 + 0x18) = 1;
            *(undefined1 *)(lVar8 + 0x20) = 1;
          }
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x48),0);
        fVar12 = 0.0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        goto LAB_024ac9c4;
      }
    }
    fVar12 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
    fVar15 = fVar15 + fVar12;
    *(float *)(param_1 + 0x38) = fVar15;
    fVar12 = 1.0;
    if (fVar15 <= 1.0) {
      fVar12 = fVar15;
    }
    fVar14 = 0.0;
    if (0.0 <= fVar15) {
      fVar14 = fVar12;
    }
    lVar5 = Dino_BusSand_Easing__Evaluate_238b7d0(fVar14,9,0);
    if (lVar10 != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      fVar15 = _UNK_00e205ec;
      *(float *)(lVar10 + 0x244) = extraout_s0;
      *(float *)(lVar10 + 0x240) = extraout_s0 * fVar15;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar13 = 2;
LAB_024acaa8:
      *(undefined4 *)(param_1 + 0x10) = uVar13;
      return 1;
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar10 == 0) goto LAB_024acac4;
        fVar15 = 0.0;
        uVar13 = *(undefined4 *)(lVar10 + 0x240);
        *(undefined1 *)(lVar10 + 0x264) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x50) = uVar13;
      }
      else {
        if (iVar1 != 5) {
          return 0;
        }
        fVar15 = *(float *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (0.5 <= fVar15) {
          if (lVar10 != 0) {
            *(undefined8 *)(lVar10 + 0x230) = 0;
            *(undefined8 *)(lVar10 + 0x240) = 0;
            thunk_FUN_02134474(lVar10 + 0x230,0);
            return 0;
          }
          goto LAB_024acac4;
        }
      }
      fVar12 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
      fVar15 = fVar15 + fVar12;
      fVar12 = 1.0;
      fVar14 = fVar15 + fVar15;
      *(float *)(param_1 + 0x38) = fVar15;
      fVar15 = 1.0;
      if (fVar14 <= 1.0) {
        fVar15 = fVar14;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar14) {
        fVar3 = fVar15;
      }
      lVar5 = Dino_BusSand_Easing__Evaluate_238b7d0(fVar3,9,0);
      if (lVar10 == 0) goto LAB_024acac4;
      *(undefined8 *)(param_1 + 0x18) = 0;
      fVar15 = *(float *)(param_1 + 0x50);
      if (extraout_s0_00 <= 1.0) {
        fVar12 = extraout_s0_00;
      }
      fVar14 = 0.0;
      if (0.0 <= extraout_s0_00) {
        fVar14 = fVar12;
      }
      *(float *)(lVar10 + 0x244) = 1.0 - extraout_s0_00;
      *(float *)(lVar10 + 0x240) = fVar15 + fVar14 * (0.0 - fVar15);
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar13 = 5;
      goto LAB_024acaa8;
    }
    fVar12 = *(float *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (fVar15 <= fVar12) {
      if (lVar10 != 0) {
        lVar5 = 0;
        if (*(long *)(lVar10 + 0xa8) != 0) {
          Dino_BusSand_View_SandBoardView__SetSweep_23e61f0(0xbf800000,*(long *)(lVar10 + 0xa8),0);
          lVar5 = *(long *)(param_1 + 0x48);
          if (lVar5 == 0) {
            uVar6 = Dino_BusSand_View_GameView__FireworkShow_23a99a0
                              (lVar10,*(undefined8 *)(param_1 + 0x40),0);
            uVar6 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar10,uVar6,0);
            *(undefined8 *)(param_1 + 0x48) = uVar6;
            thunk_FUN_02134474((long *)(param_1 + 0x48),uVar6);
            lVar5 = *(long *)(param_1 + 0x48);
          }
          *(long *)(param_1 + 0x18) = lVar5;
          thunk_FUN_02134474((long *)(param_1 + 0x18));
          uVar13 = 4;
          goto LAB_024acaa8;
        }
      }
      goto LAB_024acac4;
    }
LAB_024ac9c4:
    lVar5 = UnityEngine_Time__get_deltaTime_43cd5e8(0);
    *(float *)(param_1 + 0x38) = fVar12 + extraout_s0_01;
    if (lVar10 != 0) {
      fVar15 = 1.0;
      lVar8 = *(long *)(lVar10 + 0xa8);
      fVar14 = (fVar12 + extraout_s0_01) / _UNK_00e20094;
      fVar12 = fVar15;
      if (fVar14 <= 1.0) {
        fVar12 = fVar14;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar14) {
        fVar3 = fVar12;
      }
      lVar5 = Dino_BusSand_Easing__Evaluate_238b7d0(fVar3,9,0);
      if (lVar8 != 0) {
        if (extraout_s0_02 <= 1.0) {
          fVar15 = extraout_s0_02;
        }
        fVar12 = _UNK_00e202d8;
        if (0.0 <= extraout_s0_02) {
          fVar12 = fVar15 * _UNK_00e20628 + _UNK_00e202d8;
        }
        Dino_BusSand_View_SandBoardView__SetSweep_23e61f0(fVar12,lVar8,0);
        if ((*(long *)(param_1 + 0x48) == 0) && (_UNK_00e207cc <= *(float *)(param_1 + 0x38))) {
          uVar6 = Dino_BusSand_View_GameView__FireworkShow_23a99a0
                            (lVar10,*(undefined8 *)(param_1 + 0x40),0);
          uVar6 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(lVar10,uVar6,0);
          *(undefined8 *)(param_1 + 0x48) = uVar6;
          thunk_FUN_02134474((long *)(param_1 + 0x48),uVar6);
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar13 = 3;
        goto LAB_024acaa8;
      }
    }
  }
LAB_024acac4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(lVar5);
}

