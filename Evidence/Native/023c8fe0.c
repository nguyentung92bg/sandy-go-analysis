/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$AddTrigger
void Dino_BusSand_App_UI_GuidePanel__AddTrigger (UnityEngine_EventSystems_EventTrigger_o* trigger, int32_t type, UnityEngine_Events_UnityAction_BaseEventData__o* action, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$AddTrigger
   void Dino_BusSand_App_UI_GuidePanel__AddTrigger (UnityEngine_EventSystems_EventTrigger_o*
   trigger, int32_t type, UnityEngine_Events_UnityAction_BaseEventData__o* action, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GuidePanel__AddTrigger_22c8fe0
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04cb6a28;
  if ((bRam0000000004f9c368 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6a28);
    FUN_02132f7c(PTR_DAT_04cb6a30);
    FUN_02132f7c(PTR_DAT_04cb6a38);
    bRam0000000004f9c368 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  UnityEngine_EventSystems_EventTrigger_Entry___ctor_46a3c5c(lVar3,0);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x10) = param_2;
    if (((*(long *)(lVar3 + 0x18) != 0) &&
        (UnityEngine_Events_UnityEvent_object___AddListener_303d54c
                   (*(long *)(lVar3 + 0x18),param_3,*(undefined8 *)PTR_DAT_04cb6a38), param_1 != 0))
       && (lVar4 = UnityEngine_EventSystems_EventTrigger__get_triggers_46a39c8(param_1,0),
          lVar4 != 0)) {
      lVar6 = *(long *)(lVar4 + 0x10);
      lVar7 = *(long *)PTR_DAT_04cb6a30;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar3;
        }
        else {
          uVar1 = *(uint *)(lVar4 + 0x18);
          System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                    (lVar4,uVar1 + 1,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) +
                                                    0x70) + 0x20) + 0xc0) + 0x78));
          lVar6 = *(long *)(lVar4 + 0x10);
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar5 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar3;
        }
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                       ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

