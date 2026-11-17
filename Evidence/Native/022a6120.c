/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$ScrollIndexFor
int32_t Dino_BusSand_App_UI_ClimbTowerPanel__ScrollIndexFor (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, int32_t record, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$ScrollIndexFor
   int32_t Dino_BusSand_App_UI_ClimbTowerPanel__ScrollIndexFor
   (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, int32_t record, const MethodInfo* method); */

uint Dino_BusSand_App_UI_ClimbTowerPanel__ScrollIndexFor_21a6120(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float in_s3;
  float fVar8;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9ba3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04caead8);
    bRam0000000004f9ba3a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    Dino_BusSand_App_Meta_ClimbTowerFeature__MaxArchive_2229fa0
              (*(long *)(param_1 + 0x38),param_2,(long)&uStack_48 + 4,&uStack_48,0);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      fVar8 = 1920.0;
    }
    else {
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_022a62c0;
      UnityEngine_RectTransform__get_rect_43cf450(*(long *)(param_1 + 0x50),0);
      fVar8 = in_s3;
    }
    plVar3 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                               (param_1,*(undefined8 *)PTR_DAT_04caead8,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 != *(long *)PTR_DAT_04cabdb0)) {
      in_s3 = 354.0;
    }
    else {
      UnityEngine_RectTransform__get_rect_43cf450(plVar3,0);
    }
    fVar4 = 320.0;
    if ((int)uStack_48 != 0) {
      fVar4 = 160.0;
    }
    fVar6 = (float)Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838(param_1,param_2);
    fVar7 = (float)Dino_BusSand_App_UI_ClimbTowerPanel__HeightOf_21a5838
                             (param_1,uStack_48 & 0xffffffff);
    if (in_s3 + fVar4 + (fVar6 - fVar7) + 600.0 <= fVar8) {
    }
    else {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_022a62c0;
      uStack_48._4_4_ =
           Dino_BusSand_App_Meta_ClimbTowerFeature__WinPointIndex_2229ef0
                     (*(long *)(param_1 + 0x38),param_2,0);
      uStack_48._4_4_ = uStack_48._4_4_ & ((int)uStack_48._4_4_ >> 0x1f ^ 0xffffffffU);
    }
    return uStack_48._4_4_;
  }
LAB_022a62c0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

