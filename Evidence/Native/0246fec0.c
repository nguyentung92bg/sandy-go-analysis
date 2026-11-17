/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Tap
void Dino_BusSand_Cheat_QaJourney__Tap (Dino_BusSand_Cheat_QaJourney_o* __this, System_String_o* what, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Tap
   void Dino_BusSand_Cheat_QaJourney__Tap (Dino_BusSand_Cheat_QaJourney_o* __this, System_String_o*
   what, const MethodInfo* method); */

void Dino_BusSand_Cheat_QaJourney__Tap_236fec0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9c7cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    bRam0000000004f9c7cc = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *(long *)PTR_DAT_04cab718;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_2;
      }
      else {
        uVar1 = *(uint *)(lVar3 + 0x18);
        System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                  (lVar3,uVar1 + 1,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        + 0x20) + 0xc0) + 0x78));
        lVar4 = *(long *)(lVar3 + 0x10);
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_2;
      }
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                     ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

