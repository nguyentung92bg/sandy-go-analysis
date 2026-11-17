/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Handle
void Dino_BusSand_View_MechanicLayer__Handle (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_SimEvent_o e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$Handle
   void Dino_BusSand_View_MechanicLayer__Handle (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_SimEvent_o e, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__Handle_23caa6c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_04cac5d0;
  if ((bRam0000000004f9c9e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5d0);
    bRam0000000004f9c9e5 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x50);
  if (lVar2 != 0) {
    uStack_48 = param_2[1];
    uStack_50 = *param_2;
    uStack_40 = param_2[2];
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),&uStack_50,*(undefined8 *)(lVar2 + 0x28));
  }
  switch(*(undefined4 *)param_2) {
  case 0:
    if (*(int *)(param_2 + 1) < 0) {
      Dino_BusSand_View_MechanicLayer__OnBlockedByObject_23ce410(param_1);
    }
    break;
  case 2:
    Dino_BusSand_View_MechanicLayer__OnTruckLeft_23cdf88(param_1,*(undefined4 *)((long)param_2 + 4))
    ;
    break;
  case 0x16:
    Dino_BusSand_View_MechanicLayer__OnFuelTick_23cac08
              (param_1,*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1));
    break;
  case 0x17:
    Dino_BusSand_View_MechanicLayer__OnFuelDone_23cafe8(param_1,*(undefined4 *)((long)param_2 + 4));
    break;
  case 0x18:
    Dino_BusSand_View_MechanicLayer__OnKey_23cb3c8
              (param_1,*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1));
    break;
  case 0x19:
    Dino_BusSand_View_MechanicLayer__OnShift_23cbc40
              (param_1,*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1));
    break;
  case 0x1a:
    Dino_BusSand_View_MechanicLayer__OnLiftRaised_23cbf2c
              (param_1,*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1));
    break;
  case 0x1b:
    Dino_BusSand_View_MechanicLayer__OnLiftSpent_23cc690(param_1,*(undefined4 *)((long)param_2 + 4))
    ;
    break;
  case 0x1c:
    Dino_BusSand_View_MechanicLayer__OnLaneAdvanced_23cc9e8
              (param_1,*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1));
    break;
  case 0x1d:
    Dino_BusSand_View_MechanicLayer__OnLaneSpent_23ccdc0(param_1,*(undefined4 *)((long)param_2 + 4))
    ;
    break;
  case 0x1e:
    Dino_BusSand_View_MechanicLayer__OnDuneMelted_23cd3dc
              (param_1,*(undefined4 *)((long)param_2 + 4));
    break;
  case 0x1f:
    Dino_BusSand_View_MechanicLayer__OnFireTruckSaved_23cd81c
              (param_1,*(undefined4 *)((long)param_2 + 4));
    break;
  case 0x20:
    Dino_BusSand_View_MechanicLayer__OnWaiting_23cdc80
              (param_1,*(undefined4 *)((long)param_2 + 4),*(undefined4 *)(param_2 + 1));
    break;
  case 0x22:
    Dino_BusSand_View_MechanicLayer__OnChainReleased_23ce308
              (param_1,*(undefined4 *)((long)param_2 + 4));
  }
  return;
}

