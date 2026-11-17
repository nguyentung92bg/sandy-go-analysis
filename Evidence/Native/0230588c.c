/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Rows
System_Collections_Generic_IEnumerable_Dictionary_string__object___o* Dino_BusSand_App_Meta_EconomySettings__Rows (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$Rows
   System_Collections_Generic_IEnumerable_Dictionary_string__object___o*
   Dino_BusSand_App_Meta_EconomySettings__Rows (const MethodInfo* method); */

long Dino_BusSand_App_Meta_EconomySettings__Rows_220588c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04cb1d78;
  if ((bRam0000000004f9bcd4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1d78);
    bRam0000000004f9bcd4 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  *(undefined4 *)(lVar3 + 0x10) = 0xfffffffe;
  uVar2 = System_Environment__get_CurrentManagedThreadId_4872920(0);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  return lVar3;
}

