/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DoneDaysThisMonth
System_Collections_Generic_List_int__o* Dino_BusSand_App_Meta_DailyChallengeModel__DoneDaysThisMonth (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.DailyChallengeModel$$DoneDaysThisMonth
   System_Collections_Generic_List_int__o*
   Dino_BusSand_App_Meta_DailyChallengeModel__DoneDaysThisMonth
   (Dino_BusSand_App_Meta_DailyChallengeModel_o* __this, int64_t nowMs, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_Meta_DailyChallengeModel__DoneDaysThisMonth_222ea3c
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000004f9be59 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2af0);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    bRam0000000004f9be59 = 1;
  }
  Dino_BusSand_App_Meta_DailyChallengeModel__EnsureMonth_222e490(param_1,param_2);
  puVar1 = PTR_DAT_04cb2af0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b918(uVar2,uVar3,*(undefined8 *)puVar1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

