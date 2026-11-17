/* IL2CPP: Dino.BusSand.App.UI.KitPop$$Rescale
void Dino_BusSand_App_UI_KitPop__Rescale (Dino_BusSand_App_UI_KitPop_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPop$$Rescale
   void Dino_BusSand_App_UI_KitPop__Rescale (Dino_BusSand_App_UI_KitPop_o* __this, float k, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPop__Rescale_228da00(float param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  *(ulong *)(param_2 + 0x4c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x4c) >> 0x20) * param_1,
                (float)*(undefined8 *)(param_2 + 0x4c) * param_1);
  *(float *)(param_2 + 0x54) = *(float *)(param_2 + 0x54) * param_1;
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_2,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_2c = *(undefined4 *)(param_2 + 0x4c);
  uStack_28 = *(undefined4 *)(param_2 + 0x50);
  uStack_24 = *(undefined4 *)(param_2 + 0x54);
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

