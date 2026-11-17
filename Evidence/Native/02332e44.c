/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$MonthDate
System_DateTime_o Dino_BusSand_App_Meta_GiftPackCycle__MonthDate (int32_t year, int32_t month, int32_t day, int32_t seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackCycle$$MonthDate
   System_DateTime_o Dino_BusSand_App_Meta_GiftPackCycle__MonthDate (int32_t year, int32_t month,
   int32_t day, int32_t seconds, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackCycle__MonthDate_2232e44
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9be85 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa468);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9be85 = 1;
  }
  puVar2 = PTR_DAT_04caa468;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = System_Math__Max_4830fc8(1,param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = System_DateTime__DaysInMonth_48105bc(param_1,param_2,0);
  uVar3 = System_Math__Min_4831118(uVar3,uVar4,0);
  uStack_48 = 0;
  System_DateTime___ctor_480f3a0(&uStack_48,param_1,param_2,uVar3,0,0,0,1,0);
  uStack_38 = uStack_48;
  System_DateTime__AddSeconds_48106f4((double)param_4,&uStack_38,0);
  return;
}

