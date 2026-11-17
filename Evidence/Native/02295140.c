/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$MaxScroll
float Dino_BusSand_App_UI_BattleRoyaleScenePanel__MaxScroll (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$MaxScroll
   float Dino_BusSand_App_UI_BattleRoyaleScenePanel__MaxScroll
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, const MethodInfo* method); */

float Dino_BusSand_App_UI_BattleRoyaleScenePanel__MaxScroll_2195140(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float in_s3;
  float fVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 02294f6c with catch @ 02295154 */
  if ((bRam0000000004f9b9bd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9b9bd = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return 0.0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return 0.0;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      lVar3 = *(long *)(param_1 + 0x48);
      if ((uVar2 & 1) == 0) {
        if (lVar3 == 0) goto LAB_02295298;
        plVar5 = (long *)UnityEngine_Component__get_transform_43bcd18(lVar3,0);
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
          plVar5 = (long *)0x0;
        }
        lVar3 = *(long *)(param_1 + 0x48);
        if (lVar3 == 0) goto LAB_02295298;
      }
      else {
        if (lVar3 == 0) goto LAB_02295298;
        plVar5 = *(long **)(lVar3 + 0x40);
      }
      if ((*(long *)(lVar3 + 0x20) != 0) &&
         (UnityEngine_RectTransform__get_rect_43cf450(*(long *)(lVar3 + 0x20),0),
         plVar5 != (long *)0x0)) {
        fVar6 = in_s3;
        UnityEngine_RectTransform__get_rect_43cf450(plVar5,0);
        return in_s3 - fVar6;
      }
    }
  }
LAB_02295298:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

