/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnBlockedByObject
void Dino_BusSand_View_MechanicLayer__OnBlockedByObject (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnBlockedByObject
   void Dino_BusSand_View_MechanicLayer__OnBlockedByObject (Dino_BusSand_View_MechanicLayer_o*
   __this, int32_t id, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnBlockedByObject_23ce410(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000004f9c9f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd510);
    FUN_02132f7c(PTR_DAT_04cbd518);
    FUN_02132f7c(PTR_DAT_04cbd520);
    FUN_02132f7c(PTR_DAT_04cbd528);
    bRam0000000004f9c9f8 = 1;
  }
  puVar4 = PTR_DAT_04cbd518;
  puVar3 = PTR_DAT_04cbd510;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    System_Collections_Generic_List_ValueTuple_byte__object____GetEnumerator_399fd74
              (&uStack_60,*(long *)(param_1 + 0x80),*(undefined8 *)PTR_DAT_04cbd528);
    uVar2 = _UNK_00e20994;
    uVar1 = _UNK_00e20390;
    while (uVar5 = System_Collections_Generic_List_Enumerator_ValueTuple_byte__object____MoveNext_35ba9b0
                             (&uStack_60,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
      Dino_BusSand_View_MechanicLayer__Flash_23cf8d4(0x3f800000,uVar1,uVar1,uVar2,param_1,uStack_48)
      ;
    }
    System_Collections_Generic_List_Enumerator_ValueTuple_byte__object____Dispose_35ba9ac
              (&uStack_60,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

