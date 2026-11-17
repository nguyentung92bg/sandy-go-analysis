/* IL2CPP: Dino.BusSand.View.SandBoardView$$LateUpdate
void Dino_BusSand_View_SandBoardView__LateUpdate (Dino_BusSand_View_SandBoardView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.SandBoardView$$LateUpdate
   void Dino_BusSand_View_SandBoardView__LateUpdate (Dino_BusSand_View_SandBoardView_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_View_SandBoardView__LateUpdate_23e62a8(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x74) == '\0') {
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x7c) == *(int *)(param_1 + 0x60)) {
      return;
    }
  }
  else {
    fVar19 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
    if ((bRam0000000004f9ca83 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cad568);
      bRam0000000004f9ca83 = 1;
    }
    lVar13 = *(long *)(param_1 + 0x20);
    fVar20 = *(float *)(param_1 + 0x78) + fVar19;
    *(float *)(param_1 + 0x78) = fVar20;
    puVar7 = PTR_DAT_04cad568;
    if (lVar13 == 0) {
LAB_024e6460:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar20 = fVar20 / *(float *)(param_1 + 0x7c);
    uVar4 = *(uint *)(lVar13 + 0x10);
    uVar16 = *(uint *)(lVar13 + 0x14);
    fVar22 = 1.0;
    if (fVar20 <= 1.0) {
      fVar22 = fVar20;
    }
    fVar23 = 0.0;
    if (0.0 <= fVar20) {
      fVar23 = fVar22 * _UNK_00e2082c;
    }
    fVar20 = (float)func_0x049b5320(fVar23);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar13 = *(long *)puVar7;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar13 = *(long *)puVar7;
    }
    if (**(long **)(lVar13 + 0xb8) != 0) {
      fVar19 = fVar20 * _UNK_00e203d4 * fVar19;
      iVar3 = -0x80000000;
      if (fVar19 != INFINITY) {
        iVar3 = (int)fVar19;
      }
      Dino_BusSand_GameAudio__AddSettle_2384d70(**(long **)(lVar13 + 0xb8),iVar3,0);
    }
    if (*(float *)(param_1 + 0x78) < *(float *)(param_1 + 0x7c)) {
      lVar13 = *(long *)(param_1 + 0x30);
      if (lVar13 != 0) {
        uVar15 = 0;
        do {
          puVar7 = PTR_DAT_04caa200;
          fVar19 = _UNK_00e205f8;
          if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar15) {
            if ((int)uVar16 < 1) goto LAB_024e6664;
            lVar13 = 0;
            uVar15 = 0;
            goto LAB_024e64cc;
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_024e66b8;
          lVar14 = uVar15 * 4;
          uVar15 = uVar15 + 1;
          *(undefined4 *)(lVar13 + lVar14 + 0x20) = 0;
          lVar13 = *(long *)(param_1 + 0x30);
        } while (lVar13 != 0);
      }
      goto LAB_024e6460;
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar13 + 0x38);
  lVar5 = *(long *)(lVar13 + 0x40);
  uVar4 = *(int *)(lVar13 + 0x14) * *(int *)(lVar13 + 0x10);
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (0 < (int)uVar4) {
      if (lVar14 == 0) goto LAB_024e60d4;
      uVar15 = 0;
      do {
        if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_024e60d0;
        if (lVar5 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_024e60d0;
        lVar13 = *(long *)(param_1 + 0x30);
        uVar9 = Dino_BusSand_View_SandBoardView__Texel_23e60d8
                          (param_1,*(undefined1 *)(lVar14 + 0x20 + uVar15),
                           *(undefined1 *)(lVar5 + 0x20 + uVar15));
        if (lVar13 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_024e60d0;
        lVar1 = uVar15 * 4;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(lVar13 + lVar1 + 0x20) = uVar9;
      } while (uVar4 != uVar15);
    }
  }
  else if (0 < (int)uVar4) {
    if (lVar14 == 0) goto LAB_024e60d4;
    uVar15 = 0;
    do {
      if (*(uint *)(lVar14 + 0x18) <= uVar15) {
LAB_024e60d0:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      bVar6 = *(byte *)(lVar14 + 0x20 + uVar15);
      uVar16 = (uint)bVar6;
      lVar13 = *(long *)(param_1 + 0x30);
      if (bVar6 != 0) {
        if (lVar5 == 0) goto LAB_024e60d4;
        if (*(uint *)(lVar5 + 0x18) <= uVar15) goto LAB_024e60d0;
        uVar16 = (uint)bVar6 | (*(byte *)(lVar5 + 0x20 + uVar15) ^ 0x80) << 8 | 0xff000000;
      }
      if (lVar13 == 0) goto LAB_024e60d4;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_024e60d0;
      lVar1 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      *(uint *)(lVar13 + lVar1 + 0x20) = uVar16;
    } while (uVar4 != uVar15);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Texture2D__SetPixels32_439edd8
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      UnityEngine_Texture2D__Apply_439ea78(*(long *)(param_1 + 0x28),0,0);
      lVar13 = *(long *)(param_1 + 0x20);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x74) = 0;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar13 + 0x7c);
        return;
      }
    }
  }
LAB_024e60d4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_024e64cc:
  do {
    lVar14 = *(long *)(param_1 + 0x88);
    if (lVar14 == 0) goto LAB_024e6460;
    if (*(uint *)(lVar14 + 0x18) <= uVar15) {
LAB_024e66b8:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (0 < (int)uVar4) {
      uVar18 = 0;
      fVar20 = *(float *)(lVar14 + uVar15 * 4 + 0x20);
      do {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_024e6460;
        uVar2 = lVar13 + uVar18;
        uVar8 = Dino_BusSand_Core_SandGrid__RawColor_24175ac
                          (*(long *)(param_1 + 0x20),uVar2 & 0xffffffff,0);
        if ((uVar8 & 0xff) != 0) {
          lVar14 = *(long *)(param_1 + 0x80);
          if (lVar14 == 0) goto LAB_024e6460;
          uVar17 = (uint)uVar2;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_024e66b8;
          fVar23 = *(float *)(lVar14 + (long)(int)uVar17 * 4 + 0x20);
          fVar22 = fVar23 - fVar20;
          if (fVar22 < *(float *)(param_1 + 0x78)) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_024e6460;
            uVar9 = Dino_BusSand_Core_SandGrid__RawShade_24175dc
                              (*(long *)(param_1 + 0x20),uVar2 & 0xffffffff,0);
            uVar9 = Dino_BusSand_View_SandBoardView__Texel_23e60d8(param_1,uVar8,uVar9);
            fVar21 = *(float *)(param_1 + 0x78);
            if (fVar23 <= fVar21) {
              lVar14 = *(long *)(param_1 + 0x30);
              if (lVar14 == 0) goto LAB_024e6460;
              if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_024e66b8;
              lVar14 = lVar14 + (long)(int)uVar17 * 4;
LAB_024e6644:
              *(undefined4 *)(lVar14 + 0x20) = uVar9;
            }
            else {
              if (cRam0000000004f9b9dd == '\0') {
                FUN_02132f7c(puVar7);
                cRam0000000004f9b9dd = '\x01';
              }
              if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar21 = fVar21 - fVar22;
              fVar22 = ((float)(int)(uVar16 - (int)uVar15) / (float)(int)uVar16 + fVar19 +
                       fVar21 * fVar21 * -5.5) * (float)(int)uVar16 + (float)(int)uVar15;
              iVar3 = -0x80000000;
              if ((float)(int)fVar22 != INFINITY) {
                iVar3 = (int)fVar22;
              }
              if ((-1 < iVar3) && (iVar3 < (int)uVar16)) {
                lVar14 = *(long *)(param_1 + 0x30);
                if (lVar14 == 0) goto LAB_024e6460;
                uVar8 = (int)uVar18 + iVar3 * uVar4;
                if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_024e66b8;
                lVar14 = lVar14 + (long)(int)uVar8 * 4;
                if (*(char *)(lVar14 + 0x23) == '\0') goto LAB_024e6644;
              }
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar4 != uVar18);
    }
    uVar15 = uVar15 + 1;
    lVar13 = lVar13 + (ulong)uVar4;
  } while (uVar15 != uVar16);
LAB_024e6664:
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Texture2D__SetPixels32_439edd8
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
    plVar10 = *(long **)(param_1 + 0x28);
    if (plVar10 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
      if ((uVar15 & 1) == 0) {
        uVar11 = UnityEngine_Texture__CreateNonReadableException_4399d64(uVar15,plVar10);
        uVar12 = thunk_FUN_021985a8(PTR_DAT_04cf7070);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar11,uVar12);
      }
      if ((bRam0000000004fa7993 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6fd0);
        bRam0000000004fa7993 = 1;
      }
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = plVar10[2];
      if (lVar13 != 0) {
        if (pcRam0000000004fa7a48 == (code *)0x0) {
          pcRam0000000004fa7a48 = (code *)FUN_02132f40(&UNK_00e28bfa);
        }
                    /* WARNING: Could not recover jumptable at 0x0449accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa7a48)(lVar13,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(plVar10,0);
    }
  }
  goto LAB_024e6460;
}

