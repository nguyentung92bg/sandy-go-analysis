/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Settle
void Dino_BusSand_App_UI_HomeBus__Settle (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Settle
   void Dino_BusSand_App_UI_HomeBus__Settle (Dino_BusSand_App_UI_HomeBus_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Settle_22e0984(long param_1)

{
  if ((*(long *)(param_1 + 0x18) != 0) && ((*(uint *)(param_1 + 0x50) & 0xfffffffe) != 2)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x4c);
    if (*(long *)(param_1 + 0x10) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(undefined4 *)(param_1 + 0x4c),0,0,*(long *)(param_1 + 0x10),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

