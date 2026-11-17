/* IL2CPP: Dino.BusSand.Core.Road$$IndexOf
int32_t Dino_BusSand_Core_Road__IndexOf (Dino_BusSand_Core_Road_o* __this, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$IndexOf
   int32_t Dino_BusSand_Core_Road__IndexOf (Dino_BusSand_Core_Road_o* __this, int32_t truckId, const
   MethodInfo* method); */

uint Dino_BusSand_Core_Road__IndexOf_2412848(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  if ((bRam0000000004f9cb5b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe600);
    FUN_02132f7c(PTR_DAT_04cbe608);
    bRam0000000004f9cb5b = 1;
  }
  puVar2 = PTR_DAT_04cbe608;
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_0251291c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  iVar4 = *(int *)(*(long *)(param_1 + 0x50) + 0x18) + -1;
  if (iVar4 < 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      while( true ) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_0251291c;
        uVar1 = (int)(uVar5 + iVar4) >> 1;
        lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(param_1 + 0x50),uVar1,*(undefined8 *)puVar2);
        if (lVar3 == 0) goto LAB_0251291c;
        if (*(int *)(lVar3 + 0x10) == param_2) {
          return uVar1;
        }
        if (param_2 <= *(int *)(lVar3 + 0x10)) break;
        uVar5 = uVar1 + 1;
        if (iVar4 <= (int)uVar1) goto LAB_02512900;
      }
      iVar4 = uVar1 - 1;
    } while ((int)uVar5 < (int)uVar1);
  }
LAB_02512900:
  return ~uVar5;
}

