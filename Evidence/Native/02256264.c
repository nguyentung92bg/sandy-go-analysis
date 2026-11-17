/* IL2CPP: Dino.BusSand.App.MiniJson$$Arr
System_Collections_Generic_List_object__o* Dino_BusSand_App_MiniJson__Arr (Il2CppObject* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$Arr
   System_Collections_Generic_List_object__o* Dino_BusSand_App_MiniJson__Arr (Il2CppObject* o, const
   MethodInfo* method); */

long * Dino_BusSand_App_MiniJson__Arr_2156264(long *param_1)

{
  byte bVar1;
  
  if ((bRam0000000004f9b7e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b90);
    bRam0000000004f9b7e0 = 1;
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_04ca9b90 + 0x130);
    if (bVar1 <= *(byte *)(*param_1 + 0x130)) {
      if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04ca9b90)
      {
        return param_1;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}

