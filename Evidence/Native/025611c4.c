/* IL2CPP: Dino.Tracking.ServerTrackingCore$$BuildBatchJson
System_String_o* Dino_Tracking_ServerTrackingCore__BuildBatchJson (Dino_Tracking_ServerTrackingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$BuildBatchJson
   System_String_o* Dino_Tracking_ServerTrackingCore__BuildBatchJson
   (Dino_Tracking_ServerTrackingCore_o* __this, const MethodInfo* method); */

undefined8 Dino_Tracking_ServerTrackingCore__BuildBatchJson_24611c4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9ce26 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0a48);
    FUN_02132f7c(PTR_DAT_04cc0a00);
    FUN_02132f7c(PTR_DAT_04cc0a50);
    FUN_02132f7c(PTR_DAT_04ca9b78);
    bRam0000000004f9ce26 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
    if (iVar5 == 0) {
      return 0;
    }
    plVar2 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b78);
    System_Text_StringBuilder___ctor_46db688(plVar2,iVar5 << 7,0);
    if (plVar2 != (long *)0x0) {
      System_Text_StringBuilder__Append_46dd710(plVar2,0x5b,0);
      puVar1 = PTR_DAT_04cc0a50;
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 != 0) {
        iVar5 = 0;
        do {
          if (*(int *)(lVar3 + 0x18) <= iVar5) {
            System_Text_StringBuilder__Append_46dd710(plVar2,0x5d,0);
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != 0) {
              iVar5 = *(int *)(lVar3 + 0x18);
              *(undefined4 *)(lVar3 + 0x18) = 0;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (0 < iVar5) {
                System_Array__Clear_4851dc8(*(undefined8 *)(lVar3 + 0x10),0,iVar5,0);
              }
              *(undefined4 *)(param_1 + 0x48) = 0;
              *(undefined1 *)(param_1 + 0x4c) = 0;
              uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
              return uVar4;
            }
            break;
          }
          if (iVar5 != 0) {
            System_Text_StringBuilder__Append_46dd710(plVar2,0x2c,0);
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 == 0) break;
          }
          System_Collections_Generic_List_ServerTrackingCore_PendingEvent___get_Item_2a97b84
                    (&uStack_68,lVar3,iVar5,*(undefined8 *)puVar1);
          uStack_48 = uStack_60;
          uStack_50 = uStack_68;
          uStack_40 = uStack_58;
          Dino_Tracking_ServerTrackingCore__WriteEvent_2461354(param_1,plVar2,&uStack_50);
          lVar3 = *(long *)(param_1 + 0x40);
          iVar5 = iVar5 + 1;
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

