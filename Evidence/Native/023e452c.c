/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Doze
void Dino_BusSand_App_UI_HomeBus__Doze (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Doze
   void Dino_BusSand_App_UI_HomeBus__Doze (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeBus__Doze_22e452c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  if ((bRam0000000004f9c413 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb71a8);
    bRam0000000004f9c413 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0xe0) = 1;
  puVar1 = PTR_DAT_04cb71a8;
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0xb8) = 0;
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0xb8);
    uStack_38 = *(undefined8 *)(lVar2 + 0x80);
    uStack_40 = *(undefined8 *)(lVar2 + 0x78);
    uStack_30 = *(undefined4 *)(lVar2 + 0x88);
    Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar3,&uStack_40,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                (0,_UNK_00e1fe50,_UNK_00e1fe70,*(long *)(param_1 + 0x20),0);
      *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0x88) + 2.5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

