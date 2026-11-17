/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.<>c$$<Rebuild>b__35_0
bool Dino_BusSand_App_Meta_EconomySettings___c___Rebuild_b__35_0 (Dino_BusSand_App_Meta_EconomySettings___c_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings.<>c$$<Rebuild>b__35_0
   bool Dino_BusSand_App_Meta_EconomySettings___c___Rebuild_b__35_0
   (Dino_BusSand_App_Meta_EconomySettings___c_o* __this, System_String_o* id, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_EconomySettings___c___Rebuild_b__35_0_220b504
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04cac018;
  if ((bRam0000000004f9bcea & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb2130);
    FUN_02132f7c(PTR_DAT_04cb1d70);
    bRam0000000004f9bcea = 1;
  }
  puVar2 = PTR_DAT_04cb1d70;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Tables__Row_215ee18(*(undefined8 *)puVar2,param_2,0);
  puVar3 = PTR_DAT_04cb2130;
  bVar4 = false;
  if (lVar6 != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_App_Tables__Row_215ee18(*(undefined8 *)puVar2,param_2,0);
    uVar7 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar7,*(undefined8 *)puVar3,0);
    iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar7,0,0);
    bVar4 = 0 < iVar5;
  }
  return bVar4;
}

