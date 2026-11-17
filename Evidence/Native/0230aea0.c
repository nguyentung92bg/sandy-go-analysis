/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$ItemId
int32_t Dino_BusSand_App_Meta_EconomySettings__ItemId (Il2CppObject* o, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.EconomySettings$$ItemId
   int32_t Dino_BusSand_App_Meta_EconomySettings__ItemId (Il2CppObject* o, const MethodInfo*
   method); */

ulong Dino_BusSand_App_Meta_EconomySettings__ItemId_220aea0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  uint uStack_2c;
  long lStack_28;
  
  if ((bRam0000000004f9bce1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb20d0);
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cb1d58);
    FUN_02132f7c(PTR_DAT_04cb20d8);
    FUN_02132f7c(PTR_DAT_04cb20e0);
                    /* catch() { ... } // from try @ 0230ae8c with catch @ 0230af00 */
    FUN_02132f7c(PTR_DAT_04cb20e8);
    FUN_02132f7c(PTR_DAT_04cb20f0);
    bRam0000000004f9bce1 = 1;
  }
  puVar1 = PTR_DAT_04cb1d58;
  lStack_28 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((param_1 == (long *)0x0) || (*param_1 != *(long *)(PTR_DAT_04ca9ac8 + 0x90))) {
    if (*(int *)(*(long *)PTR_DAT_04cb1d58 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = Dino_BusSand_App_Meta_EconomySettings__Whole_22087a0(param_1,&lStack_28);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
      if (lVar3 == 0) goto LAB_0230b070;
      System_Collections_Generic_Dictionary_object__int___GetEnumerator_34a9d18
                (&uStack_60,lVar3,*(undefined8 *)PTR_DAT_04cb20d0);
      lVar3 = lStack_28;
      puVar1 = PTR_DAT_04cb20e0;
      do {
        uVar2 = System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext_3643f88
                          (&uStack_60,*(undefined8 *)puVar1);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          break;
        }
        uVar2 = uStack_48;
      } while (lVar3 != (int)uStack_48);
      System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose_36440ac
                (&uStack_60,*(undefined8 *)PTR_DAT_04cb20d8);
    }
  }
  else {
    lVar3 = *(long *)PTR_DAT_04cb1d58;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x30);
    lVar3 = System_String__Trim_46d6ee0(param_1,0);
    if ((lVar3 == 0) || (uVar4 = System_String__ToLowerInvariant_46d6ce8(lVar3,0), lVar5 == 0)) {
LAB_0230b070:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
                      (lVar5,uVar4,&uStack_2c,*(undefined8 *)PTR_DAT_04cad650);
    if ((uVar2 & 1) == 0) {
      uStack_2c = 0;
    }
    uVar2 = (ulong)uStack_2c;
  }
  return uVar2 & 0xffffffff;
}

