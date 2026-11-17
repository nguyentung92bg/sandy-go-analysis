/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$WheelHop
void Dino_BusSand_App_UI_HomeToonRig__WheelHop (Dino_BusSand_App_UI_HomeToonRig_o* __this, int32_t i, float speed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$WheelHop
   void Dino_BusSand_App_UI_HomeToonRig__WheelHop (Dino_BusSand_App_UI_HomeToonRig_o* __this,
   int32_t i, float speed, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__WheelHop_22f5970(undefined4 param_1,long param_2,uint param_3)

{
  long lVar1;
  
  if (param_3 < 4) {
    lVar1 = *(long *)(param_2 + 0x88);
    if (lVar1 == 0) {
LAB_023f59c8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_3) {
LAB_023f59cc:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    if (*(float *)(lVar1 + (ulong)param_3 * 4 + 0x20) <= 0.0) {
      lVar1 = *(long *)(param_2 + 0x90);
      if (lVar1 == 0) goto LAB_023f59c8;
      if (*(uint *)(lVar1 + 0x18) <= param_3) goto LAB_023f59cc;
      *(undefined4 *)(lVar1 + (ulong)param_3 * 4 + 0x20) = param_1;
    }
  }
  return;
}

