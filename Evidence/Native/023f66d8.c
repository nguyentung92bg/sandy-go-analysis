/* IL2CPP: Dino.BusSand.App.UI.HomeTwine$$OnPopulateMesh
void Dino_BusSand_App_UI_HomeTwine__OnPopulateMesh (Dino_BusSand_App_UI_HomeTwine_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeTwine$$OnPopulateMesh
   void Dino_BusSand_App_UI_HomeTwine__OnPopulateMesh (Dino_BusSand_App_UI_HomeTwine_o* __this,
   UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeTwine__OnPopulateMesh_22f66d8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000004f9c48c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7860);
    bRam0000000004f9c48c = 1;
  }
  if (param_2 != 0) {
    UnityEngine_UI_VertexHelper__Clear_4699364(param_2,0);
    fVar13 = *(float *)(param_1 + 0xd8);
    fVar12 = *(float *)(param_1 + 0xdc);
    if (cRam0000000004f9ba93 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    fVar12 = (fVar12 - fVar13) / 10.0;
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar5 = PTR_DAT_04cb7860;
    puVar4 = PTR_DAT_04cacfc0;
    iVar8 = (int)fVar12;
    iVar10 = 0;
    if (399 < iVar8) {
      iVar8 = 400;
    }
    if (iVar8 < 9) {
      iVar8 = 8;
    }
    iVar2 = 8;
    if ((float)(int)fVar12 != INFINITY) {
      iVar2 = iVar8;
    }
    do {
      iVar6 = UnityEngine_UI_VertexHelper__get_currentVertCount_469bbe8(param_2,0);
      iVar8 = 0;
      uVar11 = 0;
      do {
        fVar13 = (float)(int)uVar11 / (float)iVar2;
        fVar12 = 1.0;
        if (fVar13 <= 1.0) {
          fVar12 = fVar13;
        }
        fVar14 = 0.0;
        if (0.0 <= fVar13) {
          fVar14 = fVar12;
        }
        fVar12 = *(float *)(param_1 + 0xd8) +
                 fVar14 * (*(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xd8));
        fVar13 = fVar12 / *(float *)(param_1 + 0xe4);
        fVar13 = *(float *)(param_1 + 0xe0) +
                 (*(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xec)) * (1.0 - fVar13 * fVar13)
        ;
        if (iVar10 == 0) {
          lVar7 = *(long *)puVar5;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar5;
          }
          uVar3 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xc);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(puVar4);
            cRam0000000004f9b948 = '\x01';
          }
          fVar12 = fVar12 + 3.0;
          UnityEngine_UI_VertexHelper__AddVert_469c5d0
                    (fVar12,-3.0 - fVar13,0,**(undefined4 **)(*(long *)puVar4 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],0,0,param_2,uVar3,0);
          fVar14 = -12.0;
          uVar3 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
        }
        else {
          lVar7 = *(long *)puVar5;
          if ((uVar11 & 1) == 0) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar5;
            }
            puVar9 = *(undefined4 **)(lVar7 + 0xb8);
          }
          else {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar5;
            }
            puVar9 = (undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
          }
          uVar3 = *puVar9;
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(puVar4);
            cRam0000000004f9b948 = '\x01';
          }
          UnityEngine_UI_VertexHelper__AddVert_469c5d0
                    (fVar12,3.0 - fVar13,0,**(undefined4 **)(*(long *)puVar4 + 0xb8),
                     (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],0,0,param_2,uVar3,0);
          lVar7 = *(long *)puVar5;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar5;
          }
          fVar14 = -3.0;
          uVar3 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 4);
        }
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(puVar4);
          cRam0000000004f9b948 = '\x01';
        }
        UnityEngine_UI_VertexHelper__AddVert_469c5d0
                  (fVar12,fVar14 - fVar13,0,**(undefined4 **)(*(long *)puVar4 + 0xb8),
                   (*(undefined4 **)(*(long *)puVar4 + 0xb8))[1],0,0,param_2,uVar3,0);
        if (iVar8 != 0) {
          iVar1 = iVar6 + iVar8;
          UnityEngine_UI_VertexHelper__AddTriangle_469c794
                    (param_2,iVar6 + -2 + iVar8,iVar1,iVar6 + -1 + iVar8,0);
          UnityEngine_UI_VertexHelper__AddTriangle_469c794
                    (param_2,iVar6 + -1 + iVar8,iVar1,iVar1 + 1,0);
        }
        iVar8 = iVar8 + 2;
        uVar11 = uVar11 + 1;
      } while (iVar2 * 2 + 2 != iVar8);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

