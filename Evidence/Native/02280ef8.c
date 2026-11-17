/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$OnDisable
void Dino_BusSand_App_UI_KitIdle__OnDisable (Dino_BusSand_App_UI_KitIdle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitIdle$$OnDisable
   void Dino_BusSand_App_UI_KitIdle__OnDisable (Dino_BusSand_App_UI_KitIdle_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitIdle__OnDisable_2180ef8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9b929 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9b929 = 1;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    return;
  }
  plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec
              (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),plVar1,0);
    lVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if (lVar2 != 0) {
      UnityEngine_Transform__set_localScale_43d1be0
                (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 0x38),lVar2,0);
      lVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (cRam0000000004f9b88b == '\0') {
        FUN_02132f7c(PTR_DAT_04cab4b0);
        cRam0000000004f9b88b = '\x01';
      }
      if (lVar2 != 0) {
        puVar3 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
        uStack_30 = *puVar3;
        uStack_2c = puVar3[1];
        uStack_28 = puVar3[2];
        uStack_24 = puVar3[3];
        if ((bRam0000000004fa8b3a & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3a = 1;
        }
        if (lVar2 != 0) {
          lVar2 = *(long *)(lVar2 + 0x10);
          if (lVar2 != 0) {
            if (pcRam0000000004fa8bd0 == (code *)0x0) {
              pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
            }
            (*pcRam0000000004fa8bd0)(lVar2,&uStack_30);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

