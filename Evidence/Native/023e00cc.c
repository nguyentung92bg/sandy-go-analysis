/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Corners
void Dino_BusSand_App_UI_HomeBus__Corners (Dino_BusSand_App_UI_HomeBus_o* __this, UnityEngine_Vector3_array* c8, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Corners
   void Dino_BusSand_App_UI_HomeBus__Corners (Dino_BusSand_App_UI_HomeBus_o* __this,
   UnityEngine_Vector3_array* c8, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Corners_22e00cc(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar3 = _UNK_00e20ae0;
  fVar2 = _UNK_00e20478;
  fVar1 = _UNK_00e1ff80;
  uVar6 = 0;
  uVar8 = 0xffffffff;
  fVar12 = *(float *)(param_1 + 0xa8) * _UNK_00e20390 + _UNK_00e20048;
  fVar13 = _UNK_00e20048;
  fVar14 = fVar12;
  if (*(float *)(param_1 + 0xa8) <= 0.0) {
    fVar14 = _UNK_00e20048;
  }
  do {
    iVar9 = 0;
    uVar7 = uVar6;
    do {
      uVar6 = uVar7 + 2;
      iVar10 = -1;
      do {
        if (*(long *)(param_1 + 0x18) == 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_023e0204;
          uVar11 = UnityEngine_Transform__get_position_43d0e48(*(long *)(param_1 + 0x10),0);
        }
        else {
          fVar13 = (float)iVar10 * fVar1 + fVar2;
          fVar12 = fVar14 * (float)iVar9;
          uVar11 = Dino_BusSand_App_UI_HomeToonRig__World_22f56bc
                             ((float)(int)uVar8 * fVar3,*(long *)(param_1 + 0x18),0);
        }
        if (param_2 == 0) {
LAB_023e0204:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(param_2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar5 = param_2 + (long)(int)uVar7 * 0xc;
        iVar10 = iVar10 + 2;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar5 + 0x20) = uVar11;
        *(float *)(lVar5 + 0x24) = fVar12;
        *(float *)(lVar5 + 0x28) = fVar13;
      } while (iVar10 != 3);
      iVar9 = iVar9 + 1;
      uVar7 = uVar6;
    } while (iVar9 != 2);
    bVar4 = uVar8 < 0x7ffffffe;
    uVar8 = uVar8 + 2;
    if (bVar4) {
      return;
    }
  } while( true );
}

