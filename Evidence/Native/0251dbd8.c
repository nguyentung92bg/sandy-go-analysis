/* IL2CPP: Dino.BusSand.Core.StageEngine$$Tick
System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__Tick (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$Tick
   System_Collections_Generic_List_SimEvent__o* Dino_BusSand_Core_StageEngine__Tick
   (Dino_BusSand_Core_StageEngine_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Core_StageEngine__Tick_241dbd8(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000004f9cba3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbea60);
    bRam0000000004f9cba3 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      lVar2 = *(long *)(param_1 + 0x98);
    }
    Dino_BusSand_Core_StageEngine__TickInto_2424f0c(param_1,lVar2);
    return *(undefined8 *)(param_1 + 0x98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

