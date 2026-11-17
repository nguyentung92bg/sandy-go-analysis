/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$GetIsoWeek
int32_t Dino_BusSand_App_Meta_GiftPackCycle__GetIsoWeek (System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$GetIsoWeek
   int32_t Dino_BusSand_App_Meta_GiftPackCycle__GetIsoWeek (System_DateTime_o date, const
   MethodInfo* method); */

int Dino_BusSand_App_Meta_GiftPackCycle__GetIsoWeek_2232530(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uStack_28;
  undefined8 uStack_18;
  
  puVar2 = PTR_DAT_04caa468;
  uStack_18 = param_1;
  if ((bRam0000000004f9be87 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa468);
    bRam0000000004f9be87 = 1;
  }
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar3 = System_DateTime__get_DayOfWeek_48110b4(&uStack_18,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar4);
  }
  iVar1 = -2;
  if (iVar3 != 0) {
    iVar1 = 4 - iVar3;
  }
  uStack_28 = System_DateTime__AddDays_48100a0((double)iVar1,&uStack_18,0);
  iVar3 = System_DateTime__get_DayOfYear_4811140(&uStack_28,0);
  return (iVar3 + -1) / 7 + 1;
}

