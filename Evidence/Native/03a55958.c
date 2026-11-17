/* IL2CPP: Dino.BusSand.Core.ListView<object>$$GetEnumerator
System_Collections_Generic_List_Enumerator_T__o Dino_BusSand_Core_ListView_object___GetEnumerator (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_3955958* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ListView<object>$$GetEnumerator
   System_Collections_Generic_List_Enumerator_T__o Dino_BusSand_Core_ListView_object___GetEnumerator
   (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_3955958* method); */

void Dino_BusSand_Core_ListView_object___GetEnumerator_3955958
               (undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0216b470();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_38,lVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x28));
    param_1[1] = uStack_30;
    *param_1 = uStack_38;
    param_1[2] = uStack_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

