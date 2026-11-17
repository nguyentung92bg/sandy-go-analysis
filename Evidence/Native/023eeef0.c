/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Noise4
UnityEngine_Texture2D_o* Dino_BusSand_App_UI_HomeStage__Noise4 (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Noise4
   UnityEngine_Texture2D_o* Dino_BusSand_App_UI_HomeStage__Noise4 (const MethodInfo* method); */

long Dino_BusSand_App_UI_HomeStage__Noise4_22eeef0(void)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dStack_a8;
  
  puVar11 = PTR_DAT_04cae330;
  puVar10 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9c45c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04cb6a60);
    FUN_02132f7c(PTR_DAT_04cae330);
    FUN_02132f7c(PTR_DAT_04caadd0);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cb7700);
    bRam0000000004f9c45c = 1;
  }
  plVar12 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar11);
  System_Random___ctor_4840cc4(plVar12,0x13528ee,0);
  lVar13 = FUN_02133068(*(undefined8 *)puVar10,0x100);
  if (lVar13 != 0) {
    if (0 < *(int *)(lVar13 + 0x18)) {
      uVar21 = 0;
      do {
        if (plVar12 == (long *)0x0) goto LAB_023ef444;
        dVar25 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        uVar6 = *(uint *)(lVar13 + 0x18);
        if (uVar6 <= uVar21) {
LAB_023ef440:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(float *)(lVar13 + 0x20 + uVar21 * 4) = (float)dVar25;
        uVar21 = uVar21 + 1;
      } while ((long)uVar21 < (long)(int)uVar6);
    }
    puVar10 = PTR_DAT_04caaad0;
    lVar14 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb6a60,0x1000);
    lVar15 = FUN_02133068(*(undefined8 *)puVar10,4);
    fVar9 = _UNK_00e20328;
    lVar19 = 0;
    fVar30 = 1.0;
    do {
      lVar20 = 0;
      fVar23 = (float)((int)lVar19 << 3) / 64.0;
      iVar4 = -0x80000000;
      if (fVar23 != INFINITY) {
        iVar4 = (int)fVar23;
      }
      uVar2 = -(iVar4 + 1U);
      uVar6 = iVar4 + 1U & 7;
      if (-1 < (int)uVar2) {
        uVar6 = -(uVar2 & 7);
      }
      fVar23 = fVar23 - (float)iVar4;
      fVar24 = fVar23 * fVar23 * (3.0 - (fVar23 + fVar23));
      fVar23 = fVar30;
      if (fVar24 <= 1.0) {
        fVar23 = fVar24;
      }
      fVar31 = 0.0;
      if (0.0 <= fVar24) {
        fVar31 = fVar23;
      }
      do {
        lVar22 = 0;
        fVar23 = (float)((int)lVar20 << 3) / 64.0;
        uVar21 = 0;
        iVar5 = -0x80000000;
        if (fVar23 != INFINITY) {
          iVar5 = (int)fVar23;
        }
        uVar7 = -(iVar5 + 1U);
        uVar2 = iVar5 + 1U & 7;
        if (-1 < (int)uVar7) {
          uVar2 = -(uVar7 & 7);
        }
        fVar23 = fVar23 - (float)iVar5;
        iVar1 = uVar6 * 8 + uVar2;
        fVar24 = fVar23 * fVar23 * (3.0 - (fVar23 + fVar23));
        fVar23 = fVar30;
        if (fVar24 <= 1.0) {
          fVar23 = fVar24;
        }
        fVar29 = 0.0;
        if (0.0 <= fVar24) {
          fVar29 = fVar23;
        }
        do {
          uVar7 = *(uint *)(lVar13 + 0x18);
          iVar8 = (int)lVar22;
          uVar16 = iVar4 * 8 + iVar5 + iVar8;
          if ((((uVar7 <= uVar16) || (uVar17 = iVar4 * 8 + uVar2 + iVar8, uVar7 <= uVar17)) ||
              (uVar18 = uVar6 * 8 + iVar5 + iVar8, uVar7 <= uVar18)) ||
             (uVar7 <= (uint)(iVar1 + iVar8))) goto LAB_023ef440;
          if (plVar12 == (long *)0x0) goto LAB_023ef444;
          fVar26 = *(float *)(lVar13 + 0x20 + (long)iVar1 * 4 + lVar22 * 4);
          fVar24 = *(float *)(lVar13 + 0x20 + (long)(int)uVar16 * 4);
          fVar27 = *(float *)(lVar13 + (long)(int)uVar18 * 4 + 0x20);
          fVar23 = fVar9;
          if (lVar22 != 0x40) {
            fVar23 = 0.0;
          }
          fVar24 = fVar24 + fVar29 * (*(float *)(lVar13 + 0x20 + (long)(int)uVar17 * 4) - fVar24);
          dVar25 = (double)(**(code **)(*plVar12 + 0x1b8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          fVar24 = fVar23 * (float)dVar25 +
                   (1.0 - fVar23) *
                   (fVar24 + fVar31 * ((fVar27 + fVar29 * (fVar26 - fVar27)) - fVar24));
          fVar23 = fVar30;
          if (fVar24 <= 1.0) {
            fVar23 = fVar24;
          }
          fVar26 = 0.0;
          if (0.0 <= fVar24) {
            fVar26 = fVar23 * 255.0;
          }
          if (cRam0000000004f9b891 == '\0') {
            FUN_02132f7c(PTR_DAT_04caa200);
            cRam0000000004f9b891 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          dVar28 = (double)fVar26;
          dVar25 = (double)FUN_049b52f0(dVar28,&dStack_a8);
          if (0.0 <= fVar26) {
            if (dVar25 == 0.5) {
              dVar25 = 1.0;
              goto LAB_023ef29c;
            }
            dVar28 = (double)(long)(dVar28 + 0.5);
          }
          else if (dVar25 == -0.5) {
            dVar25 = -1.0;
LAB_023ef29c:
            dVar28 = dStack_a8;
            if (((long)dStack_a8 & 1U) != 0) {
              dVar28 = dStack_a8 + dVar25;
            }
          }
          else {
            dVar28 = (double)(long)(dVar28 + -0.5);
          }
          if (lVar15 == 0) goto LAB_023ef444;
          uVar7 = *(uint *)(lVar15 + 0x18);
          if (uVar7 <= uVar21) goto LAB_023ef440;
          lVar22 = lVar22 + 0x40;
          uVar3 = 0;
          if (dVar28 != INFINITY) {
            uVar3 = (char)(int)dVar28;
          }
          *(undefined1 *)(lVar15 + 0x20 + uVar21) = uVar3;
          uVar21 = uVar21 + 1;
        } while (lVar22 != 0x100);
        if (((uVar7 == 0) || (uVar7 == 1)) || ((uVar7 < 3 || (uVar7 == 3)))) goto LAB_023ef440;
        if (lVar14 == 0) goto LAB_023ef444;
        uVar21 = lVar20 + lVar19 * 0x40;
        if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_023ef440;
        lVar20 = lVar20 + 1;
        *(undefined4 *)(lVar14 + uVar21 * 4 + 0x20) = *(undefined4 *)(lVar15 + 0x20);
      } while (lVar20 != 0x40);
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x40);
    lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb4ef0);
    UnityEngine_Texture2D___ctor_439df00(lVar13,0x40,0x40,4,0,1,0);
    if (lVar13 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar13,*(undefined8 *)PTR_DAT_04cb7700,0);
      UnityEngine_Texture__set_filterMode_4398f60(lVar13,1,0);
      UnityEngine_Texture__set_wrapMode_4398ac8(lVar13,0,0);
      UnityEngine_Texture2D__SetPixels32_439edd8(lVar13,lVar14,0);
      UnityEngine_Texture2D__Apply_439ea14(lVar13,0,1,0);
      return lVar13;
    }
  }
LAB_023ef444:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

