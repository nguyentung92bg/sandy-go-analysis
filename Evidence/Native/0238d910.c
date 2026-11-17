/* IL2CPP: Dino.BusSand.App.UI.KitPulse$$OnDisable
void Dino_BusSand_App_UI_KitPulse__OnDisable (Dino_BusSand_App_UI_KitPulse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPulse$$OnDisable
   void Dino_BusSand_App_UI_KitPulse__OnDisable (Dino_BusSand_App_UI_KitPulse_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPulse__OnDisable_228d910(long param_1)

{
  long lVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_2c = *(undefined4 *)(param_1 + 0x28);
  uStack_28 = *(undefined4 *)(param_1 + 0x2c);
  uStack_24 = *(undefined4 *)(param_1 + 0x30);
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000004fa8bf0 == (code *)0x0) {
        pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
      }
      (*pcRam0000000004fa8bf0)(lVar1,&uStack_2c);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

