/* IL2CPP: Dino.BusSand.Core.ListView<object>$$get_Count
int32_t Dino_BusSand_Core_ListView_object___get_Count (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_39558E0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ListView<object>$$get_Count
   int32_t Dino_BusSand_Core_ListView_object___get_Count (Dino_BusSand_Core_ListView_T__o __this,
   const MethodInfo_39558E0* method); */

undefined4 Dino_BusSand_Core_ListView_object___get_Count_39558e0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_0216b470();
    }
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

