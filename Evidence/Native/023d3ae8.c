/* IL2CPP: Dino.BusSand.App.UI.HallScene$$FixZeroScaleRects
void Dino_BusSand_App_UI_HallScene__FixZeroScaleRects (UnityEngine_Transform_o* root, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HallScene$$FixZeroScaleRects
   void Dino_BusSand_App_UI_HallScene__FixZeroScaleRects (UnityEngine_Transform_o* root, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HallScene__FixZeroScaleRects_22d3ae8
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000004f9c3bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6e50);
    bRam0000000004f9c3bb = 1;
  }
  if ((param_4 != 0) &&
     (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                        (param_4,1,*(undefined8 *)PTR_DAT_04cb6e50), puVar4 = PTR_DAT_04cb5bf8,
     puVar3 = PTR_DAT_04caa208, fVar2 = _UNK_00e20900, lVar5 != 0)) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar7 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_023d3ca0;
        fVar9 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar7,0);
        if (cRam0000000004f9c305 == '\0') {
          FUN_02132f7c(puVar4);
          cRam0000000004f9c305 = '\x01';
        }
        fVar12 = ABS(fVar9);
        if (ABS(fVar9) <= 0.0) {
          fVar12 = 0.0;
        }
        fVar10 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar13 = fVar12 * fVar2;
        if (fVar12 * fVar2 <= fVar10) {
          fVar13 = fVar10;
        }
        fVar9 = ABS(0.0 - fVar9);
        if (fVar9 < fVar13) {
          fVar12 = ABS(param_2);
          fVar9 = ABS(0.0 - param_2);
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          fVar13 = fVar12 * fVar2;
          if (fVar12 * fVar2 <= fVar10) {
            fVar13 = fVar10;
          }
          if (fVar9 < fVar13) {
            fVar12 = ABS(param_3);
            if (ABS(param_3) <= 0.0) {
              fVar12 = 0.0;
            }
            fVar11 = fVar12 * fVar2;
            if (fVar12 * fVar2 <= fVar10) {
              fVar11 = fVar10;
            }
            fVar13 = ABS(0.0 - param_3);
            if (fVar13 < fVar11) {
              if (cRam0000000004f9b65e == '\0') {
                FUN_02132f7c(puVar3);
                cRam0000000004f9b65e = '\x01';
              }
              lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
              fVar13 = *(float *)(lVar6 + 0x10);
              fVar9 = *(float *)(lVar6 + 0x14);
              UnityEngine_Transform__set_localScale_43d1be0(*(undefined4 *)(lVar6 + 0xc),lVar7,0);
            }
          }
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
        param_2 = fVar13;
        param_3 = fVar9;
      } while ((int)uVar8 < (int)uVar1);
    }
    return;
  }
LAB_023d3ca0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

