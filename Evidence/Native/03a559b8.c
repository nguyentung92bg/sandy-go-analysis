/* IL2CPP: Dino.BusSand.Core.ListView<object>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
System_Collections_Generic_IEnumerator_T__o* Dino_BusSand_Core_ListView_object___System_Collections_Generic_IEnumerable_T__GetEnumerator (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_39559B8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Dino.BusSand.Core.ListView<object>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
   System_Collections_Generic_IEnumerator_T__o*
   Dino_BusSand_Core_ListView_object___System_Collections_Generic_IEnumerable_T__GetEnumerator
   (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_39559B8* method); */

void Dino_BusSand_Core_ListView_object___System_Collections_Generic_IEnumerable_T__GetEnumerator_39559b8
               (long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0216b470();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,lVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
    lVar2 = *(long *)(param_2 + 0x20);
    uStack_48 = uStack_30;
    uStack_50 = uStack_38;
    uStack_40 = uStack_28;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0216b470();
    }
    FUN_02133100(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30),&uStack_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

