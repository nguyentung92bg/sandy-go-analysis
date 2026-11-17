/* IL2CPP: Dino.BusSand.App.MiniJson$$Obj
System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_MiniJson__Obj (Il2CppObject* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Obj
   System_Collections_Generic_Dictionary_string__object__o* Dino_BusSand_App_MiniJson__Obj
   (Il2CppObject* o, const MethodInfo* method); */

long * Dino_BusSand_App_MiniJson__Obj_21561ec(long *param_1)

{
  byte bVar1;
  
  if ((bRam0000000004f9b7df & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b08);
    bRam0000000004f9b7df = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_04ca9b08 + 0x130);
    if (bVar1 <= *(byte *)(*param_1 + 0x130)) {
      if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04ca9b08)
      {
        return param_1;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}

