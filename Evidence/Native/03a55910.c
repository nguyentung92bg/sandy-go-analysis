/* IL2CPP: Dino.BusSand.Core.ListView<object>$$get_Item
Il2CppObject* Dino_BusSand_Core_ListView_object___get_Item (Dino_BusSand_Core_ListView_T__o __this, int32_t index, const MethodInfo_3955910* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ListView<object>$$get_Item
   Il2CppObject* Dino_BusSand_Core_ListView_object___get_Item (Dino_BusSand_Core_ListView_T__o
   __this, int32_t index, const MethodInfo_3955910* method); */

undefined8
Dino_BusSand_Core_ListView_object___get_Item_3955910(long *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0216b470();
  }
  if (*(uint *)(lVar2 + 0x18) <= param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
              (0,param_2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x18));
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

