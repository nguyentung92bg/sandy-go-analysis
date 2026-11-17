/* IL2CPP: Dino.BusSand.App.MiniJson$$Get
Il2CppObject* Dino_BusSand_App_MiniJson__Get (System_Collections_Generic_Dictionary_string__object__o* d, System_String_o* k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Get
   Il2CppObject* Dino_BusSand_App_MiniJson__Get
   (System_Collections_Generic_Dictionary_string__object__o* d, System_String_o* k, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_MiniJson__Get_21565a8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uStack_28;
  
                    /* try { // try from 022565b4 to 023565b7 has its CatchHandler @ 02256904 */
  if ((bRam0000000004f9b7e3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaf40);
    bRam0000000004f9b7e3 = 1;
  }
  uStack_28 = 0;
  if (param_1 == 0) {
    uStack_28 = 0;
  }
  else {
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (param_1,param_2,&uStack_28,*(undefined8 *)PTR_DAT_04caaf40);
    if ((uVar1 & 1) == 0) {
      uStack_28 = 0;
    }
  }
  return uStack_28;
}

