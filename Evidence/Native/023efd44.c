/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$PlanRoof
float Dino_BusSand_App_UI_HomeStage__PlanRoof (Dino_BusSand_App_UI_HomeStage_o* __this, float minRoof, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$PlanRoof
   float Dino_BusSand_App_UI_HomeStage__PlanRoof (Dino_BusSand_App_UI_HomeStage_o* __this, float
   minRoof, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__PlanRoof_22efd44
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f9c461 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04cb6890);
    bRam0000000004f9c461 = 1;
  }
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  if ((*(long *)(param_5 + 0x28) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_5 + 0x28) + 0x20), lVar2 != 0)) {
    UnityEngine_RectTransform__get_rect_43cf450(lVar2,0);
    lVar1 = *(long *)(param_5 + 0x30);
    fVar5 = param_4 * _UNK_00e1ffcc;
    fVar4 = 640.0;
    if (param_3 * _UNK_00e20258 <= 640.0) {
      fVar4 = param_3 * _UNK_00e20258;
    }
    if ((lVar1 != 0) &&
       (fVar3 = param_2,
       auStack_50 = (**(code **)(lVar1 + 0x18))
                              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28)),
       (auStack_50._0_8_ & 0xff) != 0)) {
      System_Nullable_Vector3___get_Value_2bd0e68(auStack_50,*(undefined8 *)PTR_DAT_04cb6890);
      UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar2,0);
      fVar5 = ((param_4 + param_2) - fVar3) + -130.0;
    }
    fVar3 = fVar5 + fVar4 * _UNK_00e200a8;
    if (fVar3 < param_1) {
      fVar3 = (fVar5 - param_1) / _UNK_00e200f8;
      fVar4 = 280.0;
      if (280.0 <= fVar3) {
        fVar4 = fVar3;
      }
      fVar3 = fVar5 - fVar4 * _UNK_00e200f8;
    }
    *(float *)(param_5 + 0x94) = fVar3;
    *(float *)(param_5 + 0x98) = fVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

