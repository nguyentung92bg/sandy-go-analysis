/* IL2CPP: Dino.BusSand.Core.ListView<__Il2CppFullySharedGenericType>$$get_Count
int32_t Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___get_Count (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_3955AC8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.ListView<__Il2CppFullySharedGenericType>$$get_Count
   int32_t Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___get_Count
   (Dino_BusSand_Core_ListView_T__o __this, const MethodInfo_3955AC8* method); */

void Dino_BusSand_Core_ListView___Il2CppFullySharedGenericType___get_Count_3955ac8
               (long *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_0216b470(lVar3);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar2 = *(long *)(param_2 + 0x20);
  }
  UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_0216b470(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x03a55b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10));
  return;
}

