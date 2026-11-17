/* IL2CPP: Dino.BusSand.App.Meta.Ev07Rewards$$Grant
System_Collections_Generic_List_KeyValuePair_int__long___o* Dino_BusSand_App_Meta_Ev07Rewards__Grant (System_Collections_Generic_List_int____o* list, System_String_o* reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Ev07Rewards$$Grant
   System_Collections_Generic_List_KeyValuePair_int__long___o*
   Dino_BusSand_App_Meta_Ev07Rewards__Grant (System_Collections_Generic_List_int____o* list,
   System_String_o* reason, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_Ev07Rewards__Grant_222edfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04caf810;
  if ((bRam0000000004f9be5d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf810);
    bRam0000000004f9be5d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = Dino_BusSand_App_Meta_Ev07Rewards__Pairs_222ebe4(param_1);
  Dino_BusSand_App_Meta_RewardList__Grant_220d370(uVar2,param_2,1,0);
  return uVar2;
}

