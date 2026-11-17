/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteEvent
void Dino_Tracking_ServerTrackingCore__WriteEvent (Dino_Tracking_ServerTrackingCore_o* __this, System_Text_StringBuilder_o* sb, Dino_Tracking_ServerTrackingCore_PendingEvent_o* ev, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.ServerTrackingCore$$WriteEvent
   void Dino_Tracking_ServerTrackingCore__WriteEvent (Dino_Tracking_ServerTrackingCore_o* __this,
   System_Text_StringBuilder_o* sb, Dino_Tracking_ServerTrackingCore_PendingEvent_o* ev, const
   MethodInfo* method); */

void Dino_Tracking_ServerTrackingCore__WriteEvent_2461354
               (long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam0000000004f9ce27 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0398);
    FUN_02132f7c(PTR_DAT_04cc0a58);
    FUN_02132f7c(PTR_DAT_04cc0a60);
    FUN_02132f7c(PTR_DAT_04caab50);
    FUN_02132f7c(PTR_DAT_04cbf220);
    FUN_02132f7c(PTR_DAT_04cc0a68);
    FUN_02132f7c(PTR_DAT_04cabc70);
    bRam0000000004f9ce27 = 1;
  }
  puVar4 = PTR_DAT_04cc0a60;
  puVar3 = PTR_DAT_04cabc70;
  if (param_2 != 0) {
    System_Text_StringBuilder__Append_46dd710(param_2,0x7b,0);
    Dino_Tracking_ServerTrackingCore__WriteStringPair_24615ec
              (param_2,*(undefined8 *)puVar3,*param_3);
    System_Text_StringBuilder__Append_46dd710(param_2,0x2c,0);
    Dino_Tracking_ServerTrackingCore__WriteNumberPair_246162c
              (param_2,*(undefined8 *)puVar4,param_3[1]);
    puVar3 = PTR_DAT_04cbf220;
    if (*(long *)(param_1 + 0x18) != 0) {
      if (0 < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) {
        System_Text_StringBuilder__Append_46dd710(param_2,0x2c,0);
        Dino_Tracking_ServerTrackingCore__WriteStringPair_24615ec
                  (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x18));
      }
      puVar3 = PTR_DAT_04caab50;
      if (*(long *)(param_1 + 0x20) != 0) {
        if (0 < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) {
          System_Text_StringBuilder__Append_46dd710(param_2,0x2c,0);
          Dino_Tracking_ServerTrackingCore__WriteStringPair_24615ec
                    (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x20));
        }
        puVar3 = PTR_DAT_04cc0a58;
        if (*(long *)(param_1 + 0x30) != 0) {
          if (0 < *(int *)(*(long *)(param_1 + 0x30) + 0x10)) {
            System_Text_StringBuilder__Append_46dd710(param_2,0x2c,0);
            Dino_Tracking_ServerTrackingCore__WriteStringPair_24615ec
                      (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x30));
          }
          puVar3 = PTR_DAT_04cc0398;
          if (*(long *)(param_1 + 0x28) != 0) {
            if (0 < *(int *)(*(long *)(param_1 + 0x28) + 0x10)) {
              System_Text_StringBuilder__Append_46dd710(param_2,0x2c,0);
              Dino_Tracking_ServerTrackingCore__WriteStringPair_24615ec
                        (param_2,*(undefined8 *)puVar3,*(undefined8 *)(param_1 + 0x28));
            }
            if ((param_3[2] == 0) || (*(long *)(param_3[2] + 0x18) == 0)) {
LAB_025615cc:
              lVar5 = *(long *)(param_2 + 0x10);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(param_2,0x7d,0);
              }
              uVar2 = *(uint *)(param_2 + 0x20);
              uVar1 = *(uint *)(lVar5 + 0x18);
              if ((int)uVar2 < (int)uVar1) {
                *(uint *)(param_2 + 0x20) = uVar2 + 1;
                if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                *(undefined2 *)(lVar5 + (long)(int)uVar2 * 2 + 0x20) = 0x7d;
              }
              else {
                System_Text_StringBuilder__Append_46dc71c(param_2,0x7d,1);
              }
              return;
            }
            System_Text_StringBuilder__Append_46dd710(param_2,0x2c,0);
            System_Text_StringBuilder__Append_46dcdf4(param_2,*(undefined8 *)PTR_DAT_04cc0a68,0);
            lVar5 = param_3[2];
            if (lVar5 != 0) {
              uVar6 = 0;
              lVar7 = 0x20;
              do {
                if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar6) {
                  System_Text_StringBuilder__Append_46dd710(param_2,0x7d,0);
                  goto LAB_025615cc;
                }
                if (lVar7 != 0x20) {
                  System_Text_StringBuilder__Append_46dd710(param_2,0x2c,0);
                  lVar5 = param_3[2];
                  if (lVar5 == 0) break;
                }
                if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_0213322c();
                }
                lVar5 = lVar5 + lVar7;
                lVar7 = lVar7 + 0x30;
                uVar6 = uVar6 + 1;
                Dino_Tracking_ServerTrackingCore__WriteParameter_24616d8(param_2,lVar5);
                lVar5 = param_3[2];
              } while (lVar5 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

