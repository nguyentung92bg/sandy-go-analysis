/* IL2CPP: Dino.BusSand.View.MechanicLayer.ListPool$$Keys<__Il2CppFullySharedGenericType>
System_Collections_Generic_List_int__o* Dino_BusSand_View_MechanicLayer_ListPool__Keys___Il2CppFullySharedGenericType_ (System_Collections_Generic_Dictionary_int__T__o* d, const MethodInfo_2977234* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.ListPool$$Keys<__Il2CppFullySharedGenericType>
   System_Collections_Generic_List_int__o*
   Dino_BusSand_View_MechanicLayer_ListPool__Keys___Il2CppFullySharedGenericType_
   (System_Collections_Generic_Dictionary_int__T__o* d, const MethodInfo_2977234* method); */

undefined8
Dino_BusSand_View_MechanicLayer_ListPool__Keys___Il2CppFullySharedGenericType__2977234
          (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd608);
    FUN_02132f7c(PTR_DAT_04cbc9f0);
    FUN_02132f7c(PTR_DAT_04cad858);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0216b4cc(param_2);
    }
  }
  puVar1 = PTR_DAT_04cbd608;
  lVar2 = *(long *)PTR_DAT_04cbd608;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (param_1 != 0) {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x38) + 8))(param_1);
      System_Collections_Generic_List_int___AddRange_3a2c278
                (lVar2,uVar3,*(undefined8 *)PTR_DAT_04cbc9f0);
      return **(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

