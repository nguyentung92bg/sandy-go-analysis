/* IL2CPP: Dino.BusSand.App.BootTrace$$Sum
void Dino_BusSand_App_BootTrace__Sum (System_String_o* bucket, float ms, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.BootTrace$$Sum
   void Dino_BusSand_App_BootTrace__Sum (System_String_o* bucket, float ms, const MethodInfo*
   method); */

void Dino_BusSand_App_BootTrace__Sum_214e5a8(float param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b7b0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04cab290);
    FUN_02132f7c(PTR_DAT_04cab298);
    FUN_02132f7c(PTR_DAT_04cab2a0);
    bRam0000000004f9b7b0 = 1;
  }
  lVar2 = *(long *)puVar1;
  uStack_28 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(lVar2 + 0xb8);
  if (*(char *)(lVar3 + 0x24) != '\0') {
    return;
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0224e588 with catch @ 0224e638 */
    thunk_FUN_0218fdac();
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  if (*(long *)(lVar3 + 0x28) != 0) {
    System_Collections_Generic_Dictionary_object__ValueTuple_int__float____TryGetValue_347febc
              (*(long *)(lVar3 + 0x28),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cab290);
    uStack_38 = 0;
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    System_ValueTuple_int__float____ctor_30e238c
              (uStack_28._4_4_ + param_1,&uStack_38,(int)uStack_28 + 1,
               *(undefined8 *)PTR_DAT_04cab2a0);
    if (lVar2 != 0) {
      System_Collections_Generic_Dictionary_object__ValueTuple_int__float____set_Item_347e398
                (lVar2,param_2,uStack_38,*(undefined8 *)PTR_DAT_04cab298);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

