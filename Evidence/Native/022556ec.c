/* IL2CPP: Dino.BusSand.App.MiniJson$$Serialize
System_String_o* Dino_BusSand_App_MiniJson__Serialize (Il2CppObject* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Serialize
   System_String_o* Dino_BusSand_App_MiniJson__Serialize (Il2CppObject* o, const MethodInfo*
   method); */

void Dino_BusSand_App_MiniJson__Serialize_21556ec(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04ca9b78;
  if ((bRam0000000004f9b7dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b78);
    bRam0000000004f9b7dc = 1;
  }
  plVar2 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Text_StringBuilder___ctor_46db61c(plVar2,0);
  Dino_BusSand_App_MiniJson__Write_2155760(plVar2,param_1);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02255758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

