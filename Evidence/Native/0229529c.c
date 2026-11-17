/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$NormalizedFor
float Dino_BusSand_App_UI_BattleRoyaleScenePanel__NormalizedFor (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_RectTransform_o* target, float offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$NormalizedFor
   float Dino_BusSand_App_UI_BattleRoyaleScenePanel__NormalizedFor
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_RectTransform_o* target, float
   offset, const MethodInfo* method); */

float Dino_BusSand_App_UI_BattleRoyaleScenePanel__NormalizedFor_219529c
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,long param_5,
                long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9be & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9b9be = 1;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_6,0,0);
    if (((uVar2 & 1) == 0) &&
       (fVar7 = (float)Dino_BusSand_App_UI_BattleRoyaleScenePanel__MaxScroll_2195140(param_5),
       0.0 < fVar7)) {
      lVar3 = *(long *)(param_5 + 0x48);
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + 0x20);
        uVar5 = *(undefined8 *)(lVar3 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        lVar3 = *(long *)(param_5 + 0x48);
        if ((uVar2 & 1) == 0) {
          if (lVar3 == 0) goto LAB_0229545c;
          plVar4 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar3,0);
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)0x0;
          }
          else if (*plVar4 != *(long *)PTR_DAT_04cabdb0) {
            plVar4 = (long *)0x0;
          }
        }
        else {
          if (lVar3 == 0) goto LAB_0229545c;
          plVar4 = *(long **)(lVar3 + 0x40);
        }
        if ((param_6 != 0) && (UnityEngine_Transform__get_position_43d0e48(param_6,0), lVar6 != 0))
        {
          UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar6,0);
          fVar8 = param_2;
          UnityEngine_RectTransform__get_rect_43cf450(lVar6,0);
          if (plVar4 != (long *)0x0) {
            UnityEngine_RectTransform__get_rect_43cf450(plVar4,0);
            fVar7 = (((param_2 - fVar8) + param_4 * -0.5) - param_1) / fVar7;
            fVar8 = 1.0;
            if (fVar7 <= 1.0) {
              fVar8 = fVar7;
            }
            if (fVar7 < 0.0) {
              return 0.0;
            }
            return fVar8;
          }
        }
      }
LAB_0229545c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 0.0;
}

