/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$TopClearPx
float Dino_BusSand_App_UI_ScreenSafe__TopClearPx (float xMin, float xMax, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ScreenSafe$$TopClearPx
   float Dino_BusSand_App_UI_ScreenSafe__TopClearPx (float xMin, float xMax, const MethodInfo*
   method); */

float Dino_BusSand_App_UI_ScreenSafe__TopClearPx_21ff838
                (float param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  float fVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar2 = PTR_DAT_04cafcc0;
  fVar13 = param_2;
  if ((bRam0000000004f9bc85 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafcc0);
    bRam0000000004f9bc85 = 1;
  }
  iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  Dino_BusSand_App_UI_ScreenSafe__get_Raw_21ff5ac();
  fVar14 = (float)iVar6 - (param_4 + fVar13);
  fVar13 = 0.0;
  if (0.0 <= fVar14) {
    fVar13 = fVar14;
  }
  fVar14 = 0.0;
  if (0.0 < fVar13) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar12 = (float)Dino_BusSand_App_UI_ScreenSafe__get_Unit_21ff7a8();
    lVar8 = Dino_BusSand_App_UI_ScreenSafe__get_Cutouts_21ff634();
    fVar1 = _UNK_00e20754;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    fVar14 = fVar13;
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      fVar14 = 0.0;
      bVar3 = false;
      uVar10 = 0;
      uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      pfVar11 = (float *)(lVar8 + 0x2c);
      do {
        if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        fVar18 = pfVar11[-3];
        fVar17 = pfVar11[-2];
        fVar15 = pfVar11[-1];
        fVar16 = *pfVar11;
        iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
        iVar7 = UnityEngine_Screen__get_height_436a6c8(0);
        if ((float)iVar6 - (fVar17 + fVar16) <= (float)iVar7 * fVar1) {
          fVar16 = fVar18 - fVar12 * 10.0;
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if (param_1 <= fVar12 * 10.0 + fVar18 + fVar15) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar16) && !NAN(param_2)) {
              bVar3 = fVar16 < param_2;
              bVar4 = fVar16 == param_2;
              bVar5 = false;
            }
          }
          if (bVar4 || bVar3 != bVar5) {
            iVar6 = UnityEngine_Screen__get_height_436a6c8(0);
            fVar17 = (float)iVar6 - fVar17;
            fVar15 = fVar13;
            if (fVar17 <= fVar13) {
              fVar15 = fVar17;
            }
            if (fVar14 <= fVar15) {
              fVar14 = fVar15;
            }
          }
          bVar3 = true;
        }
        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar10 = uVar10 + 1;
        pfVar11 = pfVar11 + 4;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar8 + 0x18));
      if (!bVar3) {
        fVar14 = fVar13;
      }
    }
  }
  return fVar14;
}

