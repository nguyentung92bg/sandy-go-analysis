/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$EyeDepth
UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeBus__EyeDepth (Dino_BusSand_App_UI_HomeBus_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$EyeDepth
   UnityEngine_Vector3_o Dino_BusSand_App_UI_HomeBus__EyeDepth (Dino_BusSand_App_UI_HomeBus_o*
   __this, UnityEngine_Vector2_o screen, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__EyeDepth_22e4704
               (undefined4 param_1,float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(long *)(param_4 + 0x38) != 0) {
    fVar12 = param_2;
    lVar4 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_4 + 0x38),0);
    if (((*(long *)(param_4 + 0x18) != 0) &&
        (lVar5 = *(long *)(*(long *)(param_4 + 0x18) + 0x28), lVar5 != 0)) &&
       (fVar6 = (float)UnityEngine_Transform__get_position_43d0e48(lVar5,0), lVar4 != 0)) {
      fVar13 = fVar12;
      fVar15 = param_3;
      fVar7 = (float)UnityEngine_Transform__get_position_43d0e48(lVar4,0);
      fVar14 = fVar13;
      fVar16 = fVar15;
      fVar8 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar4,0);
      if (*(long *)(param_4 + 0x38) != 0) {
        fVar17 = 0.0;
        UnityEngine_Camera__ScreenPointToRay_435cb2c(&uStack_98,param_1,*(long *)(param_4 + 0x38),0)
        ;
        uStack_78 = uStack_90;
        uVar1 = uStack_78;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        uVar2 = uStack_70;
        uStack_78._4_4_ = (float)((ulong)uStack_90 >> 0x20);
        fVar11 = uStack_78._4_4_;
        uStack_70._0_4_ = (float)uStack_88;
        fVar10 = (float)uStack_70;
        uStack_70._4_4_ = (float)((ulong)uStack_88 >> 0x20);
        fVar3 = uStack_70._4_4_;
        uStack_78 = uVar1;
        uStack_70 = uVar2;
        fVar9 = (float)UnityEngine_Transform__get_forward_43d17f4(lVar4,0);
        fVar10 = fVar3 * fVar17 + fVar11 * fVar9 + fVar10 * param_2;
        fVar11 = _UNK_00e20754;
        if (_UNK_00e20754 <= fVar10) {
          fVar11 = fVar10;
        }
        UnityEngine_Ray__GetPoint_4365de4
                  (((param_3 - fVar15) * fVar16 +
                   (fVar6 - fVar7) * fVar8 + (fVar12 - fVar13) * fVar14) / fVar11,&uStack_80,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

